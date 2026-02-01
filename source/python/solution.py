from typing import List

class pySolution:
    def py_productExceptSelf(self, nums: List[int]) -> List[int]:
        # 📏 Total number of elements in the input list
        n: int = len(nums)

        # 📦 Result list to store product except self for each index
        products: List[int] = [0] * n

        # ➡️ Prefix products
        # prefixProducts[i] stores the product of all elements BEFORE index i
        prefixProducts: List[int] = [1] * n

        # ⬅️ Suffix products
        # suffixProducts[i] stores the product of all elements AFTER index i
        suffixProducts: List[int] = [1] * n

        # 🔁 Build prefix products
        # prefixProducts[i] = nums[0] * nums[1] * ... * nums[i-1]
        for index in range(1, n):
            prefixProducts[index] = prefixProducts[index - 1] * nums[index - 1]
        
        # 🔁 Build suffix products
        # suffixProducts[i] = nums[i+1] * nums[i+2] * ... * nums[n-1]
        for index in range(n - 2, -1, -1):
            suffixProducts[index] = suffixProducts[index + 1] * nums[index + 1]

        # 🧮 Final computation
        # products[i] = prefixProducts[i] * suffixProducts[i]
        for index in range(n):
            products[index] = prefixProducts[index] * suffixProducts[index]

        # 🧹 Explicitly delete auxiliary arrays (optional, for clarity)
        del prefixProducts
        del suffixProducts

        # 🎯 Return the result list
        return products