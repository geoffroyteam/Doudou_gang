#include <iostream>

using namespace std;

int main()

{

int age_utilisateur(18);
int& age_u(age_utilisateur);

cout << "L'age de l'utilisateur est : "<<age_utilisateur << "ans." << endl; 
cout << "L'age de l'utilisateur est : " << age_u << " ans." << endl;

return 0;

}
