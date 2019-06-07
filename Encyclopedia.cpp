#include <iostream>

using namespace std;

int main()
{
    freopen("encyin.txt", "r", stdin);
	freopen("encyout.txt", "w", stdout);
    int n,q,k,i;
    cin>>n>>q;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>k;
        k--;
        cout<<a[k];
        cout<<endl;
    }
    return 0;
}
