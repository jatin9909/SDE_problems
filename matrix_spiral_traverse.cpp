#include<bits/stdc++.h>
using namespace std;


class solution{
	public:
		vector<int> spiral_traverse(vector<vector<int> >matrix, int r, int c){
			
			vector<int>a;
			int direction =0;
			int top=0;
			int down=r-1;
			int left =0;
			int right=c-1;
			
			while(left<=right && top<=down){
				
				if(direction==0){
					for(int i=left; i<=right; i++){
						a.push_back(matrix[top][i]);
					}
					top++;
				}
				
				else if(direction==1){
					for(int i=top; i<=down; i++){
						a.push_back(matrix[i][right]);
					}
					right--;
				}
				
				else if(direction==2){
					for(int i=right; i>=left; i--){
						a.push_back(matrix[down][i]);
					}
					down--;
				}
				
				else if(direction==3){
					for(int i=down; i>=top; i--){
						a.push_back(matrix[i][left]);
					}
					left++;
				}
				
				
				direction = (direction+1)%4;
				
			}
			
			return a;
			
			
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
	
	solution ob;
	vector<int> result = ob.spiral_traverse(matrix,r,c);
	for(int i=0; i<result.size(); i++){
		cout<<result[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
