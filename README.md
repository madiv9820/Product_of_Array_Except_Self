# Product Except Self – Brute-Force Approach 🔁

### Approach Overview 🧠
- Uses **nested loops** to calculate the product for each index.
- For each element at index `i`:
    - Initialize `product = 1`.
    - Multiply all elements **except the one at index** `i`.
- Stores the result in the output array/list.

    #### Key Features:
    - ✅ Simple and easy to understand
    - ❌ Not optimized (time complexity O(n²))
    - 🧮 Serves as a **baseline** for further optimization

### Complexity Analysis ⏱️
- **Time Complexity:** O(n²)
- **Space Complexity:** O(1) extra (excluding output array/list)

### Notes 📝
- This approach is useful for **understanding the basic logic**.
- Ideal as a **starting point** before moving to **prefix-suffix optimized solutions**.