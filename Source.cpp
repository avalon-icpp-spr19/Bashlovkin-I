#include <iostream>
#include <iomanip>
#include "Extention.hpp"

using namespace std;
using namespace ext;

struct Point
{
	float x;
	float y;
};

struct Circle
{
	int radius;
	Point center;
};

enum Color
{
	red,
	orange,
	yellow,
	green,
	cyan,
	blue,
	magneta
};

struct Triangle
{
	Color colour;
	int mas[3];
};

struct Data
{
	int day;
	int month;
	int year;
};

int main()
{
	setlocale(0, "");
	{
		cout << "Task 1: \n";

		Point cor1 = { 1, 2 };

		Point cor2;
		cin >> cor2.x >> cor2.y;

		cout << "x1: " << cor1.x << endl << "y1: " << cor1.y << endl;
		cout << "x2: " << cor2.x << endl << "y2: " << cor2.y << endl;

		int itog, r; Point cor3;
		cout << "??????? ??????????: " << endl;
		cin >> cor3.x >> cor3.y;
		cout << "??????? ?????? ?????: " << endl;
		cin >> r;
		itog = sqrt(cor3.x*cor3.x + cor3.y*cor3.y);
		if (itog <= r)
		{
			cout << "????? ??????????? ?????)";
		}
		else
		{
			cout << "????? ?? ??????????? ?????(";
		}
		cout << endl;

		Point c1, c2;

		cout << "??????? ??????????: " << endl;
		cin >> c1.x >> c1.y;
		cout << "??????? ??????????: " << endl;
		cin >> c2.x >> c2.y;

		Point result;

		result.x = (c1.x + c2.x) / 2;
		result.y = (c1.y + c2.y) / 2;
		cout << "???????? ????? ??????? ????????? ?? ??????????: " << result.x << " " << result.y << endl << endl;
	}
	{
		cout << "Task 2: \n";

		Circle a = { GetRandomValue(1,10),{ GetRandomValue(1,10), GetRandomValue(1,10) } };

		Circle b;

		cout << "???????: \n";
		cin >> b.radius >> b.center.x >> b.center.y;

		cout << a.radius << " " << a.center.x << " " << a.center.y << endl;
		cout << b.radius << " " << b.center.x << " " << b.center.y << endl;

		int len;
		len = sqrt((a.center.x + b.center.x)*(a.center.x + b.center.x) + (a.center.y + b.center.y)*(a.center.y + b.center.y));
		if (len <= a.radius + b.radius)
		{
			cout << "??? ????????????";
		}
		else
		{
			cout << "??? ?? ????????????";
		}
		cout << endl << endl;
	}
	{
		cout << "Task 3: \n";

		Triangle thr = { cyan,{ 1, 2, 3 } };
		cout << thr.colour << " " << thr.mas[0] << " " << thr.mas[1] << " " << thr.mas[2] << endl;

		int ciferka;
		cin >> ciferka;
		switch (ciferka)
		{
		case red: cout << "red"; break;
		case orange: cout << "orange"; break;
		case yellow: cout << "yellow"; break;
		case green: cout << "green"; break;
		case cyan: cout << "cyan"; break;
		case blue: cout << "blue"; break;
		case magneta: cout << "magneta"; break;
		default: cout << "?????? ????? ??? ? ??????!"; break;
		}
		cout << endl;
		cout << "???????? ?????????? ????????????: " << thr.mas[0] + thr.mas[1] + thr.mas[2] << endl << endl;
	}
	{
		cout << "Task 4: \n";

		Point mas[20], itog1;
		int min(101);
		for (int i(0); i < 20; i++)
		{
			mas[i].x = GetRandomValue(0, 100);
			mas[i].y = GetRandomValue(0, 100);

			if (mas[i].x < min)
			{
				min = mas[i].x;
				itog1.x = mas[i].x;
				itog1.y = mas[i].y;
			}
		}
		int len, Min(10001), itog_len;
		Point itog2, itog3;
		for (int i(0); i < 20; i++)
		{
			for (int j(0); j < 20; j++)
			{
				len = sqrt((mas[i].x + mas[j].x)*(mas[i].x + mas[j].x) +
					(mas[i].y + mas[j].y)*(mas[i].y + mas[j].y));
				if (j != i)
				{
					if (len == 1 || len == 0)
					{
						itog2 = mas[i];
						itog3 = mas[j];;
						itog_len = len;
						break;
					}
					else if (len < Min)
					{
						itog2 = mas[i];
						itog3 = mas[j];;
						itog_len = len;
					}
				}
			}
		}

		cout << "?????????? ????? ? ??????????? X: " << itog1.x << " " << itog1.y << endl;
		cout << "?????????? ?????, ????? ???????? ?????????? ??????????:" << endl;
		cout << "????? 1:" << endl << itog2.x << " " << itog2.y << endl;
		cout << "????? 2:" << endl << itog3.x << " " << itog3.y << endl;
		cout << "?????????? ????? ????: " << itog_len << endl << endl;
	}
	{
		cout << "Task 5: \n";

		Triangle mas[100];
		int Sum(0), mas_col[7]{};
		for (int i(0); i < 100; i++)
		{
			int condition(0);
			while (condition == 0)
			{
				mas[i].mas[0] = GetRandomValue(1, 10);
				mas[i].mas[1] = GetRandomValue(1, 10);
				mas[i].mas[2] = GetRandomValue(1, 10);
				if (mas[i].mas[0] + mas[i].mas[1] > mas[i].mas[2]
					&& mas[i].mas[0] + mas[i].mas[2] > mas[i].mas[1]
					&& mas[i].mas[1] + mas[i].mas[2] > mas[i].mas[0])
				{
					condition = 2;
				}
			}
			int col;
			col = GetRandomValue(1, 7);
			switch (col)
			{
			case 1:	mas[i].colour = red, mas_col[0]++;
				break;
			case 2:	mas[i].colour = orange, mas_col[1]++;
				break;
			case 3:	mas[i].colour = yellow, mas_col[2]++;
				break;
			case 4:	mas[i].colour = green, mas_col[3]++;
				break;
			case 5:	mas[i].colour = cyan, mas_col[4]++;
				break;
			case 6:	mas[i].colour = blue, mas_col[5]++;
				break;
			case 7:	mas[i].colour = magneta, mas_col[6]++;
				break;
			}
		}
		int n(0), itog(0);
		cin >> n;
		for (int i(0); i < 100; i++)
		{
			if (n < (mas[i].mas[0] + mas[i].mas[1] + mas[i].mas[2]))
			{
				cout << mas[i].mas[0] << " " << mas[i].mas[1] << " " <<
					mas[i].mas[2] << endl;
				itog++;
			}
		}
		if (itog == 0) cout << "????? ????????????? ?? ???? ??????? :( \n";
		cout << "Red: " << mas_col[0] << endl;
		cout << "Orange: " << mas_col[1] << endl;
		cout << "Yellow: " << mas_col[2] << endl;
		cout << "Green: " << mas_col[3] << endl;
		cout << "Cyan: " << mas_col[4] << endl;
		cout << "Blue: " << mas_col[5] << endl;
		cout << "Magneta: " << mas_col[6] << endl << endl;
	}
	{
		cout << "Task 6: \n";

		Data data;
		cout << "??????? ????? ???? ? ??????? (???? ????? ???) ????? enter ??? ??????\n";
		cin >> data.day;
		cin >> data.month;
		cin >> data.year;
		if (data.month < 13 && data.month > 0)
		{
			if (data.month == 2)
			{
				bool IsLeapYear = (data.year % 400 == 0) || (data.year % 100 != 0) && (data.year % 4 == 0);
				if (IsLeapYear)
				{
					if (data.day > 29)
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
					if (data.day > 28)
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
				switch (data.month)
				{
				case 4:
				case 6:
				case 9:
				case 11:
					if (data.day > 30)
					{
						cout << "false";
					}
					else
					{
						cout << "true";
					}
					break;
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (data.day > 31)
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
	cin.get(); cin.get();
}