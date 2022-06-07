int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int st=0;
        int extra=0;
        int req=0;
        int n= gas.size();
        for(int i=0;i<n;i++)
        {
            extra+=gas[i]-cost[i];
            if(extra<0)
            {
                st=i+1;
                req+=extra;
                extra=0;
            }
        }
        if(req+extra>=0)
            return st;
        return -1;
    }
