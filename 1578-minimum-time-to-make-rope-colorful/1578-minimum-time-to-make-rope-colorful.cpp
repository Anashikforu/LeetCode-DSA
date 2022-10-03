class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int min_cost =0;
        for(int i=1; i<colors.length(); i++){
            if(colors[i-1] == colors[i]){
                
                min_cost += min(neededTime[i-1],neededTime[i]);
                neededTime[i] = max(neededTime[i-1],neededTime[i]);
            }
        }
        return min_cost;
    }
};