// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         for(int i = 0; i < nums.size()-1; i++) {
//             for(int j = i + 1; j < nums.size(); j++) {
//                 if(nums[i] + nums[j] == target) {
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//     }
// };

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
            unordered_map<int, int> seen;
            for(int i = 0; i < n; i++) {
                int compliment = target - nums[i];
                if(seen.count(compliment)) {
                    return {seen[compliment], i};
                }
                seen[nums[i]] = i;
            }
            return {};
        }
};