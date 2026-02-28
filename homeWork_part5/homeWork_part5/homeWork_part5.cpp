
#include <iostream>
using namespace std;
void repChar(char, int);


int main()
{
    char chin;
    int nin;

    cout << "enter simbol: ";
    cin >> chin;
    cout << "entar count: ";
    cin >> nin;


    repChar(chin, nin);
    cout << "Type data and parameters" << endl;
    repChar(chin, nin);
    cout << "char     - 128 ... 127" << endl
        << "short    - 32.768 ... 32.767" << endl
        << "int      sistem independ" << endl
        << "long     -2.147.483.648 ... 2.147.483.647" << endl;
    repChar(chin, nin);
    return 0;

    std::cout << "Hello World!\n";
}

void repChar(char ch, int n)
{
    for (int i = 0; i < n; ++i)
            cout << ch;
       cout << endl;
}
