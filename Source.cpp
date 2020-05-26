#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int i, j;

	cout << "Masukkan Banyak Pengulangan   : "; cin >> j;

	for (i = 1; i <= j; i++)
	{
		cout << i << endl;
		if (i == (j - 3))
		{
			break;
		}
	}

	cout << endl;
	cout << "i terakhir (break = banyak - 3) = " << i << endl << endl;

	_getch();
	return 0;
}