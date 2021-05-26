#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int get_coins(vector<int>&coins, int value){
			int max=value+1;
			vector<int>dp(value+1,max);
			dp[0]=0;
			
			for(int i=1; i<=value; i++){
				for(int j=0; j<coins.size(); j++){
					if(coins[j]<=i){
						dp[i]=min(dp[i], dp[i-coins[j]]+1);
					}
				}
			}
			return dp[value] > value ? -1 : dp[value]; 
		}
};

int main()
{
	int n;
		cout<<"How many coins you want"<<endl;
		cin>>n;
		
	    cout<<"Enter the values of coins "<<endl;
	    vector<int>coins;
	    int element;
	    for(int i=0; i<n; i++){
	    	cin>>element;
	    	coins.push_back(element);
		}
		int value;
		cout<<"What is the value you want "<<endl;
		cin>>value;
		Solution s;
		int ans = s.get_coins(coins,value);
		cout<<"Coins required "<<ans;
    return 0;
}
