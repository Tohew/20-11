#include<iostream>
#include<windows.h>

using namespace std;

void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void gotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
	TextColor(11);
	gotoXY(5, 20);
	int x = 0, y = 10;
	for (int i = 0; i < 50; i++)
	{
		/*gotoXY(x + i * 2, y);
		cout << "H";
		Sleep(100);
		system("cls"); */ 
		gotoXY(x + i + 30, y + 0); cout << "  ,d88b.d88b,";
		gotoXY(x + i + 30, y + 1); cout << "  88888888888";
		gotoXY(x + i + 30, y + 2); cout << "  'Y8888888Y'";
		gotoXY(x + i + 30, y + 3); cout << "    'Y888Y' ";
		gotoXY(x + i + 30, y + 4); cout << "      'Y'   ";
		gotoXY(x + i, y + 2); cout << "Chuc co ngay 20-11 vui ve :33";
		Sleep(200);
		system("cls");
	}
	return 0;
}