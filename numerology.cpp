#include<iostream>
using namespace std;
int main()
{
 int d1,d2,m1,m2,y1,y2,y3,y4,b,c,e,x,z1,z2,z3,z4,a,add;
 cout<<"Auspicious years to buy a proprety / house "<<endl;
 cout<<"Enter yor date of birth (dd/mm/yyyy)"<<endl;
 cin>>d1>>d2>>m1>>m2>>y1>>y2>>y3>>y4;
 x=d1+d2+m1+m2;
cout<<"enter the year you want to check for property"<<endl;
cin>>z1>>z2>>z3>>z4 ;
 a=z1+z2+z3+z4;
 add=a+x;
if(add>9){
 b= add/10;
 c=add%10;
 e= b+c;
 }
 else e=add;
 if(e==4||6){
    cout<<"Most Auspicios year to buy a property"<<endl;
 }
 else if (e==1||8)
 {
    cout<<"Favourable year to buy a property"<<endl;
 }
 else 
 cout<<"Less Favourable year to buy a property"<<endl;

return 0;
}

