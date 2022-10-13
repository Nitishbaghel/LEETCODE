class Solution {
    public int numTilePossibilities(String str) {
        int freq[]=new int[26];
        for (int i = 0; i < str.length(); i++) {
            freq[str.charAt(i)-'A']++;
        }
        return tilepossibility(freq,"");
    }
    public static int tilepossibility(int freq[], String ans) {
        int c=0;
        for (int i = 0; i < freq.length; i++) {
            if(freq[i]>=1)
            {
                char ch=(char) (i+'A');
                freq[i]--;
                c+= tilepossibility(freq,ans+ch)+1;
                freq[i]++;
            }
        }
        return c;
    }
}