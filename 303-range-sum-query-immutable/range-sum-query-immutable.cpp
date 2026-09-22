class NumArray {
    vector<int> vt;
public:
    NumArray(vector<int>& nums) {

        for(auto n:nums)
        {
            vt.push_back(n);
        }
        for(int i=1;i<vt.size();i++)
        {
            vt[i] += vt[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        
        if(left == 0) return vt[right];
        else return vt[right] - vt[left-1];
    }
};
