class Solution {
public:
    int mySqrt(int x) {
        long long strt = 0,end = x,ans=0;
        while(strt<=end){
             long long mid = (strt + end)/2;
            if(mid*mid <= x) ans=mid,strt = mid+1;
            else end = mid-1;
        }
        return ans;
    }
};