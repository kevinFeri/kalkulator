#include <iostream>
#include <math.h>
using namespace std;

int izbiraFun()
{
    cout << "IZBERI OPERACIJO : " << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. /" << endl;
    cout << "4. *" << endl;
    cout<<"5. ^"<<endl;
    int izbor;
    cin >> izbor;
    return izbor;
}

int main()
{
    float a;
    float b;
    int izbira;
    cout << "Vpisite prvo stevilo: ";
    cin >> a;
    cout << "Vpisite drugo stevilo: ";
    cin >> b;
    izbira = izbiraFun();
    switch (izbira)
    {
    case 1:
    {
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    }
    case 2:{
        cout << a << " - " << b << " = " << a - b << endl;
        break;}
    case 3:{
                cout << a << " / " << b << " = " << (float)(a / b) << endl;
            break;}
    case 4: {
                cout << a << " * " << b << " = " << a*b << endl;
            break;}
    case 5:{
         cout<< a<<"^"<<"b"<<" = "<< pow(a,b)<<endl;
         break;
    }
    default:
    {
        cout<<"WRONG INPUT!!";
    }

    }

    return 0;
}