#include <iostream>
#include <ModulesOsadchiy.h>
using namespace std;

int main()
{
    double test1=logic(3,3);
    if(test1==0)
        cout<<"Test 1 is correct"<<endl;
    double test2=logic(0,0);
    if(test2==0)
        cout<<"Test 2 is correct"<<endl;
    double test3=logic(0,1);
    if(test3==1)
        cout<<"Test 3 is correct"<<endl;
    double test4=logic(5,6);
    if(test4==0)
        cout<<"Test 4 is correct"<<endl;
    double test5=logic(7,0);
    if(test5==0)
        cout<<"Test 5 is correct"<<endl;
    double test6=logic(-1,0);
    if(test6==1)
        cout<<"Test 6 is correct"<<endl;
    double test7=logic(6,7);
    if(test7==1)
        cout<<"Test 7 is correct"<<endl;
    double test8=logic(5,10);
    if(test8==1)
        cout<<"Test 8 is correct"<<endl;
    double test9=logic(1,33);
    if(test9==1)
        cout<<"Test 9 is correct"<<endl;
    double test10=logic(-2,0);
    if(test10==1)
        cout<<"Test 10 is correct"<<endl;

    return 0;
}
