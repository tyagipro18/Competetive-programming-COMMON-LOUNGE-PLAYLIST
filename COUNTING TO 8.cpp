#include <iostream>

using namespace std;

int main()
{
     freopen("countin.txt", "r", stdin);
	 freopen("countout.txt", "w", stdout);
	 int n,i;
	 cin>>n;
	 for(i=1;i<=n;i++)
     {
       cout<<"\n"<<i;
     }
     return 0;
}
