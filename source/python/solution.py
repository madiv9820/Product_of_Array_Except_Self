from typing import List

class pySolution:
    def py_productExceptSelf(self, nums: List[int]) -> List[int]:
        # 📏 Total number of elements in the input list
        n: int = len(nums)

        # 📦 Result list
        # Initialized with 1 so prefix and suffix products can be multiplied safely
        products: List[int] = [1] * n

        # ➡️ Running prefix product (product of elements to the left)
        prefixProduct: int = 1

        # ⬅️ Running suffix product (product of elements to the right)
        suffixProduct: int = 1

        # 🔁 First pass (left → right)
        # Store prefix products directly in the result list
        for index in range(1, n):
            prefixProduct *= nums[index - 1]
            products[index] = prefixProduct

        # 🔁 Second pass (right → left)
        # Multiply each index with its corresponding suffix product
        for index in range(n - 2, -1, -1):
            suffixProduct *= nums[index + 1]
            products[index] *= suffixProduct

        # 🎯 Return the final result list
        return products