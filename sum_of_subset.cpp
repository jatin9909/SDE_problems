#include<bits/stdc++.h> 
using namespace std; 

class Solution{
	public:
		void func(int index, int sum, vector<int>&arr, int N, vector<int>&sumsubset){
			if(index==N){
				sumsubset.push_back(sum);
				return ;
			}
			
			func(index+1, sum+arr[index],arr, N, sumsubset);
			
			func(index+1, sum, arr,N,sumsubset);
		}
		
		vector<int>subsetSums(vector<int>&arr, int N){
			vector<int>sumsubset;
			func(0,0,arr,N,sumsubset);
			sort(sumsubset.begin(), sumsubset.end());
			return sumsubset;
		}
};

int main()
{
    
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    
    return 0;
} 
