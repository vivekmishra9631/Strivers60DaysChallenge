class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++) {
        if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                long long sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    j++;
                    k--;
                }
              else if (sum > 0) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }
    }
        return ans;
    }
};