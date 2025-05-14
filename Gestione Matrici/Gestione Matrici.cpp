#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

const int NEX = 10, NEY = 10;

int dihh = 10;
int x = 0, y = 0;
const int incx = 3;

int mat[10][10];

void gotoxy(int x, int y);
void caricaDati();
void stampaDati();
void trovaDiagonale(int offset, bool verso);
int menu();

int main()
{
	caricaDati();
	stampaDati();
	trovaDiagonale(0, 0);
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
	for (int i = 0; i < dihh; i++)
	{
		for (int j = 0; j < dihh; j++)
		{
			mat[j][i] = rand() % 21;
		}
	}
}

void stampaDati() {
	for (int i = 0; i < dihh; i++)
	{
		x = 0;
		gotoxy(x, y);
		for(int j = 0; j < dihh; j++)
		{
			cout << mat[j][i];
			x += incx;
			gotoxy(x, y);
		}
		y++;
	}
}

void trovaDiagonale(int input) {
	x = 31;
	y = 0;

	switch (input) {
	}
	if (input == 0) {
		for (int i = 0; i < dihh; i++)
		{
			gotoxy(x, y);
			cout << mat[i][i];
			x+= incx;
			y++;
		}
	}
	{
		for (int i = 0; i < dihh; i++)
		{
			gotoxy(x, y);
			cout << mat[i][i];
			x += incx;
			y++;
		}
	}


}

int menu() {
	int inp;
	cout << "Menu:\n";
	cout << "1. stampare l’intera matrice e accanto la sola diagonale principale\n";
	cout << "2.stampare l’intera matrice e accanto la sola diagonale secondaria\n";
	cout << "3.stampare l’intera matrice e accanto il triangolo superiore, rispetto alla diagonale principale\n";
	cout << "4.stampare l’intera matrice e accanto il triangolo superiore, rispetto alla diagonale secondaria\n";
	cout << "5.stampare l’intera matrice e accanto il triangolo inferiore, rispetto alla diagonale secondaria\n";
	cout << "6. Esci\n\n";
	cout << "Inserisci un'opzione: ";
	cin >> inp;

	switch (inp) {
	case 1:
		break;
	}


	return 0;
}
