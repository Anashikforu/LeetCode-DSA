//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
    int partittion(int arr[], int l, int r){
        int pivot = arr[r];
        int x=l;
        
        for(int i=l; i<r; i++){
            if(arr[i]<pivot){
                swap(arr[i],arr[x]);
                x++;
            }
        }
        
        swap(arr[r],arr[x]);
        
        return x; 
    }
    
    void quick_sort(int arr[], int l, int r){
        if(l<r){
            int pi = partittion(arr,l,r);
            quick_sort(arr,l,pi-1);
            quick_sort(arr,pi+1,r);
        }
    }
    
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        // quick_sort(arr,l,r);
        sort(arr+l,arr+r+1);
     
        return arr[l+k-1];
        
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends