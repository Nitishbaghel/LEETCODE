class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        vector<int> p;
    	int d=1;
    	for (int i=0;i<n.size();i++) {
    		d*=n[i];
            p.push_back(d);
    	}
        d=1;
    	for(int i=n.size()-1;i>0;i--) {
    		p[i]=d*p[i-1];
    		d*=n[i];
    	}
        p[0]=d;
    	             
        return p;
    }
};