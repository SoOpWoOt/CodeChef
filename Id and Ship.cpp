#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
          char ch ;
          cin>>ch;
     
          if(ch=='b'||ch=='B')
          {
               cout<<"BattleShip"<<endl;              
          }
          else if(ch=='c'|| ch=='C')
          {
               cout<<"Cruiser"<<endl;
                
          }
          else if(ch=='d'||ch=='D')
          {
               cout<<"Destroyer"<<endl;               
          }
          else //(ch=='f'||ch=='F')
          {
               cout<<"Frigate"<<endl;
               
          }          
     }

     return 0;
}