#include <iostream>

using namespace std;

int main()
{
  	//freopen("tripin.txt", "r", stdin);
	//freopen("tripout.txt", "w", stdout);
	long long unsigned int t,n,count=0;
	long long int a[50000];
	cin>>t;
	for(long long int i=0;i<t;i++)
    {
        cin>>n;
        a[i]=n;
    }
    for(long long int i=0;i<t;i++)
    {
        if(a[i]%3==0||a[i]==0){count++;}
    }
    if(count!=0){cout<<count<<"\n";}else{cout<<"No Multiples";}
    for(long long int i=0;i<t;i++)
    {
        if(a[i]%3==0)
        {
            cout<<i+1<<" ";
        }
    }
    return 0;
}
