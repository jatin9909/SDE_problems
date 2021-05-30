#include<bits/stdc++.h> 
using namespace std; 

class Solution{
	public:
		void recurpermute(int index, vector<int>&nums,vector<vector<int>>&ans ){
			if(index==nums.size()){
				ans.push_back(nums);
				return;
			}
			for(int i=index; i<nums.size(); i++){
				swap(nums[index],nums[i]);
				recurpermute(index+1, nums, ans);
				swap(nums[index], nums[i]);
			}
		}
		vector<vector<int>> permute(vector<int>&nums){
			vector<vector<int>>ans;
			recurpermute(0,nums,ans);
			
			return ans;
		}
};

int main()
{
    
        vector<int>nums;
        int element;
        int n;
        cout<<"Enter the size of vector array "<<endl;
        cin>>n;
    	for(int i=0; i<n; i++){
    		cin>>element;
    		nums.push_back(element);
		}
        Solution ob;
        vector<vector<int>> ans = ob.permute(nums);
        for (int i = 0; i < ans.size(); i++) { //ans.size() is the number of row
        	for (int j = 0; j < ans[i].size(); j++)
            	cout << ans[i][j] << " ";
        cout << endl;
    }
        cout<<endl;
    
    return 0;
} 
