class Solution {
public:
    void subsets(vector<vector<int>> &res, vector<int> nums, int l, int r, vector<int> &temp){
        if(l == r+1){
            res.push_back(temp);
            return;
        }
        subsets(res, nums, l+1, r, temp);
        temp.push_back(nums[l]);
        subsets(res, nums, l+1, r, temp);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int x = nums.size()-1;
        vector<int> temp;
        subsets(res, nums, 0, x, temp);
        return res;
    }
};
