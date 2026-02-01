from typing import List

class pySolution:
    def py_productExceptSelf(self, nums: List[int]) -> List[int]:
        # 📏 Total number of elements in the input list
        n: int = len(nums)

        # 📦 Result list to store product except self for each index
        products: List[int] = [0] * n

        # 🔁 Outer loop: fix one index 'i' at a time
        for i in range(n):

            # ✖️ This will hold the product of all elements except nums[i]
            product: int = 1
            
            # 🔄 Inner loop: multiply all elements except index 'i'
            for j in range(n):

                # ❌ Skip nums[i] by multiplying 1
                # ✅ Multiply nums[j] for all other indices
                product *= nums[j] if i != j else 1
            
            # 🧾 Store the computed product for index 'i'
            products[i] = product

        # 🎯 Return the final result list
        return products