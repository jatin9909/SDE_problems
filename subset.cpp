#include<bits/stdc++.h> 
using namespace std; 

class Solution{
	private:
		void findsubset(int index, vector<int>&num, vector<int>&ds, vector<vector<int>>&ans){
			ans.push_back(ds);
			for(int i=index; i<num.size(); i++){
				if(i!=index && num[i]==num[i-1]) continue;
				ds.push_back(num[i]);
				findsubset(i+1,num,ds,ans);
				ds.pop_back();
			}
		}
		public:
			vector<vector<int>>subsetwithdup(vector<int>&num){
				vector<vector<int>>ans;
				vector<int>ds;
				sort(num.begin(), num.end());
				findsubset(0,num,ds,ans);
				return ans;
			}
};

int main()
{
    
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<vector<int>> ans = ob.subsetwithdup(arr);
        for (int i = 0; i < ans.size(); i++) { //ans.size() is the number of row
        	for (int j = 0; j < ans[i].size(); j++)
            	cout << ans[i][j] << " ";
        cout << endl;
    }
        cout<<endl;
    
    return 0;
} 
