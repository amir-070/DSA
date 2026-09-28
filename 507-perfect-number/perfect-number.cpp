class Solution {
public:
    bool checkPerfectNumber(int num) {

        int sum = 0;

        for(int i=1;i<sqrt(num);i++)
        {
            if(num % i == 0) {
                sum += i;
                int t = num / i;
                if(t!=i&&t!=num) sum+=t;
                };
        }

        return sum == num;
        
    }
};