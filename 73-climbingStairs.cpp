class Solution {
public:
    int memory[46] = {0};
    int climbStairs(int n) {
        if(n == 0) return 1;
        if(n < 0 ) return 0;

        if(memory[n] != 0){
            return memory[n];
        }
        int m = climbStairs(n-1);
        int l = climbStairs(n-2);
        memory[n] = m+l;
        return l+m;
    }
};
