class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n=nums.size(),zero=0,one=0,res=0,length,diff;
       unordered_map<int,int>f;
       for (int i=0;i<n;i++){
        if(nums[i]==0){
            zero++;
        }
        else{
            one++;
        }
        diff=zero-one;
        if(diff==0){
            res=max(res,i+1);
        }
        if(f.find(diff)==f.end()){
            f[diff]=i;
        }
        else{
            length=i-f[diff];
            res=max(res,length);
        }


       }
       return res;

    }
};