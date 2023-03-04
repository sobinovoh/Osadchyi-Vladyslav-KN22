#include "ModulesOsadchiy.h"
#include <clocale>
#include <iostream>
#include <main.h>
#include <iomanip>
using namespace std;
double logic(double a, double b)
{   double result;
    if(a+1<=b)
    {
        result=1;
    }else{
          result=0;
         }

    return result;
}


void SoftwareDeveloper()
{
   setlocale(LC_ALL,"ukr");
    cout<<"\n"
        <<" Wlad Osadchiy "
        <<" Влад Осадчий "
        <<"(c)ALL Rights Reserved";

}


double cal1610(double x,double y, double z)
{
    double S=s_calculation(x,y,z);
    cout<<"Десяткова система числення:\n ";
    cout<<"х= "<<dec<<x<<endl;
    cout<<"y= "<<dec<<y<<endl;
    cout<<"z= "<<dec<<z<<endl;
    cout<<"S= "<<dec<<S<<endl;
    cout<<"Шістандцяткова система числення: \n ";
    cout<<"х=0x"<<hex<<x<<endl;
    cout<<"y=0x"<<hex<<y<<endl;
    cout<<"z=0x"<<hex<<z<<endl;
    cout<<"S=0x"<<hex<<S<<endl;


    return 0;
}
