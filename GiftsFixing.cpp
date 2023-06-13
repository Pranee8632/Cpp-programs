// https://codeforces.com/problemset/problem/1399/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int k,i,j,a[50],b[50],min1,min2;
       cin>>k;
       for( i=0;i<k;i++)
       {
           cin>>a[i];
       }
       min1=a[0];
       for(i=0;i<k;i++)
       {
           if(min1>a[i])
              min1=a[i];
       }
       for( j=0;j<k;j++)
       {
           cin>>b[j];
       }
       min2=b[0];
       for(j=0;j<k;j++)
       {
           if(min2>b[j])
               min2=b[j];
       }
       int count=0;
       for(i=0;i<k;i++)
	   {
           count+=max(a[i]-min1,b[i]-min2);
		}

     cout<<count<<endl;
	}
}
