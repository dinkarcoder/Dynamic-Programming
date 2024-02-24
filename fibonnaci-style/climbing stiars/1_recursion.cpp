#include<iostream>
using namespace std;
int climbStairs(int n) 
{
    int count=0;
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    
    count += climbStairs(n-1);
    count +=climbStairs(n-2);
    return count;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<climbStairs(n);
}