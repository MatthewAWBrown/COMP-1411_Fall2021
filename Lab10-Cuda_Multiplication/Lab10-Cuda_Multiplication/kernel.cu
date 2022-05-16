/**
 * Copyright 1993-2013 NVIDIA Corporation.  All rights reserved.
 *
 * Please refer to the NVIDIA end user license agreement (EULA) associated
 * with this source code for terms and conditions that govern your use of
 * this software. Any use, reproduction, disclosure, or distribution of
 * this software and related documentation outside the terms of the EULA
 * is strictly prohibited.
 *
 * Extended for use in CS 374 at Calvin College by Joel C. Adams.
 */

/************************************************************************
* COMP1411 - Computer Programming I                                     *
* Lab 10                                                                *
* Matthew Brown, Student ID# 1126992                                    *
************************************************************************/

#include <stdio.h>
#include <time.h>


  // For the CUDA runtime routines (prefixed with "cuda_")
#include <cuda_runtime.h>

/**
 * CUDA Kernel Device code
 *
 * Computes the vector multiplication of A and B into C.
 * The 3 vectors have the same number of elements numElements.
 */
__global__
void vectorMUL(const float* A, const float* B, float* C, unsigned long numElements)
{
    int i = blockDim.x * blockIdx.x + threadIdx.x;

    if (i < numElements)
    {
        C[i] = A[i] * B[i];
    }
}

void checkErr(cudaError_t err, const char* msg)
{
    if (err != cudaSuccess)
    {
        fprintf(stderr, "%s (error code %d: '%s')!\n", msg, err, cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
}

/**
 * Host main routine
 */
int main(int argc, char** argv)
{

    // Error code to check return values for CUDA calls
    cudaError_t err = cudaSuccess;

    // Print the vector length to be used, and compute its size
    unsigned long numElements = 100000000;
    if (argc == 2) {
        numElements = strtoul(argv[1], 0, 10);
    }
    size_t size = numElements * sizeof(float);
    printf("[Vector multiplication of %lu elements]\n", numElements);

    // Allocate the host input vectors A & B
    float* h_A = (float*)malloc(size);
    float* h_B = (float*)malloc(size);

    // Allocate the host output vector C
    float* h_C = (float*)malloc(size);

    // Verify that allocations succeeded
    if (h_A == NULL || h_B == NULL || h_C == NULL)
    {
        fprintf(stderr, "Failed to allocate host vectors!\n");
        exit(EXIT_FAILURE);
    }

    // Initialize the host input vectors
    for (int i = 0; i < numElements; ++i)
    {
        h_A[i] = rand() / (float)RAND_MAX;
        h_B[i] = rand() / (float)RAND_MAX;
    }

    //start cuda timer
    clock_t cudastart_t = clock();

    // 1a. Allocate the device input vectors A & B
    float* d_A = NULL;
    err = cudaMalloc((void**)&d_A, size);
    checkErr(err, "Failed to allocate device vector A");
    float* d_B = NULL;
    err = cudaMalloc((void**)&d_B, size);
    checkErr(err, "Failed to allocate device vector B");

    // 1.b. Allocate the device output vector C
    float* d_C = NULL;
    err = cudaMalloc((void**)&d_C, size);
    checkErr(err, "Failed to allocate device vector C");

    // 2. Copy the host input vectors A and B in host memory 
    //     to the device input vectors in device memory
    clock_t hosttstart_t = clock();

    printf("Copy input data from the host memory to the CUDA device\n");
    err = cudaMemcpy(d_A, h_A, size, cudaMemcpyHostToDevice);
    checkErr(err, "Failed to copy device vector A from host to device");


    err = cudaMemcpy(d_B, h_B, size, cudaMemcpyHostToDevice);
    checkErr(err, "Failed to copy device vector B from host to device");

    clock_t hosttend_t = clock();
    double hosttotal_t = (double)(hosttend_t - hosttstart_t) / CLOCKS_PER_SEC;
    printf("Host-to-device transfer timer: %LF\n", hosttotal_t);

    // 3. Launch the Vector Add CUDA Kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (numElements + threadsPerBlock - 1) / threadsPerBlock;
    printf("CUDA kernel launch with %d blocks of %d threads\n", blocksPerGrid, threadsPerBlock);
    vectorMUL << <blocksPerGrid, threadsPerBlock >> > (d_A, d_B, d_C, numElements);
    err = cudaGetLastError();
    checkErr(err, "Failed to launch vectorAdd kernel");

    // 4. Copy the device result vector in device memory
    //     to the host result vector in host memory.
    clock_t devtstart_t = clock();
    printf("Copy output data from the CUDA device to the host memory\n");
    err = cudaMemcpy(h_C, d_C, size, cudaMemcpyDeviceToHost);
    checkErr(err, "Failed to copy vector C from device to host");
    clock_t devtend_t = clock();
    double devtotal_t = (double)(devtend_t - devtstart_t) / CLOCKS_PER_SEC;
    printf("Device-to-host transfer time: %lf\n", devtotal_t);

    //stop cuda timer
    clock_t cudaend_t = clock();
    //get total cuda time
    double cudatotal_t = (double)(cudaend_t - cudastart_t) / CLOCKS_PER_SEC;

    //start cpu timer
    clock_t start_t = clock();
    // Verify that the result vector is correct
    for (int i = 0; i < numElements; ++i)
    {
        if (fabs(h_A[i] * h_B[i] - h_C[i]) > 1e-5)
        {
            fprintf(stderr, "Result verification failed at element %d!\n", i);
            exit(EXIT_FAILURE);
        }
    }



    printf("CUDA test PASSED\n");
    printf("CUDA time: %LF\n", cudatotal_t); 

        // Free device global memory
    err = cudaFree(d_A);
    checkErr(err, "Failed to free device vector A");

    err = cudaFree(d_B);
    checkErr(err, "Failed to free device vector B");

    err = cudaFree(d_C);
    checkErr(err, "Failed to free device vector C");


    // repeat the computation sequentially
    for (int i = 0; i < numElements; ++i)
    {
        h_C[i] = h_A[i] * h_B[i];
    }

    // verify again
    for (int i = 0; i < numElements; ++i)
    {
        if (fabs(h_A[i] * h_B[i] - h_C[i]) > 1e-5)
        {
            fprintf(stderr, "Result verification failed at element %d!\n", i);
            exit(EXIT_FAILURE);
        }
    }

    //stop timer
    clock_t end_t = clock();
    //get total time
    double total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;

    printf("\nNormal test PASSED\n");
    printf("Normal time: %LF\n", total_t); 

        // Free host memory
    free(h_A);
    free(h_B);
    free(h_C);

    // Reset the device and exit
    err = cudaDeviceReset();
    checkErr(err, "Unable to reset device");

    printf("Done\n");
    return 0;
}
