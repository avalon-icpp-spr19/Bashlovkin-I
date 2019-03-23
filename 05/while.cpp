#include <iostream>
#include <iomanip>
#include <string>
#include <fstream> 
using namespace std;

int main()
{
	int N, min, max;
	cin >> N;
	min = N;
	max = N;
	while (true)
	{
		cin >> N;
		if (N == 0) break;
		if (N < min) min = N;
		if (N > max) max = N;
	}
	cout << min << max << endl << endl;

	int a;
	cin >> N;
	max = N;
	while (true)
	{
		cin >> N;
		if (N == 0) break;
		if (N == max) a += 1;
		if (N > max)
		{
			max = N;
			a = 1;
		}
	}
	cout << a << endl << endl;

	int n, b(0);
	cin >> n;
	while (true)
	{
		if (n == 0) break;
		b = (b * 10) + (n % 10);
		n = n - (n % 10);
		n /= 10;
	}
	cout << b << endl << endl;

	int k(1), x;
	cin >> x;
	while (true)
	{
		if (k > x) break;
		k *= 2;
	}
	cout << k << endl << endl;

	int n, Fib, f1(0), f2(1), a(1);
	cin >> n;
	switch (n)
	{
	case 0: Fib = 0;
		break;
	case 1: Fib = 1;
		break;
	default:
		while (a < n)
		{
			Fib = f1 + f2;
			f1 = f2;
			f2 = Fib;
			a++;
		}
		break;
	}
	cout<< n << ": " << Fib;
	cin.get();cin.get();
}
