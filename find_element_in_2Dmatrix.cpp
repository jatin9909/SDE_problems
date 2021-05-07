#include<bits/stdc++.h>
using namespace std;

class solution{
	public:
		int found(vector<vector<int> >&mat, int N, int M, int X){
			int smallest = mat[0][0]; int largest = mat[N-1][M-1];
	    
	    
	    int i=0; int j=M-1;
	    while(i<N && j>=0){
	        if(X==mat[i][j])
	            return 1;
	        
	        else if(X<mat[i][j])
	            j--;
	        
	        else
	            i++;
	    }
	    
	    return 0;
		}
};

int main(){
	int n,m,ele;
	
	cin>>n>>m;
	solution s;
	
	vector<vector<int> >arr(n,vector<int> (m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
		cin>>arr[i][j];
	}
}
	cin>>ele;
	cout<<s.found(arr,n,m,ele)<<endl;
	
	return 0;
}
