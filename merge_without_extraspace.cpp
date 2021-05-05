#include<bits/stdc++.h>
using namespace std;

class solution{
	public:
		void sol(int a[], int n, int b[], int m){
			int i=n-1; int j=0;
			
			while(i>=0 && j<m){
				if(a[i]>b[j]){
					swap(a[i],b[j]);
				}	
				i--;
				j++;
			}
				sort(a,a+n);
			    sort(b,b+m);
			
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
		
		int m;
		cin>>m;
		int b[m];
		for(int i=0; i<m; i++){
			cin>>b[i];
		}
		
		solution ob;
		ob.sol(a,n,b,m);
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		for(int i=0; i<m; i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
		
		
	}
	return 0;
}
