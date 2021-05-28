#include<bits/stdc++.h> 
using namespace std; 

class Solution{
	public:
		void findsum(int index,int target, vector<int>&num, vector<int>&ds, vector<vector<int>>&ans){
			if(index==num.size()){
				if(target==0){
					ans.push_back(ds);
				}
				return;
			}
			
			if(num[index]<=target){
				ds.push_back(num[target]);
				findsum(index, target-num[index],num,ds,ans);
				ds.pop_back();
			}
			findsum(index+1, target, num, ds,ans);
		}
			vector<vector<int>>combinationsum(vector<int>&num, int target){
				vector<vector<int>>ans;
				vector<int>ds;
				findsum(0,target,num,ds,ans);
				return ans;
			}
};

int main()
{
    
        int N,n;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        cout<<"Enter the target sum "<<endl;
        cin>>n;
        Solution ob;
        vector<vector<int>> ans = ob.combinationsum(arr,n);
        for (int i = 0; i < ans.size(); i++) { //ans.size() is the number of row
        	for (int j = 0; j < ans[i].size(); j++)
            	cout << ans[i][j] << " ";
        cout << endl;
    }
        cout<<endl;
    
    return 0;
} 
