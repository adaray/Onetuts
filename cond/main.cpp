#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int age = 45;
    int ageAttest = 18;
    bool isNotdrunk = false;

    if ((age>=1) && (age<17))
    {
        cout <<"Illegal to drive"<< endl;
    }
    else if (isNotdrunk)
    {
        cout <<"Intoxicated, not allowed to drive"<< endl;
    }
    else if (age>=80 && ((age>100) || ((age - ageAttest)>5)))
    {
        cout <<"Illegal to drive"<< endl;
    }
    else
    {
        cout <<"You can drive"<< endl;
    }
    return 0;
}
