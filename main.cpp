/* Write a program
that solve a quadratic equation for real numbers (Δ≥0). Load coefficients a, b and c
remeber that a must be other than 0). Please use a below quations:
𝑎𝑥2+𝑏𝑥+𝑐=0
Δ=𝑏2−4𝑎𝑐
𝑥1=−𝑏−Δ2𝑎
𝑥2=−𝑏+Δ2𝑎
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    cout<< "Rozwiaz rownanie kwadratowe podajac jego 3 wspolczynniki " <<endl;

    cout<<"Podaj liczbe a"<<endl;
    cin>> a;
    cout<<"Podaj liczbe b"<<endl;
    cin>> b;
    cout<<"Podaj liczbe c"<<endl;
    cin>> c;
    if ((a>0) || (a<0))
    {
        delta=((b*b)-(4*a*c));
        cout<<"Delta = " <<delta<< endl;
    }

    else
    {
        cout<< "Nie moge wykonac tego dzialania";
    }

    if (delta<0)
    {
        cout<< "Brak miejsc zerowych";
    }

    else if (delta>0)
    {
        x1=((-b-sqrt(delta))/(2*a));
        x2=((-b+sqrt(delta))/(2*a));
        cout<<"Miejsce zerowe = "<<x1<< endl;
        cout<<"Miejsce zerowe = "<<x2<<endl;
    }

    else
    {
        x1=(-b/(2*a));
        cout<<"Miejsce zerowe = "<<x1;
    }


    return 0;
}
