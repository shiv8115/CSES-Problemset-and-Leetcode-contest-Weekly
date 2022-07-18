class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int>res(2,0);
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto i:mp){
            res[1]+= i.second%2;
            res[0]+= i.second/2;
        }
        return res;
    }
};
