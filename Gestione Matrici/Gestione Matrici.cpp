#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

const int NEX = 10, NEY = 10;

int x = 0, y = 0;
const int incx = 3;

int mat[10][10];

void gotoxy(int x, int y);
void caricaDati();
void stampaDati();
void trovaDiagonale(int offset, bool verso);

int main()
{
	caricaDati();
	stampaDati();
}

void gotoxy(int x, int y)
{
	HANDLE HConsole;
	CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
	HConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleInfo.dwCursorPosition.X = x;
	ConsoleInfo.dwCursorPosition.Y = y;
	SetConsoleCursorPosition(HConsole, ConsoleInfo.dwCursorPosition);
}

void caricaDati() {
	for (int i = 0; i < NEY; i++)
	{
		for (int j = 0; j < NEX; j++)
		{
			mat[j][i] = rand() % 21;
		}
	}
}

void stampaDati() {
	for (int i = 0; i < NEY; i++)
	{
		x = 0;
		gotoxy(x, y);
		for(int j = 0; j < NEX; j++)
		{
			cout << mat[j][i];
			x += incx;
			gotoxy(x, y);
		}
		y++;
	}
}

void trovaDiagonale(int offset, bool verso;) {

}