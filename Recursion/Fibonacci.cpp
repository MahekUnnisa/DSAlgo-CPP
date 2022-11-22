//Basic appraoch usng recursion
class Solution {
public:
    int fib(int n) {
       if(n==0) {
           return 0;
       }
        if(n==1){
            return 1;
        }
        return fib(n-1)+fib(n-2);
    }
};

//Can also be done using Dp(Recursion +Memoization)
class Solution {
public:
    int fib(int n) {
        int a[31] = {0};
        if(n<=1){
            return n;
        }
        if(a[n]!=0){
            return a[n];
        }
        a[n] = fib(n-1)+fib(n-2);
        return a[n];
    }
};

//Bottom up(Tabulation)
class Solution {
public:
    int fib(int n) {
        vector<int>dp(31,0);
        dp[0]=0;
        dp[1]=1;
        if(dp[n]!=0){
            return dp[n];
        }
        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2]; 
        }
        return dp[n];
        
    }
};
//Using only variables
//Most Optimized
class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int prev2=0;
        int prev1=1;
        int curr;
        
        for(int i=2;i<=n;i++){
            curr = prev2+prev1;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr ;
        
    }
};
