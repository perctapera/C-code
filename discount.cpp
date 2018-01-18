#include <iostream>
using namespace std;
int main()
{
     int rp,sp,dc,discount;

     cout<<"Enter price = ";
     cin>>rp;
     cout<<"Enter department code = ";
     cin>>dc;
     switch(dc)
     {
          case'310':
          discount=(10*rp)/100;
          sp = rp-discount;
          cout<<"sale price =  "<<sp<<endl;
          cout<<"discounted price = "<<discount<<endl;
          break;
          case'438':
          discount=(12*rp)/100;
          sp= rp-discount;
          cout<<"sale price = "<<sp<<endl;
          cout<<"discounted price = "<<discount<<endl;
          break;
          case'284':
          discount=(8*rp)/100;
          sp= rp-discount;
          cout<<"sale price = "<<sp<<endl;
          cout<<"discounted price = "<<discount<<endl;
          break;
          case'652':
          discount=(15*rp)/100;
          sp= rp-discount;
          cout<<"sale price = "<<sp<<endl;
          cout<<"discounted price = "<<discount<<endl;
          break;
          default:
          discount=(5*rp)/100;
          sp= rp-discount;
          cout<<"sale price = "<<sp<<endl;
          cout<<"discounted price = "<<discount<<endl;
          break;
     }
     return 0;
