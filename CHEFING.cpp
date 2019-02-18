#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,i,j,l,k;
   string s;
   cin>>t;
   while(t--)
   {
       int a[26]={0};
      int  b[26]={-1};
      for(k=0;k<26;k++)
      {
          b[k]=-1;
      }
       cin>>n;
       int c=0;
       for(j=0;j<n;j++)
       {
           cin>>s;

           l=s.length();
           //cout<<l<<endl;
           for(i=0;i<l;i++)
           {
               if(b[s[i]-'a']!=j)
               {
                   a[s[i]-'a']++;
                   b[s[i]-'a']=j;
               }
               else
               {
                   continue;
               }
           }

       }

       for(k=0;k<26;k++)
       {
           if(a[k]==n)
           {
               c++;
           }
       }
   cout<<c<<endl;
   }
}
