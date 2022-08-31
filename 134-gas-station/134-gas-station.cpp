class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int fule=0,netcost=0,sun=0,si=0;
        for(int i=0;i<gas.size();i++){
            netcost+=gas[i]-cost[i];
            sun+=gas[i]-cost[i];
            if(sun<0)
            {
                sun=0;
                si=i+1;
            }
        }       if(netcost<0)
            return -1;
        else
            return si;
        
    }
};