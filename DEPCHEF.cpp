#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,first,last;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int large=0;
        int a[n],d[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(i=0;i<n;i++)
        {
            cin>>d[i];
        }
        for(i=0;i<n;i++)
        {
            first=i-1;
            if(first<0)
            {
                first=first+n;
            }
            last=(i+1)%n;
            if(d[i]>(a[first]+a[last]))
            {
                if(d[i]>large)
                {
                    large=d[i];
                }
            }

        }
        if(large>0)
        cout<<large<<endl;
        else
        cout<<"-1"<<endl;
    }
}
