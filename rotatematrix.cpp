#include<bits/stdc++.h>
using namespace std;


class solution{
	public:
		void sol(vector<vector<int> >r){
			
			int size = r.size();
			
			for(int i=0; i<size; i++){
		      for(int j=0; j<size; j++){
					cin>>r[i][j];
		      } 
	        }
			
			for(int i=0; i<size; i++){
				for(int j=0; j<i; j++){
					int temp = r[i][j];
					r[i][j]=r[j][i];
					r[j][i]=temp;
				}
			}
			
			for(int i=0; i<size; i++){
				for(int j=0; j<size/2; j++){
					int temp = r[i][j];
					r[i][j]=r[i][size-j-1];
					r[i][size-j-1]=temp;
				}
			}
			
		}
};

int main(){
	
	int size;
	cin>>size;
	
	solution ob;
	vector<vector<int> >ans(size);
	
	ob.sol(ans);
	
	for(int i=0; i<size; i++){
		      for(int j=0; j<size; j++){
					cout<<ans[i][j]<<" ";
		}
	}
	
	
	return 0;
}
