#include<bits/stdc++.h> 
using namespace std; 

class Solution{
	public:
		string getpermutation(int n, int k){
			vector<int>numbers;
			int fact=1;
			for(int i=1; i<n; i++){
				fact=fact*i;
				numbers.push_back(i);
			}
			numbers.push_back(n);
			
			string ans="";
			k=k-1;
			
			while(true){
				ans+=to_string(numbers[k/fact]);
				numbers.erase(numbers.begin()+k/fact);
				if(numbers.size()==0){
					break;
				}
				k=k%fact;
				fact=fact/numbers.size();
			}
			return ans;
		}
};

int main()
{
    
        int n,k;
        Solution s;
        cout<<"Enter the size of array "<<endl;
        cin>>n;
        
        cout<<"Enter the kth permutation"<<endl;
        cin>>k;
        
        string ans = s.getpermutation(n,k);
        cout<<"Kth permutation is "<<ans;
    
    return 0;
} 
