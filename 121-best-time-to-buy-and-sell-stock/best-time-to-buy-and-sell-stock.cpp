class Solution {
public:
    int maxProfit(vector<int> prices){
        int MP=0;
        int BB=prices[0];
        for(int i=1;i<prices.size();i++){
            if (prices[i]>BB){
                MP=max(MP,prices[i]-BB);
            }
            BB=min(BB,prices[i]);
        }
        return MP;
    }
        
    

 
};