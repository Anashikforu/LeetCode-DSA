class Solution {
public:
    string pushDominoes(string dominoes) {
        string ans = dominoes;
        queue<pair<int,char>>dq;
        
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i] != '.')
            {
                dq.push({i,ans[i]});
            }
        }
        
        while(!dq.empty())
        {
            int i = dq.front().first;
            int d = dq.front().second;
            dq.pop();
            if(d == 'L' and i > 0 and ans[i-1] == '.')
            {
                dq.push({i-1,'L'});
                ans[i-1] = 'L';
            }
            else if(d == 'R')
            {
                if(i+1 < ans.length() and ans[i+1] == '.')
                {
                    if(i+2 < ans.length() and ans[i+2] == 'L')
                    {
                        dq.pop();
                    }
                    else{
                        dq.push({i+1,'R'});
                        ans[i+1] = 'R';
                    }
                }
            }
        }
        
        return ans;  
    }
};