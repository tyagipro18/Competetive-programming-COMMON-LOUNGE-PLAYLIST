#include <iostream>

using namespace std;

int main()
{
    freopen(" rainin.txt", "r", stdin);
	freopen("rainout.txt", "w", stdout);
   int i,cot,nod,n;
   int sum=0,cnt=0;
   cin>>nod>>cot;
   for(i=0;i<nod;i++)
   {
       cin>>n;
       cnt++;
       sum=sum+n;
       if(sum>=cot)
       {
           cout<<cnt;
           break;
       }
   }
       cout<<"it didn't rain enough!!";
   return 0;
}
