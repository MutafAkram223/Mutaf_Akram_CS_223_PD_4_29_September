#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void movePlayer(int x, int y);

int main() 
{
int x = 4, y = 4;
system("cls");
printMaze();

while (true)
{
movePlayer(x, y);
y = y + 1;

if (y == 8)
{
while (true)
{
movePlayer(x, y);
y = y - 1;

if (y == 1)
{
break;
        }
     }
  }
}

return 0;
}

void movePlayer(int x, int y) 
{
gotoxy(x, y);
cout << "P";
Sleep(200);
gotoxy(x, y);
cout << " ";
}

void printMaze() 
{
cout << " ############## " << endl;
cout << " #            # " << endl;
cout << " #            # " << endl;
cout << " #            # " << endl;
cout << " #            # " << endl;
cout << " #            # " << endl;
cout << " #            # " << endl;
cout << " #            # " << endl;
cout << " #            # " << endl;
cout << " ############## " << endl;
}

void gotoxy(int x, int y) 
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
