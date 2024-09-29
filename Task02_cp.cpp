#include <iostream>
using namespace std;
void tf (string statment);
main ()
{
string statment;
cout << "Enter true or false:";
cin >> statment;
tf (statment);
}
void tf (string statment)
{
if (statment == "false") {cout << "true";}
if (statment == "true") {cout << "false";}

}