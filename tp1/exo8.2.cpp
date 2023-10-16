#include <iostream> 
#include <vector>
using namespace std;

int main()
{
    int i;
    vector<int> tableau(5,3);
    tableau.push_back(8);
    tableau.push_back(7);
    tableau.push_back(6);
    for (i=0; i<8; i++)
    {
        cout << tableau[i] << endl;
    }
    return 0;
}