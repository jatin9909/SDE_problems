#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int res=0; int n=height.size();
        int left=0; int right =n-1; int maxleft=0;
        int maxright=0;
        
        while(left<=right){
            if(height[left]<=height[right]){
                if(maxleft<=height[left]){
                    maxleft=height[left];
                }
                else
                    res+=maxleft - height[left];
                left++;
            }
            else{
                if(height[right]>=maxright)
                    maxright=height[right];
                else
                    res+=maxright - height[right];
                right--;
            }
        }
        return res;
        
    }
};

int main(){
	int n;
	cout<<"How many elements "<<endl;
	cin>>n;
	
	vector<int> num;
	int element;
	
	cout<<"Enter element "<<endl;
	for(int i=0; i<n; i++){
		cin>>element;
		num.push_back(element);
	}
	int ans;
	Solution s;
	ans=s.trap(num);
	cout<<endl;
	cout<<ans;
}
