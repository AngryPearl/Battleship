#include <iostream>
#include <string>
#include <windows.h>

//#include "drawField.h"

using namespace std;


//******************************************

class game
{
	string chHit = "x";
	string chMiss = "o";
	string chEmpty = " ";

public:

};
//******************************************

class drawField :
	public game
{

public:

	string sfield[11] =
	{      //123456789
		   //45678910
		   //
		"y  x1 2 3 4 5 6 7 8 9 10",
		"A1 | | | | | | | | | | |",
		"B2 | | | | | | | | | | |",
		"C3 | | | | | | | | | | |",
		"D4 | | | | | | | | | | |",
		"E5 | | | | | | | | | | |",
		"F6 | | | | | | | | | | |",
		"G7 | | | | | | | | | | |",
		"H8 | | | | | | | | | | |",
		"I9 | | | | | | | | | | |",
		"J1 | | | | | | | | | | |",
	};									//PO EDYCJI ZMIENIC W ZMIENNYCH PRZESUWAJACYCH POCZATEK POLA

	//	|1|2|3|4 |5|7 |8 | 9|10|
	//	|4|6|8|10|12|14|13|14|15|
	//	| | | | | | |  |  |  |(x+1)/2
	//	| | | | | | |  |  |  |
	//	| | | | | | |  |  |  |
	//	| | | | | | |  |  |  |
	//	| | | | |  |  |  |  |  |
	//	| | | | |  |  |  |  |  |
	//	| | | | |  |  |  |  |  |
	//	| | | | |  |  |  |  |  |
	//


};

//*****************************************

class drawShip :public game
{
	
};

//******************************************

int main()
{
	drawField poleTwoje;
	drawField polePrzeciwnika;
	int x, y;
	int size = 2;
	int statki_ile=4;
	int statki_rozmiar[] = { 2,2,3,4,0 };
	while (1)
	{
		while (statki_ile--) {
			size = statki_rozmiar[statki_ile];
			cout << "teraz statek o wielkosci " << size;
			//Sleep(1000);
			cout << "\n\npodaj y\n";
			cin >> y;
			cout << "podaj x\n";
		
			cin >> x;
			int choose;
			cout << "podaj kierunek - 1 poziomo, 2 pionowo\n";
			cin >> choose;

			while (y + size > 11 || x + size > 11 && choose == 1)
			{
				cout << "zle wartosci!";
				cout << "podaj y\n";
				cin >> y;
				cout << "podaj x\n";
				cin >> x;
			}

			//@@@@@ wyrownanie pola
			x += 1;
			x *= 2;
			//@@@@@
			if (choose == 1)
			{
				for (int i = 0; i < size * 2; i += 2)
				{
					poleTwoje.sfield[y][x + i] = 'S';		//wstawianie statku poziomo
				}
			}

			else
			{					//wstawianie statku pionowo
				for (int i = 0; i < size; i++)
				{
					poleTwoje.sfield[y + i][x] = 'S';
				}
			}

			for (int i = 0; i < 11; i++)		//rysowanie planszy
				cout << poleTwoje.sfield[i] << endl;


		//Sleep(5000);
		system("cls");

		}
		char c;
		cout << "statki zostaly dobrze ustawione? pidaj 'y'/'n'\n";
		cin >> c;
		if (c == 'y')
			break;
		else if (c == 'n')
		{
						//del sfield twoje i stworzenie nowego
			cout << "brak tej funkcji, zrestaruj program :) ";											//czysc mape
			break;

		//	statki_ile = 4;
		//	continue;
		}

		else
		{
			cout << "podales zla litere, za kare uruchom program od nowa";
			break;
		}
	}


	//******************************************************************************************************************************************************
	cout << "teraz kolej twojego przeciwinika na ustawianie statkow ";
	statki_ile = 4;
	while (1)
	{
		while (statki_ile--) {
			size = statki_rozmiar[statki_ile];
			cout << "teraz statek o wielkosci " << size;
		//	Sleep(1000);
			cout << "\n\npodaj y\n";
			cin >> y;
			cout << "podaj x\n";

			cin >> x;
			int choose;
			cout << "podaj kierunek - 1 poziomo, 2 pionowo\n";
			cin >> choose;

			while (y + size > 11 || x + size > 11 && choose == 1)
			{
				cout << "zle wartosci!";
				cout << "podaj y\n";
				cin >> y;
				cout << "podaj x\n";
				cin >> x;
			}

			//@@@@@ wyrownanie pola
			x += 1;
			x *= 2;
			//@@@@@
			if (choose == 1)
			{
				for (int i = 0; i < size * 2; i += 2)
				{
					polePrzeciwnika.sfield[y][x + i] = 'S';		//wstawianie statku poziomo
				}
			}

			else
			{					//wstawianie statku pionowo
				for (int i = 0; i < size; i++)
				{
					polePrzeciwnika.sfield[y + i][x] = 'S';
				}
			}

			for (int i = 0; i < 11; i++)		//rysowanie planszy
				cout << polePrzeciwnika.sfield[i] << endl;


		//	Sleep(5000);
			system("cls");

		}
		char c;
		cout << "statki zostaly dobrze ustawione? pidaj 'y'/'n'\n";
		cin >> c;
		if (c == 'y')
			break;
		else if (c == 'n')
		{
			//del sfield twoje i stworzenie nowego
			cout << "brak tej funkcji, zrestaruj program :) ";											//czysc mape
			break;

			//	statki_ile = 4;
			//	continue;
		}

		else
		{
			cout << "podales zla litere, za kare uruchom program od nowa";
			break;
		}
	}

	//*****************************************************************************************************************************************************

	system("cls");
	
	for (int i = 0; i < 11; i++)		//rysowanie planszy twojej 
		cout << poleTwoje.sfield[i] << endl;


	for (int i = 0; i < 11; i++)		//rysowanie planszy przeciwnika
		cout << polePrzeciwnika.sfield[i] << endl;












	/*

	cout<<"\n" //0 1 2 3 4 5 6 7 8 9
		<< "     1 2 3 4 5 6 7 8 9 10 \n"
		<< "  A | |S|S|S| | | | | | |\n"	  //0
		<< "  B | | | | | | | | | | |\n"	  //1
		<< "  C | | | |S|S| | | | | |\n"	  //2
		<< "  D | | | | | | | | | | |\n"	  //3
		<< "  E | | | | | | | | | | |\n"	  //4
		<< "  F | | | | |S|S|S|S| | |\n"	  //5
		<< "  G | | | | | | | | | | |\n"	  //6
		<< "  H | | | | | | | | | | |\n"	  //7
		<< "  I | | | | | | | | | | |\n"	  //8
		<< "  J | | | | | | | | | | |\n\n";   //9


	string field[10][10];
	int ships[3] = { 232,013,544 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			field [i][j] = 'x';
		}
	}

	int x, y;
	cin >> x >> y;
	y += 1; // wyrownanie wzgledem planszy
	for (int i = y; i < (4+y) ; i++)
	{
		field[x][i] = 'O';
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout<<field[i][j];
		}
		cout << "\n";
	}
	*/

	system("pause");
	return 0;
}