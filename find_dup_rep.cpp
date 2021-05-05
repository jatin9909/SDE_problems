#include<bits/stdc++.h>
using namespace std;

class solution{
	public:
		void sol(int a[], int n){
			sort(a, a+n);
			
			for(int i=0; i<n ; i++){
				int j=i+1;
				if(a[i]==a[j]){
					cout<<"Repeated number is "<<a[i]<<endl;
					break;
				}
			}
			int sum=0;
			int k=0;
			

			for(int i=0; i<n-1 ; i++){
				if(a[i]!=a[i+1]){
					 a[k++]=a[i];
				}
			}
		    a[k++] = a[n-1];
			
			int total = ((k+1)*(k+2))/2;
			for(int i=0; i<k; i++){
				total-=a[i];
			} 
			cout<<"missing number is "<<total <<endl;
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
		ob.sol(a,n);
		
	}
	return 0;
}
