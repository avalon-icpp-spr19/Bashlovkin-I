#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(0, "");
	{
		/*Çàäàíèå 1*/
		int a, b, c, x;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > c)
		{
			x = a; a = c; c = x;
		}
		if (b > c)
		{
			x = b; b = c; c = x;
		}

		bool tri = (c < a + b) || (a == b && b == c);
		if (tri)
		{
			cout << "Äà";
		}
		else
		{
			cout << "Íåò";
		}
		cout << endl << endl;
	}
	{
		/*Çàäàíèå 2*/
		int n, prov;
		cin >> n;
		if ((n % 10 == 1) && (n % 100 != 11))
		{
			prov = 1;
		}
		else if (((n % 10 > 1) && (n % 10 < 5)) && ((n < 11) || (n > 15)))
		{
			prov = 2;
		}
		else
		{
			prov = 3;
		}
		switch (prov)
		{
		case 1: cout << n << " Ðóáëü";
			break;
		case 2: cout << n << " ðóáëÿ";
			break;
		case 3: cout << n << " ðóáëåé";
			break;
		}
		cout << endl << endl;
	}
	{
		/*Çàäàíèå 3*/
		bool enemyInFront, isBoss;
		int robotHealth;
		bool shouldFire = true;
		cout << "enemyInFront: ";
		cin >> enemyInFront;
		cout << "isBoss: ";
		cin >> isBoss;
		cout << "robotHealth: ";
		cin >> robotHealth;
		if (!enemyInFront)
		{
			shouldFire = false;
		}
		else
		{
			if (!isBoss)
			{
				if (robotHealth < 50)
				{
					shouldFire = false;
				}

			}
		}
		if (shouldFire)
		{
			cout << "Fire";
		}
		cout << endl << endl;
	}
	{
		/*Çàäàíèå 4*/
		int foto1, foto2, foto3, points;
		cin >> foto1; cin >> foto2; cin >> foto3;
		if (foto1 > foto2)
		{
			points = foto2; foto1 = foto2; foto2 = points;
			if (foto2 > foto3)
			{
				points = foto3; foto1 = foto3; foto3 = points;
			}
		}
		if (foto2 > foto3)
		{
			points = foto2; foto2 = foto3; foto3 = points;
			if (foto3 > foto3)
			{
				points = foto2; foto2 = foto1; foto1 = points;
			}
		}
		cout << foto2;
		cout << endl << endl;
	}
	{
		/*Çàäàíèå 5*/
		int d, m, y;
	cin >> y; cin >> m; cin >> d;
	if (m < 13 && m > 0)
	{
		if (m == 2)
		{
			bool IsLeapYear = (y % 400 == 0) || (y % 100 != 0) && (y % 4 == 0);
			if (IsLeapYear)
			{
				if (d > 29)
				{
					cout << "false";
				}
				else
				{
					cout << "true";
				}
			}
			else
			{
				if (d > 28)
				{
					cout << "false";
				}
				else
				{
					cout << "true";
				}
			}
		}
		else
		{
			switch (m)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (d > 31)
				{
					cout << "false";
				}
				else
				{
					cout << "true";
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (d > 30)
				{
					cout << "false";
				}
				else
				{
					cout << "true";
				}
				break;
			}
		}
	}
	else
	{
		cout << "false";
	}
	cout << endl << endl;
	}
	{
		/*Çàäàíèå 6*/
		int kletka1, kletka2;
		cin >> kletka1; cin >> kletka2;
		int xod1, xod2, xod3, xod4;
		xod2 = kletka1 % 10; xod1 = (kletka1 - xod2) / 10;
		xod4 = kletka2 % 10; xod3 = (kletka2 - xod4) / 10;
		if (xod1 == xod3 || xod2 == xod4 || (xod1 - xod3 == xod2 - xod4) || (xod3 - xod1 == xod4 - xod2))
		{
			cout << "true";
		}
		else
		{
			cout << "false";
		}
	}
	cin.get(); cin.get();
