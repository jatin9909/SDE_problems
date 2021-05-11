#include<iostream>
using namespace std;

class finds{
	public: 
		int uniquepaths(int m, int n){  //m rows and n columns
			int N=m+n-2;
			int r=n-1;
			
			int res = NCR(N,r);
			return res;
		}
		int NCR(int n, int r){
			if(n==r || r==0)
			return 1;
			
			return NCR(n-1,r-1)+NCR(n-1,r);
		}
};

int main(){
	int row,col;
	cout<<"Enter row and columns "<<endl;
	cin>>row>>col;
	finds f;
	int ans = f.uniquepaths(row,col);
	cout<<endl;
	cout<<ans<<" paths to reach your destinations"<<endl;
	
	return 0;
}
