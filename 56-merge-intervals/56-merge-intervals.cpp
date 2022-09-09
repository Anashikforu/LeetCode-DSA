class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> mergeIntervals;
        mergeIntervals.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++){
            if(mergeIntervals[mergeIntervals.size()-1][1] < intervals[i][0]){
                mergeIntervals.push_back(intervals[i]);
            }else if(mergeIntervals[mergeIntervals.size()-1][1] < intervals[i][1]){
                mergeIntervals[mergeIntervals.size()-1][1] = intervals[i][1];
            }
        }
        
        return mergeIntervals;
    }
};