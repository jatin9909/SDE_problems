#include<bits/stdc++.h>
using namespace std;


class solution{
	public:
		vector<vector<int> >spiral_traverse(vector<vector<int> >matrix, int r, int c){
			
			vector<int>row(r);
			vector<int>col(c);
			
			for(int i=0; i<r; i++){
				row[i]=1;
			}
			
			for(int j=0; j<c; j++){
				col[j]=1;
			}
			
			for(int i=0; i<r;i++){
				for(int j=0; j<c; j++){
					if(matrix[i][j]==0){
						row[i]=0;
						col[j]=0;
					}
				}
			}
			
			for(int i=0; i<r;i++){
				for(int j=0; j<c; j++){
					if(row[i]==0||col[j]==0){
						matrix[i][j]=0;
					}
				}
			}
			
			
			return matrix;
		}
};

int main(){
	
	int r,c;
	cin>>r>>c;
	
	vector<vector<int> >matrix(r);
	
	for(int i=0; i<r; i++){
		matrix[i].assign(c,0);
		for(int j=0; j<c; j++){
			cin>>matrix[i][j];
		}
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	solution ob;
	vector<vector<int> >matrix1(r);
	
	matrix1 = ob.spiral_traverse(matrix,r,c);
	
	cout<<"Solution "<<endl;
	for(int i=0; i<r; i++){
				for(int j=0; j<c; j++){
					cout<<matrix1[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
