class Solution { 
public: 
    long long minSumSquareDiff(vector<int>& n1, vector<int>& n2, int k1, int k2) { 
        vector<int> diff(100005, 0); 
 
        for (int i=0; i<n1.size(); i++){ 
            diff[abs(n1[i]-n2[i])]++;  
         
        } 
 
        int red = k1+k2; 
        for (int i=diff.size()-1; i>0; i--){ 
            if (red >diff[i]){ 
               
                diff[i-1] += diff[i]; 
                red -= diff[i]; 
                diff[i]=0; 
            }else{ 
                diff[i-1]+=red; 
                diff[i]-=red; 
                red=0; 
                break; 
            } 
        } 
 
        long long int res = 0; 
        for (int i=1; i<diff.size(); i++){ 
            long long ans=0; 
            if (diff[i] !=0){ 
                ans=1; 
                ans*=i; 
                ans*=i; 
                ans*=diff[i]; 
            } 
            res+=ans; 
        } 
        return res; 
    } 
};
