# [🧮 Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/description/?envType=study-plan-v2&envId=top-interview-150)

### Problem Summary 🧩
Given an integer array `nums`, return an array `answer` where each element at index `i` is the **product of all elements** in `nums` except `nums[i]`.

### Requirements ⚙️
- ❌ Division is not allowed
- ⏱ Time Complexity must be O(n)
- 📦 Use constant extra space (output array doesn’t count)
- ✅ All prefix and suffix products fit within a 32-bit integer

### Examples 🔍
- **Input:** `nums = [1, 2, 3, 4]` <br>
**Output:** `[24, 12, 8, 6]`

- **Input:** `nums = [-1, 1, 0, -3, 3]` <br>
**Output:** `[0, 0, 9, 0, 0]`

## Approaches 🧠
- ### [Brute Force](https://github.com/madiv9820/Product_of_Array_Except_Self/blob/Approach_01-Brute_Force/) 
    - 🧮 Computes the product of all elements **except the current index** using a **brute-force nested loop approach** 🔁 (⏱️ **O(n²)** time, ❌ no division).

- ### [Prefix Suffix Product](https://github.com/madiv9820/Product_of_Array_Except_Self/blob/Approach_02-Prefix_Suffix_Product/)
    - ➡️⬅️ Computes the product of all elements **except the current index** using prefix and suffix arrays 🧮, achieving **O(n)** time with **extra memory for clarity** 📦.

- ### [Inplace Prefix Suffix Product](https://github.com/madiv9820/Product_of_Array_Except_Self/blob/Approach_03-In_Place_Prefix_Suffix_Product/)
    - ⚡ Calculates the product of all elements e**xcept itself** in **O(n)** time using a **two-pass prefix** ➡️ and **suffix ⬅️ scan**, achieving **O(1) extra space** by reusing the output array 🧮✨
---