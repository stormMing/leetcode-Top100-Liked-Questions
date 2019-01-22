//解法1：Runtime: 12 ms, faster than 60.49% of C++ online submissions for Single Number.
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            res ^= nums[i];
        }
        return res;
    }
};
