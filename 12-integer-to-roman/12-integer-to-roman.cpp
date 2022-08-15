class Solution {
public:
    string intToRoman(int num) {
        string str="";
        while(num >0){
            if(num >= 1000){ 
                str += 'M';
                num -= 1000;}
            else if(num >= 900){
                str += 'C';
                str += 'M';
                num -= 900;}
            else if(num >= 500){
                str += 'D';
                num -= 500;}
            else if(num >= 400){ 
                str += 'C';
                str += 'D';
                num -= 400;}
            else if(num >= 100){
                str += 'C';
                num -= 100;}
            else if(num >= 90){
                str += 'X';
                str += 'C';
                num -= 90;}
            else if(num >= 50){ 
                str += 'L';
                num -= 50;}
            else if(num >= 40){
                str += 'X';
                str += 'L';
                num -= 40;}
            else if(num >= 10){
                str += 'X';
                num -= 10;}
            else if(num >= 9){ 
                str += 'I';
                str += 'X';
                num -= 9;}
            else if(num >= 5){ 
                str += 'V';
                num -= 5;}
            else if(num >= 4){ 
                str += 'I';
                str += 'V';
                num -= 4;}
            else if(num >= 1){ 
                str += 'I';
                num -= 1;}
        }
        return str;
    }
};