#include <iostream>
using namespace std;
void position (int num1, int num2);
main ()
{
int num1; int num2;
cout << "Enter your position:";
cin >> num1;
cout << "Enter your fiend position:";
cin >> num2;
position (num1,num2);
}
void position (int num1, int num2)
{
int differ = num2 - num1;
if (differ >= 1 && differ <= 6) {cout << "true";}
else {cout << "false";}
}