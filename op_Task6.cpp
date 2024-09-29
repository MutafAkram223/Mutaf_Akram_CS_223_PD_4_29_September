#include <iostream>
#include <windows.h>
using namespace std;
void printHassan();

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main ()
{
system("cls");
gotoxy(50,15);
printHassan();
}

void printHassan ()
{
cout << " #  # " << endl;
cout << " #  # " << endl;
cout << " #### " << endl;
cout << " #  # " << endl;
cout << " #  # " << endl;

cout << " #### " << endl;
cout << " #  # " << endl;
cout << " #### " << endl;
cout << " #  # " << endl;
cout << " #  # " << endl;

cout << " #### " << endl;
cout << " #  # " << endl;
cout << "  #   " << endl;
cout << "   #  " << endl;
cout << " #  # " << endl;
cout << "  ### " << endl;

cout << " #### " << endl;
cout << " #  # " << endl;
cout << "  #   " << endl;
cout << "   #  " << endl;
cout << " #  # " << endl;
cout << "  ### " << endl;

cout << " #### " << endl;
cout << " #  # " << endl;
cout << " #### " << endl;
cout << " #  # " << endl;
cout << " #  # " << endl;

cout << " #   # " << endl;
cout << " ##  # " << endl;
cout << " # # # " << endl;
cout << " #  ## " << endl;
cout << " #   # " << endl;
}

