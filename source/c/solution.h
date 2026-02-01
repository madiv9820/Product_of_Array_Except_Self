int* productExceptSelf(int *nums, int numsSize, int* returnSize) {
    // 📏 The output array will have the same size as the input array
    *returnSize = numsSize;

    // 📦 Allocate memory for the result array
    int *products = (int*) calloc(*returnSize, sizeof(int));
    
    // 🔢 Loop index
    int index = 0;

    // ➡️ Running prefix product (product of elements to the left)
    int prefixProduct = 1;

    // ⬅️ Running suffix product (product of elements to the right)
    int suffixProduct = 1;

    // 🧱 Base case:
    // For index 0, there are no elements to the left
    products[index] = 1;

    // 🔁 First pass (left → right)
    // Store prefix products directly in the output array
    for(index = 1; index < *returnSize; ++index) {
        prefixProduct *= nums[index - 1];
        products[index] = prefixProduct;
    }

    // 🔁 Second pass (right → left)
    // Multiply each index with its corresponding suffix product
    for(index = *returnSize - 2; index >= 0; --index) {
        suffixProduct *= nums[index + 1];
        products[index] *= suffixProduct;
    }

    // 🎯 Return the result array
    return products;
}