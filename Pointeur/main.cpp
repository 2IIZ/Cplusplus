#include <iostream>

using namespace std;

int main()
{

    int var(2);
    int *addresse(0);

    cout << "Variable :";
    cout << var << endl;
    cout << "Addresse :";
    cout << &var << endl << endl;

    cout << "Variable :";
    cout << var << endl;
    addresse = &var;
    cout << "Addresse :";
    cout << addresse << endl;
    cout << "Addresse de addresse :" << &addresse << endl;
    return 0;
}
