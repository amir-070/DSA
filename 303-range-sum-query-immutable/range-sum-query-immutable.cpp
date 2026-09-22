class NumArray {
    vector<int> vt;
public:
    NumArray(vector<int>& nums) {

        for(int i=1;i<nums.size();i++)
        {
            nums[i] += nums[i-1];
        }

        vt = move(nums);
    }
    
    int sumRange(int left, int right) {
        
        if(left == 0) return vt[right];
        else return vt[right] - vt[left-1];
    }
};
