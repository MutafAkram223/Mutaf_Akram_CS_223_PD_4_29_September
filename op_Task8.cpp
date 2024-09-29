#include <iostream>
using namespace std;
void uni_menu();
void aggregate(string name1, string name2, float matric1, float matric2, float inter1, float inter2, float ecat1, float ecat2);
void comparision(string name1, string name2, float ecat1, float ecat2);

main()
{
string name1, name2;
float matric1, matric2, inter1, inter2, ecat1, ecat2;

cout << "Enter name of first student: ";
cin >> name1;
cout << "Enter the matric marks of first student: ";
cin >> matric1;
cout << "Enter the inter marks of first student: ";
cin >> inter1;
cout << "Enter the Ecat marks of first student: ";
cin >> ecat1;

cout << "Enter name of second student: ";
cin >> name2;
cout << "Enter the matric marks of second student: ";
cin >> matric2;
cout << "Enter the inter marks of second student: ";
cin >> inter2;
cout << "Enter the Ecat marks of second student: ";
cin >> ecat2;

uni_menu();
aggregate(name1, name2, matric1, matric2, inter1, inter2, ecat1, ecat2);
comparision(name1, name2, ecat1, ecat2);
}

void uni_menu()
{
cout << " University of Engineering & Technology, Lahore " << endl;
cout << "     University Admission Management System     " << endl;
}

void aggregate(string name1, string name2, float matric1, float matric2, float inter1, float inter2, float ecat1, float ecat2)
{
float aggregate1 = (matric1 * 30) / 1100 + (inter1 * 30) / 570 + (ecat1 * 40) / 400;
cout << "Aggregate of " << name1 << " is: " << aggregate1 << endl;

float aggregate2 = (matric2 * 30) / 1100 + (inter2 * 30) / 570 + (ecat2 * 40) / 400;
cout << "Aggregate of " << name2 << " is: " << aggregate2 << endl;
}

void comparision(string name1, string name2, float ecat1, float ecat2)
{
if (ecat1 > ecat2)
{
cout << "Ecat marks of " << name1 << " are greater than " << name2 << endl;
}
else
{
cout << "Ecat marks of " << name2 << " are greater than " << name1 << endl;
}
}









