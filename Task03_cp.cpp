#include <iostream>
#include <string>
using namespace std;
void ticket (float price, string country);
main ()
{
while(true)
{
float price; string country;
cout << "Enter the price of ticket in $:";
cin >> price;
cout << "Enter the name of Country:";
cin >> country;
ticket (price, country);
}
}
void ticket (float price, string country)
{
if (country == "Pakistan") {cout << "Your discounted ticket price is:" << price*0.95 << endl;}
if (country == "Ireland") {cout << "Your discounted ticket price is:" << price*0.9 << endl;}
if (country == "India") {cout << "Your discounted ticket price is:" << price*0.8 << endl;}
if (country == "England") {cout << "Your discounted ticket price is:" << price*0.7 << endl;}
if (country == "Canada") {cout << "Your discounted ticket price is:" << price*0.55 << endl;}

}