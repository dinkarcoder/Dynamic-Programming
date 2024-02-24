#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1, -1);
    dp[0]=1;
    for(int i=1;i<n+1;i++)
    {
        int left=0, right=0;
        left=dp[i-1];
        if(i>1)
        {
            right=dp[i-2];
        }
        
        dp[i]=left+right;
    }
    cout<<dp[n];
}