#include <iostream>
#include <string>

using namespace std;


class statki
{
	string zTraf = "x";
	string zPudlo = "o";
	string zPuste = " ";

public:
};

class rysuj :public statki
{

};

int main()
{


	cout<<"\n"
		<< "     1 2 3 4 5 6 7 8 9 10 \n"
		<< "  A |x|o| |o|x|o| |o|x|o|\n"
		<< "  B |x| |x|o|x|o| |o|x|o|\n"
		<< "  C |o| | |o|x|o| |o|x|o|\n"
		<< "  D |x|o| |o|x|o| |o|x|o|\n"
		<< "  E |x|o| |o|x|o| |o|x|o|\n"
		<< "  F |x|o| |o|x|o| |o|x|o|\n"
		<< "  G |x|o| |o|x|o| |o|x|o|\n"
		<< "  H |x|o| |o|x|o| |o|x|o|\n"
		<< "  I |x|o| |o|x|o| |o|x|o|\n"
		<< "  J |x|o| |o|x|o| |o|x|o|\n\n";


	string pole[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			pole[i][j] = 'x';
		}
	}

	int x, y;
	cin >> x >> y;
	y += 1; // wyrownanie wzgledem planszy
	for (int i = y; i < (4+y) ; i++)
	{
		pole[x][i] = 'O';
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout<<pole[i][j];
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}