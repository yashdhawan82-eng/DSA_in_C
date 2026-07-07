class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int arr[2]={0,0};
        int low=0,res=INT_MIN,len,max_count=0,dif;
        for (int high=0;high<nums.size();high++){
            if (nums[high]==1){
                arr[1]=arr[1]+1;
            }
            else {
                arr[0]=arr[0]+1;
            }
            len = high-low+1;
            while(arr[0]>k){
                if (nums[low]==0){
                    arr[0]=arr[0]-1;
                }
                else{
                    arr[1]=arr[1]-1;
                }
                low++;

            }
            len=high-low+1;
            res=max(res,len);

        }
        return res;

    }
};