# Product Except Self – Prefix + Suffix Product Approach 🧠
This approach computes the result array by **splitting the product calculation into two independent parts** for each index:
- **Left side (prefix products)**
- **Right side (suffix products)**

Instead of recalculating products repeatedly, we **precompute** these values once and reuse them.


#### 1️⃣ Prefix Products ➡️
- `prefixProducts[i]` stores the product of **all elements before index** `i`.
- There are no elements before index `0`, so: `prefixProducts[0] = 1`
- Built from **left to right**.

#### 2️⃣ Suffix Products ⬅️
- `suffixProducts[i]` stores the product of **all elements after index** `i`.
- There are no elements after the last index, so: `suffixProducts[n-1] = 1`
- Built from **right to left**.

#### 3️⃣ Final Result 🧮
- For each index `i`: `productExceptSelf[i] = prefixProducts[i] * suffixProducts[i]`
- This multiplication effectively excludes the element at index `i` while including all others.

### Why This Works ✅
- Every element’s contribution is counted **exactly once**.
- No division is used.
- Each pass through the array is linear.

### Complexity Analysis ⏱️
- **Time Complexity:** O(n)
- **Space Complexity:** O(n) extra (prefix + suffix arrays)

### When to Use This Approach 🎯
- When clarity and correctness are the priority.
- As a **bridge solution** between brute-force and fully optimized `O(1)` space approaches.
- Excellent for **explaining logic in interviews**.