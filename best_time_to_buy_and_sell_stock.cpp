class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // if size of the vector is 0 , then we return 0;
     if(prices.size()==0){
            return 0;
        }
    int mp =0;
        int mnp = INT_MAX;
        int c = 0;
        for(int i =0 ; i < prices.size(); i++){
            mnp = min(mnp,prices[i]);
            c = prices[i]-mnp;
            mp = max(mp,c);
        }
        return mp;
    }
};
