#include <iostream>
using namespace std;

void covid(int people, int rolls);

main()
{
int people, rolls;
cout << "Enter the total number of people: ";
cin >> people;
cout << "Enter the total number of rolls: ";
cin >> rolls;
covid(people, rolls);
}

void covid(int people, int rolls)
{
int total_sheets = rolls * 500;
int daily_tp_usage = 57 * people;
int days_last = total_sheets / daily_tp_usage;
    
if (days_last >= 14) {
cout << "Your tp will last " << days_last << " days. No need to panic.";
} 
else {
cout << "Your tp will last " << days_last << " days. Buy more tp.";
    }
}