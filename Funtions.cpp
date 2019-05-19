#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Extention.hpp"

using namespace std;
using namespace ext;

const float PI = 3.1415;

void Task1(int n)
{
	for (int i(1); i <= n; i++)
	{
		cout << i << "^2. " << pow(i, 2) << endl;
	}
}

void Task2(int r, int h)
{
	cout << "Îáúåì çàäàííîãî âàìè öèëèíäðà: " << pow(r, 2) * h * PI;
}

float min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

void min4(int a, int b, int c, int d)
{
	cout << min(min(a, b), min(c, d));
}

int main()
{
	setlocale(0, "");
	{
		cout << "Task 1:\n";
		int n;
		cout << "Ââåäèòå ÷èñëî: ";
		cin >> n;
		Task1(n);
		cout << endl;
	}
	{
		cout << "Task 2:\n";
		int r, h;
		cout << "Ââåäèòå ðàäèóñ: ";
		cin >> r;
		cout << "Ââåäèòå âûñîòó: ";
		cin >> h;
		Task2(r, h);
		cout << endl << endl;
	}
	{
		cout << "Task 3:\n";
		int a, b, c, d;
		cout << "Ââåäèòå 4 ÷èñëà: \n";
		cin >> a >> b >> c >> d;
		cout << "Ìèíèìóì èç ÷åòûðåõ: ";
		min4(a, b, c, d);
		cout << endl << endl;
	}
	{
		cout << "Task 4:\n";
	}
	cin.get(); cin.get();
}
