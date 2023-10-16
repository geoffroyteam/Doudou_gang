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
    tableau.pop_back();
    tableau.pop_back();
    for (i=0; i<6; i++)
    {
        cout << tableau[i] << endl;
    } 
    cout << "Le tableau contient" << tableau.size() << "cases." << endl;
    return 0;
}