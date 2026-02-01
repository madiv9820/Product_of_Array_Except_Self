int* productExceptSelf(int *nums, int numsSize, int* returnSize) {
    // 📏 The output array will have the same size as the input array
    *returnSize = numsSize;

    // 📦 Allocate memory for the final result array
    int *products = (int*) calloc(*returnSize, sizeof(int));

    // 🔢 Loop variable
    int index;
    
    // ➡️ Prefix products array
    // prefixProducts[i] stores the product of all elements BEFORE index i
    int *prefixProducts = (int*) calloc(*returnSize, sizeof(int));
    prefixProducts[0] = 1;   // No elements before index 0
    
    // ⬅️ Suffix products array
    // suffixProducts[i] stores the product of all elements AFTER index i
    int *suffixProducts = (int*) calloc(*returnSize, sizeof(int));
    suffixProducts[*returnSize - 1] = 1;   // No elements after last index
    
    // 🔁 Build prefix products
    // prefixProducts[i] = nums[0] * nums[1] * ... * nums[i-1]
    for(index = 1; index < *returnSize; ++index)
        prefixProducts[index] = prefixProducts[index - 1] * nums[index - 1];

    // 🔁 Build suffix products
    // suffixProducts[i] = nums[i+1] * nums[i+2] * ... * nums[n-1]
    for(index = *returnSize - 2; index >= 0; --index)
        suffixProducts[index] = suffixProducts[index + 1] * nums[index + 1];

    // 🧮 Final result
    // productExceptSelf[i] = prefixProducts[i] * suffixProducts[i]
    for(index = 0; index < *returnSize; ++index)
        products[index] = prefixProducts[index] * suffixProducts[index];
    
    // 🧹 Free auxiliary memory (good practice!)
    free(prefixProducts);
    free(suffixProducts);

    // 🎯 Return the result array
    return products;
}