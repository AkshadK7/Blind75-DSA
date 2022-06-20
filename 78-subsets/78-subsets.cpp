class Solution {
    
private:
    void solve(vector<int> nums, vector<int> output, int pointer, vector<vector<int>> &ans){
        if(pointer>=nums.size()){
            ans.push_back(output);
            return;
        }

        //exclude
        solve(nums, output, pointer+1, ans);

        //include
        output.push_back(nums[pointer]);
        solve(nums, output, pointer+1, ans);
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> output;
        int pointer = 0;

        solve(nums, output, pointer, ans);

        return ans;

        }
};