#include<bits/stdc++.h> 
using namespace std; 

class Solution{
	public:
		bool IsSafe(int row, int col,vector<string>&board, int n){
			int duprow = row;
        int dupcol = col; 
        
        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        
        
        col = dupcol; 
        row = duprow;
        while(col>=0) {
            if(board[row][col] == 'Q') return false;
            col--; 
        }
    
        row = duprow;
        col = dupcol; 
        while(row<n && col>=0) {
            if(board[row][col] == 'Q') return false;
            row++;
            col--; 
        }
        
        return true; 
		}
		void solve(int col, vector<string>&board, vector<vector<string>>&ans, int n){
			if(col==n){
				ans.push_back(board);
			}
			
			for(int row=0; row<n; row++){
				if(IsSafe(row,col,board,n)){
					board[row][col]='Q';
					solve(col+1, board,ans,n);
					board[row][col]='.';
				}
			}
		}
		vector<vector<string>>SolveNQueens(int n){
			vector<vector<string>>ans;
			vector<string>board(n);
			string s(n,'.');
			for(int i=0; i<n; i++){
				board[i]='.';
			}
			solve(0,board,ans,n);
			return ans;
		}
};

int main()
{
    
        
        int n;
        cout<<"Enter the size of chess board"<<endl;
        cin>>n;
        Solution ob;
        vector<vector<string>> ans = ob.SolveNQueens(n);
        for (int i = 0; i < ans.size(); i++) { //ans.size() is the number of row
        	for (int j = 0; j < ans[i].size(); j++)
            	cout << ans[i][j] << " ";
        cout << endl;
    }
        cout<<endl;
    
    return 0;
} 
