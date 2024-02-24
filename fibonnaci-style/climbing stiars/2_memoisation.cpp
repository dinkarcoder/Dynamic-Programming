#include<iostream>
using namespace std;
#include<vector>
int func(int i, int n, vector<int>& dp)
{
    if(i==0)
    {
        return 1;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }   
    int left=0, right=0;
    left=func(i-1, n, dp);
    if(i>1)
    {
        right=func(i-2, n, dp);
    }
    return dp[i]=left+right;
}
int main()
{
    int n;
    cin>>n;

    vector<int> dp(n+1, -1);
    cout<<func(n, n, dp);


}