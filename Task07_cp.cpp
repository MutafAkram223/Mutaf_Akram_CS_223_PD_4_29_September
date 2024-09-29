#include <iostream>
using namespace std;
void shop (float red, float white, float tulip);
main ()
{
float red; float white; float tulip;
cout << "Enter number of Red Roses:";
cin >> red;
cout << "Enter number of White Roses:";
cin >> white;
cout << "Enter number of Tulip Roses:";
cin >> tulip;
shop (red,white, tulip);
}
void shop (float red, float white, float tulip)
{
float total_price;
total_price = red*2 + white*4.1 + tulip*2.5;
if 
(total_price > 200) {
cout << "Orignal Price:" << total_price << endl;
cout << "Discounted Price:" << total_price * 0.80 << endl;}
else
{cout << "Price of roses is:" << total_price;}
}