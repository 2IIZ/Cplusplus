#include <iostream>

using namespace std;

int main()
{
    string name;
    int variable(1);
    int maReference(variable); //int&

    maReference++; // variable change too, if the esperluette doesn't was here just maReference go up 1(variable) + 1++.

    //il faut toujours placer l'instruction cin.ignore() après la ligne cin>>a. C'est une règle à apprendre.

    cout << "Enter a Nombre caracol" <<endl;
    getline(cin, name);
    cout << "Hello world!" << endl << variable << endl << maReference << endl << name << endl;
    return 0;
}
