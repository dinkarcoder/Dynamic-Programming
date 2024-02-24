#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int n;
    cin>>n;
    if(n<=3)
    {
        cout<<n;
        return 0;
    }
    int prevprev=2, prev=3;
    int current;
    for(int i=4;i<=n;i++)
    {
        current=prevprev+prev;
        prevprev=prev;
        prev=current;
    }
   cout<<current;
}
