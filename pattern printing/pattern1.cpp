#include<bits/stdc++.h>
using namespace std;
int main()
{
    int col,row;
    cin>>col>>row;
    for(int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}