class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ques,freq,res=0;
        int n=nums.size(),sum=0;
        unordered_map<int,int>f;
        f[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ques=sum-k;
            res+=f[ques];
            f[sum]++;
            
        }
       return res;
    }
};