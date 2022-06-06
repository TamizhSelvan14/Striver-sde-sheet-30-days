class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minprofit=INT_MAX;
        int maxprofit=INT_MIN;
        
        for(int i=0;i<prices.size();i++){
    
            //each time the minimum before was subtracted by the current element and max profit is obtained
            minprofit=min(minprofit,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minprofit);
         
            // cout<<minprofit<<" "<<maxprofit<<endl;
            
        }
        
       
        return maxprofit;
    }
};