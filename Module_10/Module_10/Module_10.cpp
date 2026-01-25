#include <iostream>

int main() {


    int N;
    std::cin >> N;

    int summ = 0;
    double result = 0.0;
    int* arr = new int[N];

    for (int i = 0; i < N; ++i) {
        arr[i] = i;
    }

    for (int i = 0; i < N; ++i) {
        summ += arr[i];
    }
    result = static_cast<double>(summ) / N;

    std::cout << result << std::endl;
    delete[] arr;

    //return 0;


    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            std::cout << i << " * " << j << " = " << i * j << " ";
        }
        std::cout << std::endl;
    }
    

}