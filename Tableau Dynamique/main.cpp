#include <iostream>
#include <vector> // don't forget

using namespace std;

int main()
{
    cout << "Hello world!" << endl;


    vector<int> varTableau(2);
    varTableau.push_back(12);
    varTableau.push_back(8);
    varTableau.pop_back();


    for(int i(0); i<varTableau.size(); i++)
    {
        cout << varTableau[i] << endl;
    }









    return 0;
}
