
#include <iostream>
using namespace std;

enum itsaWord { NO, YES };

int main()
{
    itsaWord isWord = NO;
    char ch = 'a';
    int wordcount = 0;
    std::cout << "Enter sentances: " << std::endl;

    while(true) {
        ch = std::cin.get();
        if (ch == ' ' || ch == '\n')
        {
            if (isWord == YES)
            {
                wordcount++;
                isWord = NO;
            }
            if (ch == '\n') break;
        }
        else
        {
            if (isWord == NO)
            {
                isWord = YES;
            }
        }
    }
    std::cout << "Word count: " << wordcount << std::endl;
}
