#include<iostream>
#include<conio.h> 
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define SHOOTER
//#define FACTORIAL
//#define TABLE
//#define TABLE_2
//#define POWER
//#define FIBONACCI
//#define FIBONACCI_1
#define SIMPLE_NUMBER

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef SHOOTER
	std::cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();
		if (key == 119)
		{
			cout << "вперед" << endl;
		}
		else if (key == 115)
		{
			cout << "назад" << endl;
		}
		else if (key == 97)
		{
			cout << "влево" << endl;
		}
		else if (key == 100)
		{
			cout << "вправо" << endl;
		}
		else if (key == 32)
		{
			cout << "прыжок" << endl;
		}
		else if(key==13)
		{ 
			cout << "огонь" << endl;
		}
		else if (key != 119, 115, 97, 100, 32, 13)
		{
			cout << "Error" << endl;
		}
	} while (key != 27);
#endif SHOOTER

#ifdef FACTORIAL

	std::cout << "ФАКТОРИАЛ" << endl;
	 
	int Number;
	cout << "Введите число:" << endl; cin >> Number;
	double Factorial = 1;
	if (Number < 0)
	{
		cout << "Некорректное введение числа. Ошибка! Факториал отрицательного числа не существует" << endl;
	}
	else
	{
		for (int i = 1; i <= Number; i++)
		{
			Factorial = Factorial * i;
		}
		cout << "Факториал:" << Factorial;
	}
#endif FACTORIAL

#ifdef POWER

	std::cout << "СТЕПЕНЬ" << endl;

	double NumbeR;
	cout << "Введите число:" << endl; cin >> NumbeR;
	double power; 
	cout << "Введите степень:" << endl; cin >> power;
	long result = 1;
	float Result = 1;
		if (power < 0)
	{
		NumbeR = 1 / NumbeR;
		power = -power;
		for (int i = 1; i <= power; i++)
		{
			Result *= NumbeR;
		}
		cout << "Результат вычисления:"<< Result << endl;
	}
	else if (power > 0)
	{
		for(int i=1; i<=power;i++)
			{
				result*=NumbeR;
			}
		cout <<"Результат вычисления:"<< result << endl;
	}

#endif POWER

#ifdef TABLE

		std:: cout << "ТАБЛИЦА ASCII" << endl;

		char Key;
		Key = _getch();
		for (int i = 0; i <= 256; i++)
		{
			if (i % 16 == 0)
			{
			  cout<<endl;
			}
			cout << (char)i << " ";
		}
		cout << endl;

#endif TABLE

#ifdef TABLE_2
		cout << "таблица символов ASCII" << endl;
		for (int i = 0; i <= 256; i++)
		{
			cout << (char)i << " ";
		}
#endif TABLE_2

#ifdef FIBONACCI
		std::cout << "Фибоначчи" << endl;

		int NumBER;
		cout << "Введите число:"; cin >> NumBER;
		for (int a = 0, b = 1, c = a + b; a <= NumBER; a = b, b = c, c = a + b)
		{
			cout << a << "\t";
		}
		cout << endl;

#endif FIBONACCI

#ifdef FIBONACCI_1
		std::cout << "Фибоначчи. Выведение заданного количества чисел" << endl;
		int NUMBer;
		cout << "Введите заданное чило числе в последовательности:" << endl; cin >> NUMBer;
		for (int i=0, a = 0, b = 1, c = a + b; i < NUMBer; a = b, b = c, c = a + b, i++)
		{
			cout << a << "\t";
		}
		cout << endl;

#endif 

#ifdef SIMPLE_NUMBER

		int n;
		cout << "Введите предельное число:"; cin >> n;
		for (int i = 0; i <= n; i++)
		{
			bool simple = true;
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					simple = false;
					break;
				}
			}
			if (simple)cout << i << "\t";
		}
		cout << endl;

#endif


}




