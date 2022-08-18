class Solution {
public:
    int unhappyFriends(int n, vector<vector<int>>& preferences, vector<vector<int>>& pairs) {
        vector<int> priority(n,-1);
        int x=0, y=0,l=0 ,yes=0, unhappy = 0 ,ind =0 ,val=0;
        
        for(auto a:pairs){
            x=a[0];
            y=a[1];
            
            priority[x] = find(preferences[x].begin(),preferences[x].end(),y) - preferences[x].begin();
            priority[y] = find(preferences[y].begin(),preferences[y].end(),x) - preferences[y].begin();
        }
        
        for(int i=0; i<n; i++){
            // cout<<i<<" "<<priority[i]<<endl;
            for(int j=0; j<priority[i]; j++){
                val = preferences[i][j];
                ind = priority[val];
            
                // for(l=0; l<ind; l++){
                //     if(preferences[val][l] == i){
                //         cout<<i<<" "<<val<<endl;
                //         unhappy++;
                //         break;
                //     }
                // }
            
                if(find(preferences[val].begin(),preferences[val].begin()+ind-1,i)-preferences[val].begin() >= 0){
                    int v = find(preferences[val].begin(),preferences[val].begin()+ind-1,i)-preferences[val].begin();
                    // cout<<v<<endl;
                    if(i == preferences[val][v]){
                        unhappy++;
                        break;
                    } 
                }
            }
        }
        
        return unhappy;
    }
};