class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int cm=1,off=0,res=1;
        while (cm<n){
            if (nums[cm]==nums[cm-1]){
                cm++;
                continue;
            }
            else {
                nums[off+1]=nums[cm];
                cm++;
                off++;
                res++;
            }
        }
        return res;
    }
};