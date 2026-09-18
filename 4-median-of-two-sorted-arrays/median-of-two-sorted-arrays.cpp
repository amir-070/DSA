class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int ts = nums1.size()+nums2.size();

        vector<int> nv;

        int i = 0,j=0;

        while(i<nums1.size() and j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                nv.push_back(nums1[i++]);
            }
            else
            {
                nv.push_back(nums2[j++]);
            }
        }
        while(i<nums1.size()) nv.push_back(nums1[i++]);

        while(j<nums2.size()) nv.push_back(nums2[j++]);

        double  val;

        if(ts %2 != 0) val = nv[(ts/2)];

        else val = double(nv[(ts/2)-1]+nv[(ts/2)])/2;

        return val;
    }
};