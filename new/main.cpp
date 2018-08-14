#include <iostream>
#include <vector> //
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "Program start and Dypes" << endl;

    const double PI = 3.142566164;
    cout << "The value of PI:" << PI << endl;

    char myChar = 'A';
    bool isSad = true;
    int myAge = 38;
    float favNum = 3.141569;
    double dNum = 1.45465456456;

    cout << "My grade is: " << myChar << endl;
    cout << "Ali is not sad: "<<isSad<<endl;

    //finding the number of dataypes

    cout<<"Char type size: "<<sizeof(myChar)<<endl;
    cout<<"Float type size: "<<sizeof(favNum)<<endl;

    int five = 5;

    cout <<"5++ = "<< five++ <<endl;
    five++;
    ++five;
    five--;
    --five;
    five+=10;
    cout<<five<<endl; // the value is 16

    //Order of operations
    // 4*5+8-2*7
    cout<<"4*5+8-2*7 = "<<4*5+8-2*7<<endl;
    cout<<"4*5+8-2*7 = "<<(4*5)+8-(2*7)<<endl;
    cout << "8/7"<< 8/7 << endl;//not workring
    cout << "8/7 = "<< (float)8/7 << endl;

    return 0;
}




































