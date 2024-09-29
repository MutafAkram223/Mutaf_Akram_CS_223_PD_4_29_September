#include <iostream>
using namespace std;
void time (int hours, int min);
main ()
{
int hours; int min;
cout << "Enter number of hours:";
cin >> hours;
cout << "Enter number of minutes:";
cin >> min;
time (hours, min);
}
void time (int hours, int min)
{
int min_in_hours;
min_in_hours = hours*60;
if (min_in_hours>min) {cout << min_in_hours;}
else {cout << min;}
}