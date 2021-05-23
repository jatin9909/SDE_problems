#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int remove_duplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int i=0;
        
        for(int j=1; j<nums.size(); j++){
            if(nums[i]!=nums[j])
                i++;
            nums[i]=nums[j];
        }
        return i+1;
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
	ans=s.remove_duplicates(nums);
	cout<<"Length "<<ans<<endl;
	for(int i=0;i<ans; i++){
		cout<<nums[i]<<" ";
	}
	return 0;
}
