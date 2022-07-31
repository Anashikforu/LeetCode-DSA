class NumArray {
public:
    vector<int> narry;
    int sum = 0;
    
    NumArray(vector<int>& nums) {
        narry = nums;
        for(auto a:narry){
            sum +=a;
        }
    }
    
    void update(int index, int val) {
        sum = sum - narry[index] + val;
        narry[index] = val;
    }
    
    int sumRange(int left, int right) {
        int res = sum;
        
        for(int i=0; i<left; i++){
            res -= narry[i]; 
        }
        
        for(int i=right+1; i<narry.size(); i++){
            res -= narry[i]; 
        }
        
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */