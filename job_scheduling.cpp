#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; //profit
    
};

class Solution{
	public:
		static bool compare(Job a, Job b){
			return a.profit > b.profit;
		}
		
		vector<int>JobScheduling(Job arr[], int n){
			sort(arr,arr+n,compare);
			int maxi; 
			maxi= arr[0].dead;
			for(int i=0; i<n; i++){
				maxi=max(maxi,arr[i].dead);
			}
			int slot[maxi+1];
			for(int i=0; i<=maxi; i++){
				slot[i]=-1;
			}
			int currjob=0; int maxprofit=0;
			for(int i=0; i<n; i++){
				for(int j=arr[i].dead; j<=0; j--){
					if(slot[j]==-1){
						slot[j]=i;
						currjob++;
						maxprofit+=arr[i].profit;
						break;
					}
				}
			}
			vector<int> res(2);
			res[0]=currjob;
			res[1]=maxprofit;
			
			return res;
		}
};

int main(){
	int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    
	return 0; 
}

//Input:
//N = 4
//Jobs = (1,4,20)(2,1,10)(3,1,40)(4,1,30)
//Output:
//2 60
//Explanation:
//2 jobs can be done with
//maximum profit of 60 (20+40).
