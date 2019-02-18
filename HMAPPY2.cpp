#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a,b,k,one,two,three,hc,gc;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>k;
        gc=__gcd(a,b);
        hc=(a*b)/gc;
        //cout<<hc<<endl;
        one=n/a;
        two=n/hc;
        three=n/b;
        if(((one-two)+(three-two))>=k)
        {
            cout<<"Win"<<endl;
        }
        else
        {
            cout<<"Lose"<<endl;
        }
    }
}
