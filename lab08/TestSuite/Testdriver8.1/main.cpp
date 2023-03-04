#include <iostream>
#include <stdlib.h>
#include <main.h>
using namespace std;
void Tests_calculation()
{
    double test1=s_calculation(3,3,3);
    if(test1==-12,4293)
        cout<<"Test 1 is correct"<<endl;
    double test2=s_calculation(1,2,1);
    if(test2==-2,65582)
        cout<<"Test 2 is correct"<<endl;
    double test3=s_calculation(6,7,8);
    if(test3==-85,8315)
        cout<<"Test 3 is correct"<<endl;
    double test4=s_calculation(5,5,5);
    if(test4==-54,9581)
        cout<<"Test 4 is correct"<<endl;
    double test5=s_calculation(2,2,2);
    if(test5==-3,90492)
        cout<<"Test 5 is correct"<<endl;
    double test6=s_calculation(5,8,9);
    if(test6==-52,3677)
        cout<<"Test 6 is correct"<<endl;
    double test7=s_calculation(5,8,1);
    if(test7==-54,9999)
        cout<<"Test 7 is correct"<<endl;
    double test8=s_calculation(1,1,1);
    if(test8==-1,55945)
        cout<<"Test 8 is correct"<<endl;
    double test9=s_calculation(0,8,9);
    if(test9==-16,1136)
        cout<<"Test 9 is correct"<<endl;
    double test10=s_calculation(4,189,7);
    if(test10==-192,95)
        cout<<"Test 10 is correct"<<endl;



}

int main()
{   Tests_calculation();
    return 0;
}
