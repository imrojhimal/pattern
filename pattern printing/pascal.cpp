#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int c=2;c<=n;c++)
    {
        factorial*=c;
    }
    return factorial;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            int ans=fact(i)/(fact(j)*fact(i-j));
            cout<<" "<<ans<<" ";
        }
        cout<<endl;
    }
}