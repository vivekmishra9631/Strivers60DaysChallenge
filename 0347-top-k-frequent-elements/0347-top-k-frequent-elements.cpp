class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }
        
        auto comp = [&](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first != b.first) {
                return a.first > b.first; // Compare frequencies in descending order
            }
            return a.second < b.second; // If frequencies are equal, compare elements in ascending order
        };
        
        set<pair<int, int>, decltype(comp)> freqSet(comp); // Custom comparison function
        
        for (const auto& entry : freqMap) {
            freqSet.insert({entry.second, entry.first});
        }
        
        vector<int> ans;
        for (const auto& entry : freqSet) {
            if (k == 0) {
                break;
            }
            ans.push_back(entry.second);
            k--;
        }
        
        return ans;
    }
};