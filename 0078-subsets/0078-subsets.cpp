class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>&nums,int indx,vector<int>&temp) {
        if(indx ==nums.size()) {
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[indx]);
        solve(nums,indx+1,temp);
        temp.pop_back();
        solve(nums,indx+1,temp);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        solve(nums,0,temp);
        return result;
    }
};