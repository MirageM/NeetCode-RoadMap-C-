class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for(int n: nums){
            if(s.find(n - 1) == s.end()){
                int length;
                while(s.find(n + length) != s.end()){
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
