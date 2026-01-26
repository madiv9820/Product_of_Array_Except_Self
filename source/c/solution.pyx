from libc.stdlib cimport free, malloc

cdef extern from 'solution.h':
    int* productExceptSelf(int *nums, int numsSize, int* returnSize)

cdef class cSolution:
    def c_productExceptSelf(self, nums):
        cdef int arraySize = len(nums)
        cdef int *cArray = <int*> malloc(sizeof(int) * arraySize)
        cdef int i
        cdef int *cOutput = NULL
        cdef int returnSize = 0
        output = []

        if not cArray: raise MemoryError()

        for i in range(arraySize): cArray[i] = nums[i]
        cOutput = productExceptSelf(cArray, arraySize, &returnSize)

        for i in range(returnSize): output.append(cOutput[i])
        
        free(cArray)
        free(cOutput)

        return output