#include <iostream>  
 using namespace std;  
 int main()  
 {  
      int amount=0;  
      char choice1, choice2, choice3='Y';  
      while (choice3=='Y')  
      {  
           cout<<"Select the currencies that you want to exchange\n";  
           cout<<" - Enter R for Pakistani Rupees\n";  
           cout<<" - Enter E for Euro\n";  
           cout<<" - Enter D for Dollar\n"<<endl;  
           cout<<"Please select the currency that you want to convert"<<endl;  
           cin>>choice1;  
           cout<<"Please enter the currency that you want to convert into"<<endl;  
           cin>>choice2;  
           cout<<"Enter Amount: ";  
           cin>>amount;  
           if ( choice1=='R' && choice2=='E')  
           {  
                //division of input rupees by 112 to convert into euros  
                cout<<amount <<" Rupees = "<<amount/112<<" Euros"<<endl;    
           }  
           if ( choice1=='R' && choice2=='D')  
           {  
                //division of input rupees by 84 to convert into dollars  
                cout<<amount <<" Rupees = "<<amount/84<<" Dollars"<<endl;   
           }  
           if ( choice1=='E' && choice2=='R')  
           {  
                //multiplication of input Euros by 112 to convert into rupees  
                cout<<amount <<" Euros = "<<amount*112<<" Rupees"<<endl;   
           }  
           if ( choice1=='E' && choice2=='D')  
           {  
                //multiplication of input Euros by 1.33 to convert into dollars  
                cout<<amount <<" Euros = "<<amount*1.33<<" Dollars"<<endl;   
           }  
           if ( choice1=='D' && choice2=='R')  
           {  
                //multiplication of input dollars by 84 to convert into rupees  
                cout<<amount <<" Dollars = "<<amount*84<<" Rupees"<<endl;   
           }  
           if ( choice1=='D' && choice2=='E')  
           {  
                //division of input dollars by 1.33 to convert into euros  
                cout<<amount <<" Dollars = "<<amount/1.33<<" Euros"<<endl;   
           }  
           cout<<"Do you want to make another conversion? ( Y/N ) :";  
           cin>>choice3;  
      }  
      cout<<"Goodbye :) "<<endl;  
 }  
