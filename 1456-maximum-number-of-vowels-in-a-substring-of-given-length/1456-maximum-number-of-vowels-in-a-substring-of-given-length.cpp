class Solution {
public:
    int maxVowels(string s, int k) {
        int c=0,l=0,r=k-1;
        unordered_set<char> vowels={'a','e','i','o','u'};
        string sub;
        for(int i=0;i<k;i++)
        {
            if(vowels.find(s[i]) != vowels.end())
                c++;
        }
        int mcv = c;
        while(r<s.length()-1)
        {
            if(vowels.find(s[l]) != vowels.end()) c--;
            l++;
            r++;
            if(vowels.find(s[r]) != vowels.end()) c++;
            mcv=max(mcv,c);
        }
    return mcv;
    }
};