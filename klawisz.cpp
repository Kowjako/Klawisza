#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
    int a = getch();
    if(a>=65 && a<=90) cout<<"Wielka litera"<<endl; else
    if(a>=97 && a<=122) cout<<"Mala litera"<<endl; else
    if(a>=48 && a<=57) cout<<"Cyfra"<<endl; else
    if(a==13) cout<<"Enter"<<endl; else
    if(a==27) cout<<"ESC"<<endl; else
    if(a==224) {
        int b = getch();
        if(b==75) cout<<"<="<<endl;
        if(b==77) cout<<"=>"<<endl;
    } else
    if(a==0) {
        int b = getch();
        if(b==59) cout<<"F1"<<endl;
    } else cout<<"Inna klawisza"<<endl;
    return 0;
}
