#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        func(0,s,path,ans);
        
        return ans;
    }
    
    void func(int index, string s, vector<string>&path, vector<vector<string>>&ans){
        if(index==s.size()){
            ans.push_back(path);
            return ;
        }
        
        for(int i=index; i<s.size(); i++){
            if(ispalindrome(s,index,i)){
                path.push_back(s.substr(index, i-index+1));
                func(i+1, s,path,ans);
                path.pop_back();
            }
        }
    }
    
    bool ispalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
};

int main()
{
    
        
        string s1;
        getline(cin,s1);
        Solution ob;
        vector<vector<string>> ans = ob.partition(s1);
        for (int i = 0; i < ans.size(); i++) { //ans.size() is the number of row
        	for (int j = 0; j < ans[i].size(); j++)
            	cout << ans[i][j] << " ";
        cout << endl;
    }
        cout<<endl;
    
    return 0;
} 
