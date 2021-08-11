// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
# define MAX 100

class Solution{
  public:
  
  int maxhist(int a[], int n){
      int maxarea=0;
    //  int n=sizeof(a)/sizeof(a[0]);
      
      for(int i=0; i<n; i++){
          int minheight=a[i];
          maxarea=max(maxarea, minheight);
          for(int j=i+1; j<n; j++ ){
              minheight=min(minheight, a[j]);
              maxarea=max(maxarea, minheight*(j-i+1));
          }
      }
      cout<<"Max area return by maxhist "<<maxarea;
      return maxarea;
  }
  
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int result = maxhist(M[0],m);
        
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                if(M[i][j])
                    M[i][j]+=M[i-1][j];
            }
            result = max(result, maxhist(M[i],m));
            cout<<"result "<<result<<endl;
        }
        
        return result;
    }
};


int main() {

    int M[MAX][MAX];

   
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    
    
    
    return 0;
}
