#include<iostream>
#include<ctime>
#include<Windows.h>
using namespace std;
void Creat(int c[], const int size)
{
	int b;
	cout << "Масив: ";
	for (int i = 0; i < size; i++)
	{

		b = false;
		b = (-36) + rand() % (25 - (-36) + 1);
		
		if (b < 0)
		{
			if (b % 2 == 0)
			{
				while (b % 2 == 0)
				{
					b = (-36) + rand() % (25 - (-36) + 1);

				}
				c[i] = b;
			}
			else
				c[i] = b;
		}
		else
			c[i] = b;

		cout << " " << c[i];

	}
}
//int Sum(int c[], const int size)
//{
//
//	if (size < 0)
//		return 0;
//	else
//		return c[size] + Sum(c, size - 1);
//
//}

int SumaNepar(int c[],const int size )
{
	    int s=0;
		for (int i = 0; i <= size; i++)
		{
			if (c[i] % 2 != 0)
				s += c[i];
			else
				s += 0;
			
		}

		return s;
	
}

int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int n = 27;

	int c[n];
	int b;

	Creat(c, n);
	cout << endl;
	SumaNepar(c, n);
	//Sum(c, n - 1);
	//cout << "Сума: " << Sum(c, n - 1) << endl;
	
	cout << endl;
	cout << "Сума непарних " << SumaNepar(c, n-1);
	cout << endl;
	return 0;
}