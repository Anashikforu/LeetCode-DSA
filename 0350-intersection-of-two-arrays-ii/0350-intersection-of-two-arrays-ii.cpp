class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> inserted_val;
        vector<bool> visited(nums2.size(),false);
        int flag=0;
        for(int i=0; i<nums1.size(); i++){
            int val=nums1[i];
            int start=0,end = nums2.size()-1;
            flag=0;
            while(start<=end){
                if(visited[start] == false && nums2[start] == val){
                    visited[start] = true;
                    flag=1;
                    break;
                }
                if(visited[end] == false && nums2[end] == val){
                    visited[end] = true;
                    flag=1;
                    break;
                }
                start++;
                end--;
            }
            
            if(flag == 1){inserted_val.push_back(val);}
        }
//          vector<int> a,b;
//         a = {61,45,85,89,77,92,38,89,7,34,44,57,4,6,88,0,79};
//         b = {5,4,57,79,7,89,88,45,34,92,38,85,6,0,77,44,61};
//         sort(a.begin(),a.end());
//         sort(b.begin(),b.end());
        
//         for(auto A:a){cout<<A<<",";}
//         cout<<endl;
//         for(auto A:b){cout<<A<<",";}
        
        return inserted_val;
        
    }
};