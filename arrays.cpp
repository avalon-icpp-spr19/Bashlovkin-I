#include <iostream>
#include <iomanip>
#include <random>
#include "Extention.hpp"

using namespace std; // aasd
using namespace ext;
const int SIZE(10);

int main()
{
	setlocale(0, "");
	{
		cout << "Çàäàíèå 1\n\n";
		int a[10];

		const float b[20]{};

		char c[2];

		int data[6] = { 2, 4, 8, 16, 32, 64 };
		cout << "Ðàçìåð ìàññèâà data[6]: " << sizeof(data) << endl;
		cout << "Îí õðàíèò äàííûå òèïà int\n";
		cout << "Ýëåìåíò ìàññèâà ñ èíäåêñîì 0 ðàâåí: " << data[0] << endl;
		cout << "Ýëåìåíò ìàññèâà ñ èíäåêñîì 3 ðàâåí: " << data[3] << endl;
		for (int i(0); i < 6; i++)
		{
			if (data[i] == 8)
			{
				cout << "Èíäåêñ ó ýëåìåíòà 8: " << i << endl;
			}
			if (data[i] == 32)
			{
				cout << "Èíäåêñ ó ýëåìåíòà 32: " << i << endl;
			}
		}

		data[0] = 1;

		data[6] *= 3;

		for (int i(0); i < 6; i++)
		{
			cout << data[i] << " ";
		}
		cout << endl;

		int d[5] = { 1,2,3,4,5 };
		for (int i(0); i < 5; i++)
		{
			cout << d[i] << " ";
		}
		cout << endl;
		//Íåëüçÿ îáúÿâèòü ìàññèâ, íå óêàçàâ åãî ðàçìåð ïðè ñîçäàíèè

		{
			int data[5] = { 1, 2 };
			cout << "Ðàçìåð ìàññèâà data[5]: " << sizeof(data) << endl;
			cout << data[0] << " " << data[1];
			for (int i(0); i < 5; i++)
			{
				cout << data[i] << " ";
			}
			cout << endl;
		}

		const char alpha[3] = { 'a', 'b', 'c' };
		cout << "Ðàçìåð ìàññèâà alpha: " << sizeof(alpha) << endl;
		cout << "Ýëåìåíò ìàññèâà alpha ñ èíäåêñîì 0: " << alpha[0] << endl;
		for (int i(0); i < 3; i++)
		{
			if (alpha[i] == 'c')
			{
				cout << "Èíäåêñ ýëåìåíòà 'c': " << i << endl;
			}
		}
		// Âîçìîæíû çàïèñè: alpha[0], alpha[3]
		// Íåâîçìîæíû çàïèñè: alpha[1] = 'd', alpha[1] = 'b'
		// Òàê êàê íàø ìàññèâ êîíñòàíòíûé
		cout << "Ýëåìåíòû ìàññèâà alpha: ";
		for (int i(0); i < 3; i++)
		{
			cout << alpha[i] << " ";
		}
		cout << endl << endl;
	}
	{
		cout << "Çàäàíèå 2\n\n";
		int mas[20];
		for (int i(0); i < 20; i++)
		{
			mas[i] = i + 1;
		}
		for (int i(0); i < 20; i++)
		{
			cout << mas[i] << " ";
		}
		cout << endl;
		int a(1);
		for (int i(0); i < 20; i++)
		{
			mas[i] = a;
			a += 2;
		}
		for (int i(0); i < 20; i++)
		{
			cout << mas[i] << " ";
		}
		cout << endl;
		for (int i(0); i < 20; i++)
		{
			mas[i] = 2;
			for (int j(0); j < i; j++)
			{
				mas[i] *= 2;
			}
		}
		for (int i(0); i < 20; i++)
		{
			if (i % 5 == 0)
			{
				cout << endl;
				cout << mas[i] << " ";
			}
			else
			{
				cout << mas[i] << " ";
			}
		}
		cout << endl;
		for (int i(0); i < 20; i++)
		{
			if (i % 2 == 1) mas[i] = 0;
		}
		for (int i(0); i < 20; i++)
		{
			if (i % 5 == 0)
			{
				cout << endl;
				cout << mas[i] << " ";
			}
			else
			{
				cout << mas[i] << " ";
			}
		}
		cout << endl << endl;
	}
	{
		cout << "Çàäàíèå 3\n\n";
		int data[10];
		for (int i = 0; i < 10; ++i)
		{
			data[i] = GetRandomValue(-10, 10);
		}
		for (int i = 0; i < 10; ++i)
		{
			cout << data[i] << " ";
		}
		cout << endl;
		int max(data[0]);
		for (int i = 1; i < 10; ++i)
		{
			if (max < data[i])
			{
				max = data[i];
			}
		}
		for (int i = 0; i < 10; i++)
		{
			if (data[i] == max)
			{
				cout << "max: " << max << endl;
				cout << "index(max)" << i << endl;
				break;
			}
		}
		int mas[100], sum(0), M0(0), R0(0), B0(0);
		for (int i = 0; i < 100; ++i)
		{
			mas[i] = GetRandomValue(-100, 100);
			sum += mas[i];
			if (mas[i] < 0) M0++;
			if (mas[i] == 0) R0++;
			if (mas[i] > 0) B0++;
		}
		cout << "Êîë-âî ýëåìåíòîâ < 0: " << M0 << endl;
		cout << "Êîë-âî ýëåìåíòîâ = 0: " << R0 << endl;
		cout << "Êîë-âî ýëåìåíòîâ > 0: " << B0 << endl;
		cout << "Ñóììà ýëåìåíòîâ ýòîãî ìàññèâà: " << sum << endl << endl;
	}
	{
	cout << "Çàäàíèå 3\n";
	int mas[100], sum1(0), sum2(0), sum, data1[1], data2[1];
	for (int i = 0; i < 100; ++i)
	{
	mas[i] = GetRandomValue(0, 100);
	if (mas[i] % 10 == 2 || (mas[i] - (mas[i] % 10)) / 10 == 2)
	{
	sum1++;
	data1[sum1 - 1] = mas[i];
	cout << data1[sum1 - 1] << " ";
	}
	}
	cout << endl << endl;
	for (int i = 0; i < 100; ++i)
	{
	if ((mas[i] % 10) % 2 != 1 && ((mas[i] - (mas[i] % 10)) / 10) % 2 != 1)
	{
	sum2++;
	data2[sum2 - 1] = mas[i];
	cout << data2[sum2 - 1] << " ";
	}
	}
	cout << endl << endl;
	int itog[1];
	if (sum1 > sum2)
	{
	sum = sum1;
	}
	else
	{
	sum = sum2;
	}
	for (int i(0); i < sum; i++)
	{
	itog[i] = data1[i] + data2[i];
	cout << itog[i] << " ";
	if (i % 10 == 0) cout << endl;
	}
	}
	cin.get(); cin.get();
}