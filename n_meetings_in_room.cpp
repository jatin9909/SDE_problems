#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, pair<int,int>>>v;
        for (int i = 0; i < n; i++) {
            v.push_back({end[i], {start[i], i}});
        }
        
        sort(v.begin(), v.end());
        
        int count = 1;
        int curr = v[0].first;
        
        int i = 1;
        while (i < n) {
            if (curr < v[i].second.first)
            {
                
            count++;
            curr = v[i].first;
            }
        i++;
        }
        return count;
    }
};

int main(){
	int s[6];
	cout<<"Enter elements in start timing "<<endl;
	for(int i=0; i<6; i++){
		cin>>s[i];
	}
	
	int f[6];
	cout<<"Enter elements in finish timing "<<endl;
	for(int i=0; i<6; i++){
		cin>>f[i];
	}
	
	int ans;
	Solution so;
	ans=so.maxMeetings(s,f,6);
	cout<<"Only "<<ans<<"can be held "<<endl;
	
	return 0;
}
