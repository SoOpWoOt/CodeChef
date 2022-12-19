#include<iostream>
#include<cmath>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)

     {
         int A,B,C,sub,minn=0,maxx=0;
         cin>>A>>B>>C;
         minn = min(min(A,B),C);
         maxx = max(max(A,B),C);
         sub = maxx-minn;
         cout<<sub<<endl;
     }

     return 0;
}