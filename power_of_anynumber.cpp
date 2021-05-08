#include<bits/stdc++.h>
using namespace std;

double mypower(double x, int n){
	
	double ans=1.0;
	long nn=n;

	if(nn<0)
	nn=nn*-1;
	
	while(nn>0){
		if(nn%2==1){
			ans=ans*x;
			nn=nn-1;
		}
		else{
			x=x*x;
			nn=nn/2;
		}
	}
	if(n<0)
	ans=(double)(1.0)/(double)(ans);
	
	return ans;
	
}

int main(){
	double n;
	int m;
	double ans;
	
	cout<<"Enter number then power "<<endl;
	cin>>n>>m;
	
	ans=mypower(n,m);
	cout<<"Power is "<<ans;
	return 0;
}
