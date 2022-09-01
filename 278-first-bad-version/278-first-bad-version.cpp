// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int beg=1,end=n;
        while(beg<=end)
        {
            int min=beg+(end-beg)/2;
            if(isBadVersion(min)){
                n=min;
                end=min-1;
            }
                
            else 
                beg=min+1;
        }
        return n;
    }
};