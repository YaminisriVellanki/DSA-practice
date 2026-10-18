class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int index1 = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
      if(index1==nums.size()||nums[index1]!=target)
    {
        return{-1,-1};
    }
    int index2 = upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
    return {index1,index2};
    }
};
