#include<bits/stdc++.h>
using namespace std;

class counts{
	public:
		int solve(vector<int> &nums){
			int length = nums.size();
			sort(nums.begin(), nums.end());
			int curr_count=1; int res=nums[0]; int max_count=1; int i;
			for(i=1; i<length; i++){
				if(nums[i]==nums[i-1]){
					curr_count++;
				}
				else{
					if(curr_count>max_count){
						max_count=curr_count;
						res=nums[i-1];
					}
					curr_count=1;
				}
		}
		if(curr_count>max_count){
				max_count=curr_count;
				res=nums[i-1];
			}
		cout<<endl;
		return res;
			
			
		}
};

int main(){
	int n;
	cout<<"Enter how many numbers you want in array "<<endl;
	cin>>n;
	int ele;
	counts c;
	vector<int> arr;
	for(int i=0; i<n; i++){
		cin>>ele;
		arr.push_back(ele);
	}
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<c.solve(arr);
	
	return 0;
}
