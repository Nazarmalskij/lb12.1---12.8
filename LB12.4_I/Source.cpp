#include <iostream>
#include <Windows.h>

using namespace std;

typedef int Info;
struct Elem
{
	Elem* link;
	Info info;
};
typedef int inform;

struct Spusok
{
	Spusok* link1;
	inform inf;
};

void Insert(Elem*& L, Info value);
void Print(Elem* L);
void Process(Spusok*& T,int N);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Elem* L = NULL;

	Spusok* first = NULL;
	Spusok* last = NULL;

	Info value, N;
	Spusok* T = first;

	T = first;

	do
	{
		cout << "Введіть кількість елементів списку: "; cin >> N;
	} while (N < 0);

	for (int i = 0; i < N; i++)
	{
		cout << "Введіть дані: "; cin >> value;
		Insert(L, value);
	}

	cout << "Елементи черги: "; Print(L); cout << endl;



	Process(T,N);
	cout << "Рузультат: "; Print(L);

	return 0;
}
void Insert(Elem*& L, Info value)
{
	Elem* tmp = new Elem;
	tmp->info = value;
	if (L != NULL)
	{
		Elem* T = L;
		while (T->link != L)
			T = T->link;

		T->link = tmp;
	}
	else
		L = tmp;

	tmp->link = L;
}
void Print(Elem* L)
{
	if (L == NULL)
		return;

	Elem* first = L;
	cout << L->info << " ";
	while (L->link != first)
	{
		L = L->link;
		cout << L->info << " ";
	}
}
void Process(Spusok*& T, int N)
{
	inform inf;

	cout << endl;
	cout << "Вивід інформації про модифікований елемент " << endl << endl;
	while (T != NULL)
	{
		inf = T->inf;

		T->inf = inf + N;
		cout << T->inf << "   ";
		T = T->link1;

	}
	cout << endl;
}
