#include <iostream>
#define DICT_SIZE 1000

using namespace std;

int main()
{
    freopen("dictin.txt", "r", stdin);
	freopen("dictout.txt", "w", stdout);
    int d,w,i,j,intld[DICT_SIZE],whlld[DICT_SIZE];
    cin>>d>>w;
    for(i=0;i<d;i++)
    {
        cin>>intld[i]>>whlld[i];
    }
    for(i=0;i<w;i++)
    {
        int f=0;
        int x;
        cin>>x;
        for(j=0;j<d;j++)
        {
            if(intld[j]==x)
            {
                cout<<whlld[j]<<"\n";
                f=1;
            }
        }
        if(!f)
        {
            cout<<"c?\n";
        }
    }
    return 0;
}
