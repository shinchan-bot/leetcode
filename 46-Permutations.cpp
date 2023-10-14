class Solution {
public:
    void permute(vector<vector<int>> &res, vector<int> nums, int l, int r){
        if(l == r){
            res.push_back(nums);
            return;
        }
        //i = l; for the permutation when an element stays at original index
        for(int i=l; i<=r; i++){
            std::swap(nums[i], nums[l]);

            permute(res, nums, l+1, r);

            std::swap(nums[i], nums[l]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int x = nums.size()-1;

        permute(res, nums, 0, x);
        return res;
    }
};
