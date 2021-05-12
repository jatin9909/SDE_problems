#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int>mpp; 
        
        for(int i=0; i<nums.size(); i++){
            if(mpp.find(target-nums[i])!=mpp.end()){
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
            }
            mpp[nums[i]]=i;
        }
        cout<<endl;
        for(int i=0; i<ans.size(); i++){
        	cout<<ans[i]<<" ";
		}
    }
};
//Array = [3,4,8,6,7]
//
//Target = 9
//
//Steps:
//
//Create a hash map and start iterating through the Array.
//
//Check for first element 3, since no value is associated with (9-3=)6 in the map so insert (3,0) in the map.
//
//Check for 4 , since no value is associated with 5 so insert (4,1) in the map.
//
//Check for 8, since no value is associated with 1 so insert (8,2) in the map.
//
//Check for 6, this time a value associated with 3 exist so return the index of 6 and value associated with 3 which is the index of integer 3.
//
//Output: [0, 3]

int main(){
	int n;
	cout<<"Enter how many numbers numbers "<<endl;
	cin>>n;
	vector<int> nums;
	int target;
	cout<<"Enter the numbers "<<endl;
	int number;
	for(int i=0; i<n; i++){
		cin>>number;
		nums.push_back(number);
	}
	
	Solution s;
	cout<<"Enter target "<<endl;
	cin>>target;
	s.twoSum(nums,target);
	
	return 0;
}
