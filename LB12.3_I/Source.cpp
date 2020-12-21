#include <iostream>
#include <Windows.h>

using namespace std;

typedef int Info;
struct Elem
{
    Elem* next,
        * prev;
    Info info;
};

void Enqueue(Elem*& first, Elem*& last, Info value);
void Print(Elem* L);
int Process(Elem* L);


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Elem* first = NULL,
        * last = NULL;

    bool result;

    Info value, N,L;

    do
    {
        cout << "¬вед≥ть к≥льк≥сть елемент≥в списку: "; cin >> N;
    } while (N < 0);

    for (int i = 0; i < N; i++)
    {
        cout << "¬вед≥ть дан≥: "; cin >> value;
        Enqueue(first, last, value);
    }

    cout << "≈лементи черги: "; Print(first); cout << endl;

    cout << "\n–езультат: ";cout << Process(first);

    return 0;
}
void Enqueue(Elem*& first, Elem*& last, Info value)
{
    Elem* tmp = new Elem;
    tmp->info = value;
    tmp->next = NULL;
    if (last != NULL)
        last->next = tmp;
    tmp->prev = last;
    last = tmp;
    if (first == NULL)
        first = tmp;
}
void Print(Elem* L)
{
    while (L != NULL)
    {
        cout << L->info << " ";
        L = L->next;
    }
}

int Process(Elem* L )
{
    Info curent{},
        next;
    int sum = 0;
  
        if (L->info % 2 == 0)
            sum += curent;
 
    curent = L->info;
    L = L->next;
    next = L->info;
    return curent;
}
