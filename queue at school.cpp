#include<iostream>
#include<cstring>

using namespace std;
   int main()
   {
       int n,k,i,j,t;
        cin>>n>>k;
       char a[n];
       cin>>a;

        for ( j=0; j<k; j++)
        {
             for( i=0; i<n; )
               {

                   if ( a[i]=='B' && a[i+1]=='G' )
                   {
                          t=a[i];
                          a[i]=a[i+1];
                          a[i+1]=t;

                          i=i+2;
                     }
                      else
                        i++;
                }
        }


        cout<<a<<endl;
   }
