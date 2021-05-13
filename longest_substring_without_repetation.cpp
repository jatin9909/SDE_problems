#include<bits\stdc++.h>
using namespace std;

class solve{
	public:
	int longest_subsequence(string s){
		int n=s.size();
		int res=0;
		for(int i=0; i<n; i++){
			vector<bool> visited(256);
			for(int j=i; j<n; j++){
				if(visited[s[j]]==true)
				break;
				
				else{
					res=max(j-i+1, res);
					visited[s[j]]=true;
				}
			}
			visited[s[i]]=false;
		}
		return res;
	}	
};

int main(){
	int n;
	string str;
	solve s;
	cout<<"Enter the string "<<endl;
	getline(cin, str);
	
	cout<<"Longest consecutive streak "<<s.longest_subsequence(str)<<endl;
	return 0;
}
