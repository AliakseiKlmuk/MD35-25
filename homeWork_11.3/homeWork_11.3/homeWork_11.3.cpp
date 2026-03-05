#include <iostream>
#include <cstring>

class strCount
{
    friend class String;
public:
    strCount(const char* s) {
        int length = strlen(s);
        str = new char[length + 1];
        strcpy_s(str, length + 1, s);
        count = 1;
    }

    ~strCount() {
        delete[] str;
    }

private:
    int count;
    char* str;
};

class String
{
public:
    String() {
        psc = new strCount(nullptr);
    }

    String(const char* s) {
        psc = new strCount(s);
    }

    String(String& other) {
        psc = other.psc;
        (psc->count)++;
    }

    ~String() {
        if (psc->count == 1) {
            delete psc;
        }
        else {
            (psc->count)--;
        }
    }

    void display() {
        std::cout << psc->str;
        std::cout << "(adr psc= " << psc << ")";
    }

    void operator = (String& S) {
        if (psc->count == 1) {
            delete psc;
        }
        else { (psc->count)--; }
        psc = S.psc;
        (psc->count)++;
    }

private:
    strCount* psc;
};

int main()
{
    String s3 = "She was more like a beauty quee, From a movie scene.";
    std::cout << "\ns3 = "; s3.display();

    String s1 = s3;
    std::cout << "\ns1 = "; s1.display();

    String s2(s3);
    std::cout << "\ns2 = "; s2.display();


    std::cout << "Hello World!\n";
}

