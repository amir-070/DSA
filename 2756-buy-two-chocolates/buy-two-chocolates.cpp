class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {

        int min = INT_MAX, secmin = INT_MAX;

        for (auto x : prices) {
            if (x < min) {
                secmin = min;
                min = x;
            } else if (x < secmin) {
                secmin = x;
            }
        }

        if ((money - min - secmin) < 0)
            return money;
        else
            return money - min - secmin;
    }
};