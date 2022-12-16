//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int parittion(vector<int> &arr, int l,int h){
        int pivot= arr[h];
        int x=l;
        
        for(int i=l; i<h; i++){
            if(arr[i]<=pivot){
                swap(arr[i],arr[x]);
                x++;
            }
        }
        
        swap(arr[x],arr[h]);
        
        return x;
    }
    
    void quick_sort(vector<int> &arr, int l,int h){
        if(l<h){
            int pivot = parittion(arr,l,h);
            quick_sort(arr,l,pivot-1);
            quick_sort(arr,pivot+1,h);
        }
    }
    
    vector<int> sortArr(vector<int>arr, int n){
    //complete the function here
        quick_sort(arr,0,n-1);
        return arr;
    }
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}


// } Driver Code Ends