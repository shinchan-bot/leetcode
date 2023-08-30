class Solution {
public:
    int mySqrt(int x) {
        int minimum = 1000000;
        long long int l=1, r= x;
        int mid;
        while(l <= r){
            mid = ((r-l)/2)+l;
            if(mid == x/mid){
                return mid;
            }else if(mid > x /mid){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return r;
    }
};
