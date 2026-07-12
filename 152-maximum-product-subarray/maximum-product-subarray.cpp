class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n=nums.size(),maxend=nums[0],minend=nums[0],ans=nums[0],x,y,z;
       for (int i=1;i<n;i++){
        x=nums[i];
        y=nums[i]*maxend;
        z=nums[i]*minend;
        maxend=max(x,max(y,z));
        minend=min(x,min(y,z));
        ans=max(ans,max(maxend,minend));
       }
       return ans;
    }
};