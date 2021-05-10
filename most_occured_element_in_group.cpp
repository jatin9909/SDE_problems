#include<bits/stdc++.h>
using namespace std;

class counts{
	public:
		void solve(vector<int> &nums){
			int length = nums.size();
			map<int,int> m;
			int i;
			for(i=0; i<length; i++){
				m[nums[i]]++;
			}
			int max_count=0;int res=-1;
			vector<int> result;
			
			for(auto i : m){
			if(floor(length/3)<i.second){
				result.push_back(i.first);
				max_count=i.second;
			   }
			}
			
			for(int i=0; i<result.size(); i++){
				cout<<result[i]<<" ";
			}
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
	
	c.solve(arr);
	
	return 0;
}
