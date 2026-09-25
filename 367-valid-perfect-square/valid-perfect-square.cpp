class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num == 1) return true;

        int i=1 ,j = num/2;

        while(i<=j)
        {
            long long mid = (j+i)/2;

            if(mid*mid  == num) return true;

            if(mid*mid > num) j=mid-1;
            else i = mid+1;
        }

        return false;
    }
};