#include <iostream>
using namespace std ;

int calcul(int a, int b) {
    return (a * b) ;
}

int calcul(int a, int b, int c) {
    return (a * b * c) ;
}

int main() {
    int x(10), y(30), z(50) ;

    cout << calcul(x, y) << " " << calcul(x, y, z) ;

    return 0 ;
}