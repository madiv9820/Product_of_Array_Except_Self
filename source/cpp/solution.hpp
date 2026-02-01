#include <vector>
using namespace std;

class Solution {
public:
    vector<int> cpp_productExceptSelf(vector<int>& nums) {
        // 📏 Total number of elements in the input array
        int n = nums.size();

        // 📦 Result array to store product except self for each index
        // Initialized with 0 for clarity
        vector<int> products(n, 0);

        // 🔁 Outer loop: pick one index 'i' at a time
        for(int i = 0; i < n; ++i) {

            // ✖️ This will store the product of all elements except nums[i]
            int product = 1;

            // 🔄 Inner loop: multiply all elements except index 'i'
            for(int j = 0; j < n; ++j) {

                // ❌ Skip multiplying nums[i]
                // ✅ Multiply all other elements
                product *= ((i != j) ? nums[j] : 1);
            }

            // 🧾 Store the computed product for index 'i'
            products[i] = product;
        }

        // 🎯 Return the final result array
        return products;
    }
};