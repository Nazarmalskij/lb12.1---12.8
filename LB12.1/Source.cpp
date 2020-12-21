#include <iostream>

struct Elem
{
    Elem* link1,
        * link2;
    int info;
};

Elem* p;

void Create();
void Delete();

int main()
{

    Create();
    Delete();

    return 0;
}

void Create()
{
    p = new Elem;                          //1     
    p->info = 1;                           //2
    p->link1 = NULL;                       //3
    p->link2 = new Elem;                   //4
    p->info = 2;                           //5
    p->link2->link1 = p->link1;            //6
    p->link2->link2 = new Elem;            //7
    p->link2->link2->info = 3;             //8
    p->link2->link2->link1 = p->link2;     //9
    p->link2->link2->link2 = new Elem;     //10
    p->link2->link2->link2->info = 4;      //11
    p->link2->link2->link2->link1 = p;     //12
    p->link2->link2->link2->link2 = NULL;  //13
  
}
void Delete()
{
    delete p->link2->link2->link2;         //14 видалення четвертого елемента 
    delete p->link2->link2;                //15 видалення третього елемента 
    delete p->link2;                       //16 видалення другого елемента 
    delete p;                              //17 видалення першого елемента
}