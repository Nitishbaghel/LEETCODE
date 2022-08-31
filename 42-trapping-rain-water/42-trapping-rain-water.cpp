class Solution {
public:
    int trap(vector<int>& h) {
         int l=h.size();
        int a[l],b[l],s=0;
        a[0]=h[0];
        for(int i=1;i<l;i++)
        {
            a[i]=std::max(a[i-1],h[i]);
        }
        b[l-1]=h[l-1];
        for(int i=l-2;i>=0;i--)
        {
            b[i]=std::max(b[i+1],h[i]);
        }
        for(int i=0;i<l;i++)
            s+=std::min(a[i],b[i])-h[i];
        return s;
    }
};