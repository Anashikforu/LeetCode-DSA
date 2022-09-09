class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b)
    {
        if(a[0] == b[0])
            return a[1] > b[1];
        else
            return a[0] < b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& arr) {
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end(), compare);
        
        int count = 0;
        int max_defence = arr[n - 1][1];
        
        for(int i = n - 2; i >= 0; i--)
        {
            if(arr[i][1] < max_defence)
            {
                count++;
            }
            max_defence = max(max_defence, arr[i][1]);
        }
        
        return count;
    }
};