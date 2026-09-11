class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxii=0;
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            maxii= max(maxii,arr[i]);
            if(maxii==i)
            {
                c++;
            }
        }
     return c;
        
    }
};