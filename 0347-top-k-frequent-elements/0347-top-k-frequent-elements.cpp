#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequencies
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Create buckets (index = frequency)
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto& pair : freq) {
            int num = pair.first;
            int count = pair.second;
            buckets[count].push_back(num);
        }

        // Step 3: Collect top k from highest frequency
        vector<int> ans;
        for (int i = buckets.size() - 1; i > 0; i--) {
            for (int num : buckets[i]) {
                ans.push_back(num);
                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans; // fallback (though normally returned earlier)
    }
};