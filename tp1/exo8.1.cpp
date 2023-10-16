#include <iostream> 
#include <vector>
using namespace std;
int main()
{
    int i;
    vector<int> tableau(5,3);
    for(i=0;i<5;i++)
    {
        cout << tableau[i] << endl;
    }
    return 0;
}