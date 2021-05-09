#include<bits/stdc++.h>
using namespace std;

class counts{
	public:
		int solve(vector<int> &nums){
			int length = nums.size();
			int count=0;
			int el=0;
			for(int i=0; i<length; i++){
				if(count==0){
					el=nums[i];
				}
				if(el==nums[i]){
					count+=1;
				}
				else{
					count-=1;
				}
			}
			return el;
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
	cout<<endl;
	int result = c.solve(arr);
	cout<<result<<" has occured the most times "<<endl;
	
	return 0;
}
