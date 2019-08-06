#include <iostream>
#include <Windows.h>

#include <cuda_runtime.h>

using namespace std;
extern "C" __declspec(dllexport) void init();

void init()
{
    int count;
    cudaError_t error = cudaGetDeviceCount(&count);
    printf("Devices: %i, error: %i\n",count,error);fflush(stdout);
}
