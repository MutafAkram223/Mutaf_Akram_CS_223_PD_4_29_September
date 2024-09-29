#include <iostream>
using namespace std;
void tf (int num1,int num2);
main ()
{
int num1; int num2;
cout << "Enter the First Number:";
cin >> num1;
cout << "Enter the Second Number:";
cin >> num2;
tf (num1, num2);
}
void tf (int num1,int num2)
{
if (num1 == num2) {cout << "true";}
else {cout << "false";}

}