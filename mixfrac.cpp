#include <iostream>

using namespace std;

int main()
{
    freopen("mixin.txt", "r", stdin);
	freopen("mixout.txt", "w", stdout);
    int a,b;
    cin>>a>>b;
    if(a%b!=0)
    cout<<a/b<<" "<<a%b<<"/"<<b;
    else
    cout<<a/b;
}
