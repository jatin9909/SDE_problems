#include<bits/stdc++.h>
using namespace std;

class solution{
	public:
		void sort(int a[], int n){
			int j=0;
			for(int i=0; i<n; i++){
				if(a[i]==0){
					if(i==j){
						j++;
					}
					else{
						swap(a[i],a[j]);
						j++;
					}
				}
			}
			
			for(int i=0; i<n; i++){
				if(a[i]==1){
					if(i==j){
						j++;
					}
					else{
						swap(a[i],a[j]);
						j++;
					}
				}
			}
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
		ob.sort(a,n);
		
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
