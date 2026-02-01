#include <vector>
using namespace std;

class Solution {
public:
    vector<int> cpp_productExceptSelf(vector<int>& nums) {
        // 📏 Total number of elements in the input array
        int n = nums.size();

        // 📦 Result array
        // Initialized with 1 so we can safely multiply prefix & suffix values
        vector<int> products(n, 1);

        // ➡️ Running prefix product (product of elements to the left)
        int prefixProduct = 1;

        // ⬅️ Running suffix product (product of elements to the right)
        int suffixProduct = 1;

        // 🔁 First pass (left → right)
        // Store prefix products directly in the output array
        for(int index = 1; index < n; ++index) {
            prefixProduct *= nums[index - 1];
            products[index] = prefixProduct;
        }

        // 🔁 Second pass (right → left)
        // Multiply each index with its corresponding suffix product
        for(int index = n - 2; index >= 0; --index) {
            suffixProduct *= nums[index + 1];
            products[index] *= suffixProduct;
        }

        // 🎯 Return the final result
        return products;
    }
};