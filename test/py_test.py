import unittest
from timeout_decorator import timeout
from source.python.solution import pySolution

class test_py_Solution(unittest.TestCase):
    def setUp(self):
        self.__testcases = (
            ([1,2,3,4], [24,12,8,6]),
            ([-1,1,0,-3,3], [0,0,9,0,0]),
            ([5,10], [10,5]),
            ([-2,-3,-4], [12,8,6]),
            ([1] * 10**5, [1] * 10**5),
            ([0,1,2,0], [0,0,0,0]),
            ([30,-30,1,-1], [30,-30,-900,900])
        )
        self.__solution = pySolution()
        return super().setUp()
    
    @timeout(2)
    def test(self):
        for nums, expectedOutput in self.__testcases:
            with self.subTest(nums):
                actualOutput = self.__solution.py_productExceptSelf(nums)
                self.assertEqual(actualOutput, expectedOutput)

if __name__ == '__main__': unittest.main()