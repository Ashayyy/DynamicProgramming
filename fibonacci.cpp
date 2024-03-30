#include<bits/stdc++.h>
using namespace std;
 
 int fibonacci(int n,vector<int> &dp){

     // base conditions
         if(n<=1)
         return n;

    // if number is already memoized then return the saved value rather than calling
    // this is optimizing recurrsion by reducing calls
        if(dp[n]!=-1)
        return dp[n];

  // if number is not memoized then save it in container 
        dp[n] = fibonacci(n-1,dp)+fibonacci(n-2,dp);
        // and return saved value
        return dp[n];

 }


int main()
{
        // taking number of nth fbonacci
        int n;
        cin>>n;
        // taking container for memoization
        vector<int> dp(n+1,-1);
        cout<<fibonacci(n,dp);
      return 0;
}
