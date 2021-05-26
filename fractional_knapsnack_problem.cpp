#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution{
	public:
		static bool compare(Item a, Item b){
			double r1=(double)a.value/(double)a.weight;
        	double r2=(double)b.value/(double)b.weight;
        
        return r1>r2;
    	}
    	
		double fractionalKnapsack(int W, Item a[], int n){
			sort(arr, arr+n, compare);
			int currweight=0; double finalvalue=0.0;
			
			for(int i=0; i<n; i++){
				if(currweight+a[i].weight<=W){
					currweight+=a[i].weight;
					finalvalue+=a[i].value;
				}
				else{
					int remain = W-a[i].weight;
					finalvalue+=(a[i].value)/(double)(a[i].weight)*remain;
					break;
				}
				
			}
			return finalvalue;
		}
		
};

int main()
{
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;

    return 0;
}
