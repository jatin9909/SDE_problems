#include<bits/stdc++.h>
using namespace std;

class solution{
	public:
		void display(int a[], int size){
			for(int i=0; i<size; i++){
				cout<<a[i]<<" ";
			}
		}
		
		void sol(int a[], int n, int b[], int m){
			
			int i=0; int j=0; int k=0;
			int size = m+n;
			int *arr = new int[size];
			while(i<n && j<m){
				if(a[i]>b[j]){
					arr[k++]=b[j++];
				}
				else{
					arr[k++]=a[i++];
				}
			}
			for(;i<n; i++){
				arr[k++]=a[i];
			}
			for(;j<m; j++){
				arr[k++]=b[j];
			}
			
			display(arr,size);
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
		int size= n+m;
		solution ob;
		ob.sol(a,n,b,m);
	//	ob.display(a,size);
		
		
	}
	return 0;
}
