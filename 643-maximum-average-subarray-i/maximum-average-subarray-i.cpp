class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int low =1,high=k;
        double s,sum=0,b=INT_MIN;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        double x=sum/k;
        b=max(x,b);
        while(high<n){
            sum=(sum-nums[low-1]+nums[high]);
            b=max(b,sum/k);
            low++;
            high++;
        }
      return b;
    }
};