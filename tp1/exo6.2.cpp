#include <iostream>
#include <cmath>
using namespace std; int main()
{
    double a(0), b(0);
    cout << "Bienvenue dans le programme qui calcul a^b" << endl;
    cout << "Donner une valeur pour a : ";
    cin >> a;
    cout << "Donner une valeur pour b: ";
    cin >> b;
    double const resultat(pow(a,b));
    cout << a << "^"<<b<<"=" << resultat << endl;
    return 0;
}