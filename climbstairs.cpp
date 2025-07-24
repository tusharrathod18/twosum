class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int first = 1;  // Ways to reach step 1
        int second = 2; // Ways to reach step 2
        int current;

        for (int i = 3; i <= n; i++) {
            current = first + second; // Ways to reach current step
            first = second;
            second = current;
        }

        return second;
    }
};