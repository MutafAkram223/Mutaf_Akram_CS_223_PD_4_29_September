#include <iostream>
using namespace std;

void pet(int holidays);

main() {
int holidays;
cout << "Enter the number of holidays: ";
cin >> holidays;
pet(holidays);
}

void pet(int holidays) {
int working_days = 365 - holidays;
int holidays_min = holidays * 127;
int working_min = working_days * 63;
int total_min = holidays_min + working_min;

int hours = total_min / 60; 
int minutes = total_min % 60;

if (total_min > 30000) {
int ext_min = total_min - 30000;    
int ext_hours = ext_min / 60; 
int ext_minutes = ext_min % 60; 
        
cout << "Tom will run away" << endl;
cout << ext_hours << " hours and " << ext_minutes << " minutes for play" << endl;
} 
else {
cout << "Tom sleeps well" << endl;
cout << hours << " hours and " << minutes << " minutes less for play" << endl;}
}


