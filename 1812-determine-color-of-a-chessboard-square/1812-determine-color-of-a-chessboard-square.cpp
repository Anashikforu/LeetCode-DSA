class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(coordinates[1] == '2' or coordinates[1] == '4' or coordinates[1] == '6' or coordinates[1] == '8'){
            if(coordinates[0] == 'a' or coordinates[0] == 'c' or coordinates[0] == 'e' or coordinates[0] == 'g'){
                return true;
            }else{
                return false;
            }
        }else{
            if(coordinates[0] == 'a' or coordinates[0] == 'c' or coordinates[0] == 'e' or coordinates[0] == 'g'){
                return false;
            }else{
                return true;
            }
        }

        return false;
    }
};