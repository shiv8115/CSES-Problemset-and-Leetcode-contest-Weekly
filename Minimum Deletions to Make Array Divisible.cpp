class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());
        int myvar=0;
        for(auto i : numsDivide)
        {
            myvar=__gcd(myvar,i);
        }
           int cnt=0;
        int siz=nums.size();
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==myvar||myvar%nums[i]==0)
                {
                    break;
                    
                }
                else {cnt++;
                      siz--;}
            }
            if(siz==0)return -1;
            return cnt;
        return -1;
    }
};
