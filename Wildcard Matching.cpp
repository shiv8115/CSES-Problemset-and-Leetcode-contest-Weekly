class Solution {
public:
    bool isMatch(string s, string p) {
        int n= p.length(), m= s.length();
        bool dp[n+1][m+1];
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(i==n-1 && j==m-1) dp[i][j]=true;
                else if(i==n-1) dp[i][j]=false;
                else if(j==m-1){
                    if(p[i]=='*') dp[i][j]= dp[i+1][j];
                    else dp[i][j]=false;
                }else{
                    if(p[i]=='?'){
                        dp[i][j]= dp[i+1][j+1];
                    }else if(p[i]=='*'){
                        dp[i][j]= dp[i+1][j] || dp[i][j+1];
                    }else if(p[i]==p[j]){
                         dp[i][j]= dp[i+1][j+1];
                    }else dp[i][j]=false;
                }
            }
           // return dp[0][0];
        }
          return dp[0][0];
    }
};
