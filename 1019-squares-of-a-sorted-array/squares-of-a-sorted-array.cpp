class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int l = 0;
       int r = nums.size()-1;
       vector<int>arr(nums.size());
       int k = nums.size()-1;
       while(l<=r)
       {
        if(abs(nums[l])<=abs(nums[r]))
        {
            arr[k] = nums[r]*nums[r]; 
            r--;      

        }
        else
        {
            arr[k] = nums[l]*nums[l];
            l++;
        }
        k--;
       }
        return arr;
  
        
    }
};