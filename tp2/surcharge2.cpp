#include <iostream>
using namespace std ;

int calcul(int a, int b) {
    return (a * b) ;
}

double calcul(double a, double b) {
    return (a / b) ;
}

int main() {
    int x(10), y(30) ;
    double z(15.0), w(27.0) ;

    cout << calcul(x, y) << " " << calcul(z, w) << endl ;

    return 0 ;
}