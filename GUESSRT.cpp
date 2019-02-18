
#include<bits/stdc++.h>
using namespace std;
long long int mod=1000000007;
int power(long long int x, long long int y) 
{ 
    int res = 1;
   
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x)%mod; 
        y = y>>1;
        x = (x*x)%mod; 
    } 
    return res; 
}
int gcd(long long int a, long long int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int main()
{
    long long int t,n,m,k,i,p,q,a,b,gc,ans,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>m;
        a=power(n,(m/2)+1)%mod;
        b=power(n-1,(m/2)+1)%mod;
        c=power(n,(m/2))%mod;
        d=power(n-1,(m/2))%mod;
        if(m%2!=0)
        {
            if(a<b)
            {
                a=a+mod;
            }
           p=(a-b)%mod;
           q=a%mod;
           gc=gcd(p,q);
           p=p/gc;
           q=q/gc;
           
        }
        else
        {
            if(c<d)
            {
                c+=mod;
            }
            p=(((c-d)*(k+n))+d)%mod;
            
            q=(c*(k+n))%mod;
            gc=gcd(p,q);
            p=p/gc;
            q=q/gc;
        }
        ans=((p%mod)*(power((q%mod),mod-2)))%mod;
        cout<<ans<<endl;
        
    }
    return 0;
}
