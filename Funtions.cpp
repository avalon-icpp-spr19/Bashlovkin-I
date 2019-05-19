#include <iostream>
#include "Extention.hpp"

using namespace std;
using namespace ext;

int main()
{
	setlocale(0, "");
	{
		cout << "Çàäàíèå 1: " << endl;

		int val = 10;
		cout << &val << endl;

		int * valPtr = &val;

		cout << valPtr << endl;

		unsigned int a = 5U;
		double b = 0.8;
		const float f = 0.5F;
		const long long ll = 123LL;

		unsigned int * aPtr = &a;
		double * bPtr = &b;
		const float * fPtr = &f;
		const long long * llPtr = &ll;

		cout << sizeof(*aPtr) << endl;
		cout << sizeof(*bPtr) << endl;
		cout << sizeof(*fPtr) << endl;
		cout << sizeof(*llPtr) << endl;

		*aPtr += 1;
		*bPtr = 0.25;
		cout << *fPtr * 2 << endl;
		cout << *llPtr % 10 << endl << endl;
	}
	{
		cout << "Çàäàíèå 2: " << endl;

		{
			int t[4] = { 8,4,2,1 };                // t[4] = { 8,4,2,1 }
			int * p1 = t + 2, *p2 = p1 - 1;        // *p1 = 2; *p2 = 4
			p1++;								   // p1 = 3
			cout << *p1 - t[p1 - p2] << endl;	   // -1
		}

		int data[] = { 1,2,3,4,5 };
		int * dataPtr = data;

		for (int i(0); i < 5; i++)
		{
			cout << *(dataPtr + i) << endl;
		}

		int sum(0);
		for (int i(0); i < 5; i++)
		{
			*(dataPtr + i) *= 2;
			sum += *(dataPtr + i);
		}
		cout << sum << endl << endl;
	}
	{
		cout << "Çàäàíèå 3: " << endl;

		int mas[20];
		for (int i(0); i < 20; i++)
		{
			mas[i] = GetRandomValue(-100, 100);
		}

		int * masPtr = mas;

		for (int i(0); i < 20; i++)
		{
			cout << *(masPtr + i) << endl;
		}

		int * ptr = mas;
		int max(mas[0]), index(0);
		for (int i(1); i < 20; i++)
		{
			if (*(ptr + i) > max)
			{
				max = *(ptr + i);
				index = i;
			}
		}
		cout << "max: " << index << ": " << max << endl << endl;
	}
	{
		cout << "Çàäàíèå 4: " << endl;

		const char data[] = "abcdefghijklmnopqrstuvwxyz";
		cout << "Âàì äàíà ñòðîêà: ";
		cout << data << endl;
		cout << "Ââåäèòå ëþáîé ñèìâîë, à ÿ âûâåäó íîìåð åãî ïîçèöèè, ãäå îí âñòðåòèëñÿ ïåðâûé ðàç: ";
		char a;
		int itog(-1);
		cin >> a;
		const char * dataPtr = data;
		for (int i(0); i < 26; i++)
		{
			if (a == *(dataPtr + i))
			{
				itog = i + 1;
				break;
			}
		}
		cout << itog << endl << endl;
	}
	{
		cout << "Çàäàíèå 5: " << endl;

		short int n(1);
		char line1[256], line2[256];
		cout << "Ââåäèòå ñòðîêó 1: ";
		cin.getline(line1, 256); cout << endl;
		cout << "Ââåäèòå ñòðîêó 2: ";
		cin.getline(line2, 256); cout << endl;

		for (int i(0); i < 256; i++)
		{
			if (line1[i] != line2[i])
			{
				n = 0; break;
			}
		}
		cout << n;
	}
	cin.get(); cin.get();
}