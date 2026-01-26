from libcpp.vector cimport vector

cdef extern from 'solution.hpp':
    cdef cppclass Solution:
        Solution() except + 
        vector[int] cpp_productExceptSelf(vector[int]& nums)

cdef class cppSolution:
    cdef Solution *ptr
    
    def __cinit__(self): self.ptr = new Solution()
    
    def __dealloc__(self): 
        if self.ptr:
            del self.ptr
    
    def cpp_productExceptSelf(self, nums):
        cdef vector[int] cppArray
        cdef vector[int] cppOutput
        output = []

        for num in nums: cppArray.push_back(num)
        
        cppOutput = self.ptr.cpp_productExceptSelf(cppArray)
        
        for x in cppOutput: output.append(x)

        return output