#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;

int main()
{
    int Option = 2;

    switch(Option)
    {
    case 1:
        cout <<"Kaalay"<< endl;
        break;
    case 2:
        cout<<"Orod"<< endl;
        break;
    case 3:
        cout<<"Haye, Orod" << endl;
        break;

    default:
        cout<<"Salama kadheh"<< endl;

    }
    int V = (21>20)? 100 : 10;//Variable V set against boolean
    cout <<V<<endl;

    return 0;
}
