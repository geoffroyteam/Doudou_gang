#include <iostream>

using namespace std; 

void echange (int& x, int& y) 
{
    int buffer = x; x = y; y = buffer;
}

int main()
{
    int a = 3, b =5;
    cout <<"a= " << a << endl;
    cout << "b= " << b << endl; 
    echange (a, b);
    cout <<"a= " << a << endl; cout << "b= " << b << endl; return 0;
}