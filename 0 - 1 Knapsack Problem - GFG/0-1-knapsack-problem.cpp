//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<int> dp(W+1,0), prev(W+1,0);
       // Your code here
       
       for(int i=wt[0]; i<=W; i++ ){
           prev[i] = val[0];
       }
       
       
       for(int i=1; i<n; i++){
           for(int j=W; j>=0; j--){
            //   dp[j] = prev[j];
               if(j>=wt[i]){
                   prev[j] = max(prev[j],val[i]+prev[j-wt[i]]);
               }
           }
        //   prev= dp;
       }
       
       return prev[W];
    //   return func(W,wt,val,n-1,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends