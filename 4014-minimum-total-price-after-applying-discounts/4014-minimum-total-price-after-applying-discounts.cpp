class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int m=discounts.size();
        int n=prices.size();
        sort(discounts.begin(),discounts.end());
        sort(prices.begin(),prices.end());

        double sum=0;
        int i=m-1,j=n-1;
        while(i>=0 && j>=0){
            sum+=(double)(prices[j]*(100-discounts[i]))/100;
            j--;i--;
        }
        while(j>=0){
            sum+=(double)prices[j];
            j--;
        }
        return sum;
    }
};