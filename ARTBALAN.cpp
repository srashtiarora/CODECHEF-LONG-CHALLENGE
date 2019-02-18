
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,total,distinct,sum,max,j,ans,sum1;
    string s;
    cin>>t;
    while(t--)
    {
        int a[26]={0};
        distinct=0;
        sum=0;

        max=999999;
        cin>>s;
        total=s.length();
        for(i=0;i<total;i++)
        {
            if(a[s[i]-'A']==0)
            {
                distinct++;
            }
            a[s[i]-'A']++;
        }
        sort(a,a+26, greater<int>());
        for(i=1;i<=26;i++)
        {

            if(total%i==0)
            {
                if(i<=distinct)
                {
                sum=0;
                sum1=0;
                for(j=0;j<i;j++)
                {
                    sum=sum+a[j];
                    if(a[j]>(total/i))
                    {
                        sum1+=a[j]-(total/i);
                    }
                }
                ans=(total-sum)+sum1;
                if(ans<max)
                {
                    max=ans;
                }
            }
            else
            {
              j=0;
              sum=0;
              while(a[j]>(total/i))
              {
                  sum+=a[j]-(total/i);
                  j++;
              }
              ans=sum;
                if(ans<max)
                {
                    max=ans;
                }


            }
            //cout<<ans<<endl;
        }

    }
    cout<<max<<endl;
}
}
