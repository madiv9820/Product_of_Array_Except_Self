#include <vector>
using namespace std;

class Solution {
public:
    vector<int> cpp_productExceptSelf(vector<int>& nums) {
        // 📏 Total number of elements in the input array
        int n = nums.size();

        // 📦 Result array to store product except self for each index
        vector<int> products(n, 0);

        // ➡️ Prefix products
        // prefixProducts[i] stores the product of all elements BEFORE index i
        vector<int> prefixProducts(n, 1);

        // ⬅️ Suffix products
        // suffixProducts[i] stores the product of all elements AFTER index i
        vector<int> suffixProducts(n, 1);

        // 🔁 Build prefix products
        // prefixProducts[i] = nums[0] * nums[1] * ... * nums[i-1]
        for(int index = 1; index < n; ++index)
            prefixProducts[index] = prefixProducts[index - 1] * nums[index - 1];

        // 🔁 Build suffix products
        // suffixProducts[i] = nums[i+1] * nums[i+2] * ... * nums[n-1]
        for(int index = n - 2; index >= 0; --index)
            suffixProducts[index] = suffixProducts[index + 1] * nums[index + 1];

        // 🧮 Final computation
        // products[i] = prefixProducts[i] * suffixProducts[i]
        for(int index = 0; index < n; ++index)
            products[index] = prefixProducts[index] * suffixProducts[index];

        // 🧹 Explicitly release extra memory (optional but intentional)
        vector<int>().swap(prefixProducts);
        vector<int>().swap(suffixProducts);

        // 🎯 Return the result array
        return products;
    }
};