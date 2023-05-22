class Solution {
public:
int solve(int n){
        // base case
        if(n == 1 || n == 2){
            return n;
        }
        int prev1 = 2;
        int prev2 = 1;
        for(int i = 3; i<=n; i++){
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }

    int climbStairs(int n) {
        return solve(n);    
    }
};


