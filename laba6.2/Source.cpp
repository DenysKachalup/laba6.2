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

int SumaPar(int c[],const int size )
{
	    int s=0;
		for (int i = 0; i <= size; i++)
		{
			if (c[i] % 2 == 0)
				s += c[i];
			
		}

		return s;
	
}
int number(int c[], const int size)
{
	int s = 0;
	for (int i = 0; i <= size; i++)
	{
		if (c[i] % 2 == 0)
			s++;
	
		
	}
	return s;
	
}
 double arif( const double t, const double r)
{
	 double b = t/r;
	 return b;
}

int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	
	cout << "Введіть кількість елементів масиву: ";
	int n; cin >> n;
	int *c = new int [n];
	

	Creat(c, n);
	cout << endl;

	int t =SumaPar(c, n-1);
	cout << "Сума парних чисел: " << SumaPar(c, n - 1) << endl;
	cout << endl;

	int r =number(c, n-1);
	cout << "Кількість парних чисел: " << r << endl;
	cout << endl;

	arif(t, r);
	cout << "Середнє арифметичне: " << arif(t, r);

	delete[] c;
	return 0;
}