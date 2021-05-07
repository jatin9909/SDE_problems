#include<bits/stdc++.h>
using namespace std;

class sell{
	public:
		int maxprofit(vector<int> &prices){
			int maxprofit = 0;
			int minprice=INT_MAX;
			
			for(int i=0; i<prices.size(); i++){
				if(prices[i]<minprice){
					minprice=prices[i];
				}
				
				else if(prices[i]-minprice > maxprofit){
					maxprofit = prices[i]-minprice;
				}
			}
			return maxprofit; 
		}
};

int main(){
	int n;
	cin>>n;
	sell s;
	int ele;
	vector<int> prices;
	for(int i=0; i<n; i++){
		cin>>ele;
		prices.push_back(ele);
	}
	
	cout<<"Max profit "<<s.maxprofit(prices)<<endl;
	
	return 0;
}
