#include <iostream>
using namespace std;
void challan (float speed);
main ()
{
float speed;
cout << "Enter the speed of Car (km/h):";
cin >> speed;
challan (speed);
}
void challan (float speed)
{
if (speed > 100) {cout << "Halt... YOU WILL BE CHALLENGED!!!";}
else {cout << "Perfect! You are going good.";}
}