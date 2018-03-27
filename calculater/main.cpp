#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double add(double a1,double a2)
{return (a1+a2);}
double sub(double a1,double a2)
{return (a1-a2);}
double mul(double a1,double a2)
{return (a1*a2);}
double div1(double a1,double a2)
{
    if(a2==0)
        cout<<"Error";
    else
        return(a1/a2);
}



int main()
{
    double h1,h2;
    char ah,sh;
    do{
    cout<<"Enter first number"<<endl;
    cin>>h1;
    cout<<"Enter second number"<<endl;
    cin>>h2;
    cout<<"Enter operator you want"<<endl;
    cin>>ah;
    switch(ah)
    {
    case'+':
        cout<<"The sum is:"<<add(h1,h2)<<endl;
        break;
    case'-':
        cout<<"The sub is:"<<sub(h1,h2)<<endl;
        break;
    case'*':
        cout<<"The mul is:"<<mul(h1,h2)<<endl;
        break;
    case'/':
        cout<<"The div is:"<<div1(h1,h2)<<endl;
        break;
    default:
        cout<<"Error";
        break;
    }

    cout<<"Do you want another operation?"<<endl;
    cin>>sh;
    }while(sh='y');




    return 0;
}


