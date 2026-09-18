class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size() + nums2.size();
        int mid = total / 2;

        int i = 0, j = 0;
        int prev = 0, curr = 0;

        for (int itr = 0; itr <= mid; itr++) {

            prev = curr;

            if (i < nums1.size() && (j >= nums2.size() || nums1[i] < nums2[j])) {
                curr = nums1[i];
                i++;
            }
            else {
                curr = nums2[j];
                j++;
            }
        }

        if (total % 2 == 1)
            return curr;

        return (prev + curr) / 2.0;
    }
};