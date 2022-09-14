class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0,si=0,ei=0,p=1;
        while(ei<nums.size())
        {
            p=p*nums[ei];
            while(p>=k&&si<=ei)
            {
                p=p/nums[si];
                si++;
            }
            ans=ans+ei-si+1;
            ei++;
        }
        return ans;
    }
};