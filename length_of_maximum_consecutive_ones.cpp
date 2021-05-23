#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count=0;
        int maxi=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1)
                count++;
            else
                count=0;
            
            maxi=max(count,maxi);
        }
        return maxi;
    }
};

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
	int ans;
	Solution s;
	ans=s.findMaxConsecutiveOnes(nums);
	cout<<"Length of maximum consecutive ones "<<ans<<endl;
	return 0;
}
