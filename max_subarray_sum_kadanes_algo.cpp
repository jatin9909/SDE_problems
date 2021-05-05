#include<bits/stdc++.h>
using namespace std;

class solution{
	public:
		int sol(int a[], int n){
			
			int size=n;
			int dp[size];
			dp[0]=a[0];
			int maximum;
			maximum = dp[0];
			
			for(int i=1; i<n; i++){
				dp[i]=max(a[i],a[i]+dp[i-1]);
				if(dp[i]>maximum){
					maximum = dp[i];
				}
			}
			return maximum;
		}
};



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		
		
		solution ob;
		cout<<"Maximum subarray sum "<<ob.sol(a,n)<<endl;
		
		
		
	}
	return 0;
}
