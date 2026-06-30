class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0,j=n-1;
        int sum;
        while (j>i){
            sum=numbers.at(i)+numbers.at(j);
            if (sum==target){
                i=i+1;
                j=j+1;
                return {i,j};
            }
            if (sum>target){
                j--;
            }
            else {
                i++;
            }

        }
        return {0};
    }
};