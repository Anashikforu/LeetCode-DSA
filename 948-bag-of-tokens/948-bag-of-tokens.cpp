class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        if(tokens.size() == 0){ return 0;}
        
        int score = 0, i =0;
        
        int tsize = tokens.size()-1;
        
        sort(tokens.begin(),tokens.end());
        
        
        while(power > tokens[i]){
            if(power >= tokens[i]){
                power -= tokens[i];
                score++;
                if(tsize == i){ return score;}
                i++;
            }else{
                break;
            }
        }
        
        
       
        while(i < tsize and score > 0){
            power += tokens[tsize];
            tsize--;
            score--;
            while(power >= tokens[i]){
                if(power >= tokens[i]){
                    power -= tokens[i];
                    score++;
                    i++;
                }else{
                    break;
                }
            }
        }
        
        return score;
    }
};