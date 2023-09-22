#include <iostream> 
using namespace std;

int nombre_secondes (int minutes, int secondes, int heures = 0);

int main()
{
    cout << nombre_secondes (10,20) << endl;

    return 0;
}

int nombre_secondes (int minutes, int secondes, int heures)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

return total;
}