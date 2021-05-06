#include<bits/stdc++.h>
using namespace std;


class solution{
	public:
		vector<vector<int> >sol(int rows){
			
			vector<vector<int> >r(rows);
			
			for(int i=0; i<rows; i++){
				
				r[i].resize(i+1);
				r[i][0]=r[i][i]=1;
				
				for(int j=1; j<i; j++){
					
					r[i][j]=r[i-1][j-1]+r[i-1][j];
				}
				
			}
			return r;
		}
};

int main(){
	
	int r;
	cin>>r;
	
	solution ob;
	vector<vector<int> >ans;
	ans=ob.sol(r);
	
	cout<<"Solution "<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<=i; j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
