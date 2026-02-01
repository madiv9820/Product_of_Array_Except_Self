# Product Except Self – In-Place Prefix + Suffix Product Approach 🧠
This approach computes the result array using **two linear passes** while **reusing the output array** to avoid extra memory.

### How It Works ⚙️
1. **Prefix Pass (Left → Right)** ➡️
    - Store the product of all elements **to the left** of each index directly in the result array.
    - For index `0`, the prefix product is `1` (no elements on the left).

2. **Suffix Pass (Right → Left)** ⬅️
    - Maintain a running suffix product of elements **to the right**.
    - Multiply this suffix product with the value already stored in the result array.

### Why This Works ✅
- Each index gets: `(product of elements on the left) × (product of elements on the right)`
- The current element is naturally excluded.
- No division is used.
- No extra prefix or suffix arrays are required.

### Complexity Analysis ⏱️
- **Time Complexity:** O(n)
- **Space Complexity:** O(1) extra (output array excluded)

### When to Use 🎯
- When optimal performance is required.
- This is the **final, interview-ready** solution expected by most interviewers.