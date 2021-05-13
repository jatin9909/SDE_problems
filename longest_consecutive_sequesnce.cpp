#include<bits\stdc++.h>
using namespace std;

class solve{
	public:
	int longest_consecutive(vector<int>&nums){
		set<int>hashset;
		for(int num:nums){
			hashset.insert(num);
		}
		
		int longest_streak=0;
		for(int num: nums){
			if(!hashset.count(num-1)){
				int current_num = num;
				int current_streak = 1;
				
				while(hashset.count(current_num+1)){
					current_num+=1;
					current_streak+=1;
				}
				longest_streak = max(longest_streak, current_streak);
			}
		}
		return longest_streak;
	}	
};

int main(){
	int n;
	cout<<"Enter how many numbers "<<endl;
	cin>>n;
	int number;
	vector<int> ans;
	solve s;
	
	for(int i=0; i<n; i++){
		cin>>number;
		ans.push_back(number);
	}
	cout<<"Longest consecutive streak "<<s.longest_consecutive(ans)<<endl;
	return 0;
}
