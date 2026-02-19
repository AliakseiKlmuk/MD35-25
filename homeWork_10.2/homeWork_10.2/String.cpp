#include "String.h"

void String::display() const {
    std::cout << _str << std::endl;
}

void String::upit()
{
    for (int i = 0; _str[i] !='\0'; ++i) 
    {
        _str[i] = std::toupper(_str[i]);
    }
    std::cout << std::endl;
}

void String::displayArray(const char* ch[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << ch[i] << " " << i << std::endl;
    }
}

void String::bsort(const char* ptr[], int n)
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strcmp(ptr[j], ptr[j + 1]) > 0) {
                const char* temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
            }
        }
    }
}

