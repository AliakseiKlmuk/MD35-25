#include <iostream>
//#include<string>

enum class operations {
    UNKNOW = -1,
    PLUS,
    MINUS,
    DEVORSE,
    MULTIPLY
};

int calculate(int operand1, int operand2, operations op) {
    
    switch (op) {
    case operations::PLUS: return operand1 + operand2;
    case operations::MINUS: return operand1 - operand2;
    case operations::MULTIPLY: return operand1 * operand2;
    case operations::DEVORSE:
        if (operand2 != 0) { return operand1 / operand2; }
        else { std::cout << "defound operations" << std::endl;
            return 0; }
    default: 
        std::cout << "unknow operations" << std::endl;
        return 0;
    }
};

void typeOperations() {
     
}

int main()
{
    operations op;
    int x;
    int y;
    int typeOperations;
    
    std::cout << "enter first operator" << std::endl;
    std::cin >> x;

    std::cout << "enter second operator" << std::endl;
    std::cin >> y;

    while (true) {

        std::cout << "enter operations 0 Plus, 1 Minus, 2 Multiply, 3 Devorces" << std::endl;
        std::cin >> typeOperations;

        if (typeOperations > 3 || typeOperations < 0) {
            std::cout << "Invalid operations" << std::endl;
            continue;
        }

        switch (typeOperations) {
        case 0:
            op = operations::PLUS;
            break;
        case 1:
            op = operations::MINUS;
            break;
        case 2:
            op = operations::MULTIPLY;
            break;
        case 3:
            op = operations::DEVORSE;
            break;
        default:
            op = operations::UNKNOW;
            break;
        };
        
        auto result = calculate(x, y, op);
        std::cout << result << std::endl;
        break;
    }
}
