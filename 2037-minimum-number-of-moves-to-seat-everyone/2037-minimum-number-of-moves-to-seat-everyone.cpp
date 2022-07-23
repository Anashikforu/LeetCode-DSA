class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        
        int move =0;
        
        for(int i=0; i<students.size(); i++){
            if(students[i] < seats[i]){
                move += (seats[i] - students[i]);
            }else{
                move += (students[i] - seats[i]);
            }
            
        }
        
        return move;
    }
};