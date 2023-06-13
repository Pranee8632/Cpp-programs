// https://codeforces.com/problemset/problem/1371/A

#include<iostream>
using namespace std;
int main()
{
    int t,n;
    std::cout<<"enter the testcases:";
    std::cin>>t;
    while(t--)
    {
        std::cout<<"enter the sticks:";
        std::cin>>n;
        int res=0;
        res=n/2;
        if(n%2==1)
        {
            res++;
        }
        std::cout<<res<<endl;
    }
}
