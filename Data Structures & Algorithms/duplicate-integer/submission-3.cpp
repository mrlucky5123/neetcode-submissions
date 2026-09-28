// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         unordered_map<int, int> freq;
//         for(int i = 0; i < n; i++) {
//             freq[nums[i]]++;
//         }

//         for(auto& i : freq) {
//             if(i.second > 1) return true;
//         }
//         return false;
//     }
// };

class Solution{
    public:
        bool hasDuplicate(vector<int>& nums) {
            unordered_set<int> seen;
            seen.reserve(nums.size());

            for(int num : nums) {
                if(seen.find(num) != seen.end()) return true;
                seen.insert(num);
            }
            return false;
        }
};