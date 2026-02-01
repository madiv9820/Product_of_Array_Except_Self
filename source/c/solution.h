#include <stdlib.h>

int* productExceptSelf(int *nums, int numsSize, int* returnSize) {
    // 📦 The output array should have the same size as input
    *returnSize = numsSize;

    // 🧠 Allocate memory for the result array and initialize with 0
    int *products = (int*) calloc(*returnSize, sizeof(int));

    // 🔁 Outer loop: fix one index 'i' at a time
    for(int i = 0; i < *returnSize; ++i) {

        // ✖️ This will store the product of all elements except nums[i]
        int product = 1;
        
        // 🔄 Inner loop: multiply all elements except when index matches 'i'
        for(int j = 0; j < *returnSize; ++j) {

            // ❌ Skip multiplication when i == j
            // ✅ Multiply nums[j] otherwise
            product *= ((i != j) ? nums[j] : 1);
        }

        // 🧾 Store the computed product for index 'i'
        products[i] = product;
    }

    // 🎯 Return the final result array
    return products;
}