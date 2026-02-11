
#include <iostream>
#include <cstring>

const int MAX = 5;
const int DAYS = 7;

void centimize(double& v)
{
    v *= 2.54;
}
void centimize(double* ptrd)
{
    for (int i = 0; i < MAX; ++i)
    *ptrd++ *= 2.54;
}
void order(int* numb1, int* numb2)
{
    if (*numb1 > *numb2)
    {
        int temp = *numb1;
        *numb1 = *numb2;
        *numb2 = temp;
    }
}
void bsort(int* ptr, int n)
{
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            order(ptr + j, ptr + i);
        }
    }
}
void dispstr(char* ps)
{
    while (*ps)
    {
        std::cout << *ps++ << std::endl;
    }
}
void copystr(char* dest, const char* src)
{
    while (*src)
    {
        *dest++ = *src++;
        *dest = '\0';
    }
}

//class Distance
//{
//public:
//    void getDist()
//    {
//        std::cout << "\nEnter feet: "; std::cin >> _feet;
//        std::cout << "Enter inches: "; std::cin >> _inches;
//    }
//
//    void showDist()
//    {
//        std::cout << _feet << " " << _inches << std::endl;
//    }
//
//private:
//    int _feet;
//    float _inches;
//
//};
//
//class person
//{
//public:
//    person(const char* name) {
//        strcpy(this->_name, name);
//    }
//
//    const char* setName () const
//    {
//        std::cout << "Enter name: ";
//    }
//    void printName()
//    {
//        std::cout << _name << std::endl;
//    }
//
//private:
//    char _name[40];
//};
//
//bool compare(person* p1, person* p2)
//{
//    return strcmp(p1->setName(), p2->setName()) > 0; // Возвращает true, если p1 > p2
//}
//
//void bsort(person** pp, int n)
//{
//    for (int i = 0; i < n - 1; ++i)
//    {
//        for (int j = i + 1; j < n; ++j)
//        {
//            if (compare(pp[i], pp[j])) {
//                order(pp + i, pp + j);
//            }
//        }
//    }
//}
//
//void order(person** pp1, person** pp2)
//{
//    person* tempptr = *pp1;
//    *pp1 = *pp2;
//    *pp2 = tempptr;
//}

struct link
{
    int data;
    link* next;
};
class linklist
{
public:
    linklist() { _first = NULL; }
    void additem(int d);
    void display();

private:
    link* _first;
};
void linklist::additem(int d)
{
    link* newlink = new link;
    newlink->data = d;
    newlink->next = _first;
    _first = newlink;
}
void linklist::display()
{
    link* current = _first;
    while (current)
    {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

int main()
{
    /*person* persPtr[100];
    int n = 0;
    char choice;

    do {
        persPtr[n] = new person;
        persPtr[n]->setName();
        n++;
        std::cout << "Continue enter (y/n)";
        std::cin >> choice;

    } while (choice == 'y');

    std::cout << "don't sort ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << "Person information" << i + 1;
        persPtr[i]->printName();
    }
    std::cout << std::endl;

    bsort(persPtr, n);

    std::cout << "sort ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << "Person information" << i + 1;
        persPtr[i]->printName();
    }
    std::cout << std::endl;

    for (int i = 0; i < n; ++i) {
        delete persPtr[i];
    }

    return 0;*/
    /*linklist li;
    li.additem(25);
    li.additem(36);
    li.additem(49);
    li.additem(64);

    li.display();

    return 0;
    Distance& distan = *(new Distance);
    distan.getDist();
    distan.showDist();

    return 0;
    Distance dist;
    dist.getDist();
    dist.showDist();

    Distance* distptr;
    distptr = new Distance;
    distptr->getDist();
    distptr->showDist();
    std::cout << std::endl;



    return 0;
    const char* arrptrs[DAYS] = {"Monday", "Thusday", "Wensday", "Thousday", "Friday", "Saturday", "Sunday"};

    for (int i = 0; i < DAYS; ++i)
    {
        std::cout << arrptrs[i] << std::endl;
    }

    return 0;
    const char* str1 = "Massive";
    char str2[80];
    copystr(str2, str1);
    std::cout << str2 << std::endl;

    dispstr(str2);




    return 0;*/
    //const int N = 10;
    //int arr[N] = { 37,84, 62,91,11,65,57,28,19,49 };
    //for (int value : arr)
    //{
    //    std::cout << value << " ";
    //}
    //std::cout << std::endl;
    //
    //bsort(arr, N);

    //for (int value : arr)
    //{
    //    std::cout << value << " ";
    //}
    //
    //return 0;
    //int n1 = 99, n2 = 11;
    //int n3 = 22, n4 = 88;
    //std::cout << n1 << " " << n2 << std::endl;
    //order(&n1, &n2);
    //std::cout << n1 << " " << n2 << std::endl;

    //std::cout << n3 << " " << n4 << std::endl;
    //order(&n3, &n4);
    //std::cout << n3 << " " << n4 << std::endl;
    //
    //return 0;
    //double varray[MAX] = { 10.0, 43.1, 95.9, 58.7, 87.3 };

    //centimize(varray);

    //for (int i = 0; i < MAX; ++i)
    //{
    //    std::cout << varray[i] << std::endl;
    //}
    //    
    //return 0;
    //double var = 10.0;
    //std::cout << var << std::endl;

    //centimize(var);
    //std::cout << var << std::endl;

    //centimize(&var);
    //std::cout << var << std::endl;
    //
    //return 0;
    ////int arr[5] = { 31,54,77,52,93 };
    //int* ptrint;
    //ptrint = arr;

    //std::cout << *(ptrint+4) << std::endl;

    //for (int i = 0; i < 5; ++i)
    //{
    //    std::cout << *(ptrint++);
    //}

    //for (int value : arr)
    //{
    //    std::cout << value << std::endl;
    //}

    //return 0;
    //int var1 = 11;
    //int var2 = 22;

    //std::cout << &var1 << std::endl;
    //std::cout << &var2 << std::endl;

    //int* ptr;
    //ptr = &var1;
    //std::cout << ptr << std::endl;

    ////ptr = &var2;
    //std::cout << *ptr << std::endl;

    //std::cout << "Hello World!\n";
}
