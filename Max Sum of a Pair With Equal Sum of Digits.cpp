class Solution {
public:
     int get(int n){
        int ssssum = 0;
        while (n != 0) {
            ssssum = ssssum + n % 10;
            n = n / 10;
        }
        return ssssum;
    }
    
    int maximumSum(vector<int>& nums) {
        vector<pair<int,int>>vvv;
        for(int i=0;i<nums.size();i++){
            int sssum= get(nums[i]);
            vvv.push_back(make_pair(sssum,nums[i]));
        }
        sort(vvv.begin(), vvv.end());
        
        int resss=0;
        for(int i=vvv.size()-1;i>0;){
            if(vvv[i].first== vvv[i-1].first){
                int tttsum=vvv[i].second+vvv[i-1].second;
                if(tttsum>resss) resss=tttsum;
                i=i-2;
            }
            else i--;
        }
        if(resss==0) return -1;
        return resss;
    }
};
