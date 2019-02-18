#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unsigned long long int a[n],sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i]-1;
        }

        cout<<sum+1<<endl;
    }
}
