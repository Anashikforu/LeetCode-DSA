class Solution {
public:
    double average(vector<int>& salary) {
        int maxi = *max_element(salary.begin(),salary.end());
        int mini = *min_element(salary.begin(),salary.end());
        
        double sum =0;
        
        for(auto a:salary){
            sum += a;
        }
        
        sum -= maxi+mini;
        
        sum /= salary.size() -2.000;
        
        return sum;
    }
};