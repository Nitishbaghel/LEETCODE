class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
       reverse(d.begin(),d.end());
        int carry=0;
        for(int i=0;i<d.size();i++){
            if(d[i]!=9){
                d[i]+=1;
                break;
            }
            else if(d[i]==9){
                carry=1;
                d[i]=0;
            }
        }
        if(d[d.size()-1]==0){
            d.push_back(1);
        }
        reverse(d.begin(),d.end());
        return d;
    }
};
        