#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,y1,x1,y2,x2,diff1,diff2,sum1,sum2,sum3,a=0,ans,p,q,b=1000000000;
   cin>>t;
   a=0;
   b=1000000000;
   while(t--)
   {
       cout<<'Q'<<" "<<a<<" "<<a<<endl;
       fflush(stdout);
       cin>>sum1;
       if(sum1<0)
       {
           continue;
       }
       cout<<'Q'<<" "<<a<<" "<<b<<endl;
       fflush(stdout);
       cin>>sum2;
       if(sum2<0)
       {
           continue;
       }
       sum2=sum2-b;
       cout<<'Q'<<" "<<b<<" "<<a<<endl;
       fflush(stdout);
       cin>>sum3;
       if(sum3<0)
       {
           continue;
       }
       sum3=b-sum3;
      //cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<endl;
      diff1=sum1+sum3;//x1+x2
      diff2=sum1-sum2;//y1+y2;
      //cout<<diff1<<" "<<diff2<<endl;
      p=diff1/2;
      q=diff2/2;
      cout<<'Q'<<" "<<p<<" "<<a<<endl;
      fflush(stdout);
      cin>>y1;
      cout<<'Q'<<" "<<a<<" "<<q<<endl;
      fflush(stdout);
      cin>>x1;
      y2=x1-sum2;
      x2=sum3+y1;
      cout<<'A'<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
      fflush(stdout);
      cin>>ans;

   }
}

