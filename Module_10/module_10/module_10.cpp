
#include <iostream>
#include <vector>

int findMax(const int* arr, std::vector<int>& position, int size)
{
    if (size <= 0) {
        position.clear();
        return -1;
    }

    int value{ arr[0] };
    position.clear();
    position.push_back(0);

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > value)
        {
            value = arr[i];
            position.clear();
            position.push_back(i);
        } else if (arr[i] == value)
        {
            position.push_back(i);
        }
    }
    return value;
}

void swap(int* a, int* b)
{
    int value;

    value = *b;
    *b = *a;
    *a = value;
}

double arithmeticMean(std::vector<double>& average, int size)
{
    double summ = 0.0;
    for (int i = 0; i < size; ++i)
    {
        summ += average[i];
    }
    std::cout << std::endl;

    double result = static_cast<double>(summ) / size;

    return result;
}

int main()
{
    int N{ 0 }, countFir{ 0 };
    std::cout << "Enter the size of the array: ";
    std::cin >> N;
    std::cout << std::endl;

    std::vector<int> position(N);
        
    int* arr{ new int[N] };

    while (true)
    {
        if (countFir < N)
        {
            std::cout << "Enter value " << countFir << " position: ";
            std::cin >> arr[countFir];
            std::cout << std::endl;
            countFir++;
        }
        else {
            std::cout << "Array is full" << std::endl;
            break;
        }
        
    }
         
    for (int i = 0; i < N; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int maxVal = findMax(arr, position, N);

    std::cout << "Maximum value: " << maxVal << std::endl;
    std::cout << "Maximum value position: ";
    
    for (int pos : position) 
    {
        std::cout << pos << " ";
    }
    std::cout << std::endl;

    int num_first, num_second;

    std::cout << "Enter first position for change :";
    std::cin >> num_first;
    std::cout << "Enter second position for change :";
    std::cin >> num_second;

    swap(&arr[num_first], &arr[num_second]);

    int value1 = arr[num_first];
    int value2 = arr[num_second];

    for (int i = 0; i < N; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    int countSec{ 0 };
    std::cout << "Enter array average: ";
    std::cin >> countSec;
        
    int value = 0, number = 0;
    std::vector<int> average(countSec);
    
    while (value < countSec)
    {
        std::cout << "Enter value " << value << " position (0 to stop): ";
        std::cin >> number;
        std::cout << std::endl;

        if (number == 0) break;

        average[value] = number;
        value++;
        
    }
   
   // double mean = arithmeticMean(average, value);
   // std::cout << "Arithmetic Mean: " << mean << std::endl; 

    std::cout << "Hello World!\n";
}

