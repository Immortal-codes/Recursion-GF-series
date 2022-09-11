//{ Driver Code Starts
#include<iostream>;
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
 /* long long int pd(int N){
      if(N==1){
          return 0;
      }
      if(N==2){
          return 1;
      }
      return pow(pd(N-2),2)-pd(N-1);
  }
    void gfSeries(int N)
    {
        for(int i=1;i<N;i++){
        cout<<pd(i)<<" ";
        }
        // Write Your Code here
    }*/
    void gfSeries(int N)
    {if(N==0){cout<<0;return;}
    if(N==1){cout<<1;return ;}
    long long  x=0,y=1;
    for(int i=0;i<N-1;i=i+2){
    cout<<x<<" "<<y<<" "; 
     x=x*x-y;
     y=y*y-x;
    }
    if(N%2!=0)cout<<x;
    cout<<endl;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends