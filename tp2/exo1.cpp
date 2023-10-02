#include <iostream>
#include <string>
using namespace std ;

int main() {
    string user("Lucien") ;

    user[0] = 'J' ; //Modification de la première lettre
    user[2] = 'l' ; //Modification de la troisième lettre

    cout << "Vous etes : " << user << endl ;

    return 0 ;
}