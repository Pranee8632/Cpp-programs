// https://codeforces.com/problemset/problem/1472/B


/*
#include<iostream>
using namespace std;
int main()
{
    int n ,i;
    cout<<"enter the number of the candies:";
    cin>>n;
    int g1=0,g2=0;
    for(i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        if(k==1)
        {
            g1++;
        }
        else if(k==2)
        {
            g2++;
        }
    }
    if((g1%2==0)&&(g2%2==0))
    {
        cout<<"YES";
    }
    else if((g1==0)&&(g2%2==0))
    {
        cout<<"YES";
    }
    else if((g2==0)&&(g1%2==0))
    {
        cout<<"YES";
    }
    else if(g1==0 && g2%2!=0)
    {
        cout<<"NO";
    }
    else if((g1%2==0)&&(g2%2!=0))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}*/


#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    ll t,n,a;
    cin>>t;
    while(t--)
	{
        int div = 0, sum = 0,one = 0;
        cin>>n;
        for(int i=0; i<n; i++)
		{
            cin>>a;
            if(a == 1)
			{
                one++;
                sum++;
            }
            else
                sum +=2;
        }
        if(sum % 2 == 0)
		{
            div = sum/2;
            if(div % 2 == 0)
			{
                cout<<"YES"<<endl;
            }
            else
			{
                if(one)
				{
                    cout<<"YES"<<endl;
                }
                else
				{
                    cout<<"NO"<<endl;
                }
            }
        }
        else
		{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

