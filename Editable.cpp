#include <iostream>

using namespace std;

int main()
{
    freopen("sitin.txt", "r", stdin);
	freopen("sitout.txt", "w", stdout);
	int r,s,q;
	cin>>r>>s>>q;
	if(q>(r*s))
	cout<<r*s<<" "<<q-(r*s);
	else
	cout<<q<<" "<<"0";
	return 0;
}
