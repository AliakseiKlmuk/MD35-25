
#include <iostream>
#include "Tools.h"

int main()
{
    int valueFirstGamerOld = first_gamer();
    int valueSecondGamerOld = second_gamer();

    int summ{ 0 };
    int step{ 0 };

    while (true) {

        int valueFirstGamerNew = first_gamer();
        int valueSecondGamerNew = second_gamer();

        if (step % 2 == 0) {     //выбор хода игрока (проверка на четность)

            while (checkDifferentSigns(valueFirstGamerOld, valueFirstGamerNew)) {  //перебираем числа пока не поменяеться знак
                valueFirstGamerNew = first_gamer();
            }

            /*if (checkDifferentSigns(valueFirstGamerOld, valueFirstGamerNew)) {   //меняем знак числа
                valueFirstGamerNew = valueFirstGamerNew * -1;
            }*/

            valueFirstGamerOld = valueFirstGamerNew;
            summ += valueFirstGamerOld;

            if (summ >= 50) {      //оканчиваем игру при достижения значения общего счетчика 
                std::cout << "The first player won!" << std::endl;
                break;
            }
        }

        else {
            while (checkDifferentSigns(valueSecondGamerOld, valueSecondGamerNew)) {  //перебираем числа пока не поменяеться знак
                valueSecondGamerNew = second_gamer();
            }

            /*if (checkDifferentSigns(valueSecondGamerOld, valueSecondGamerNew)) {   //меняем знак числа
                 valueSecondGamerNew = valueSecondGamerNew * -1;
            }*/

            valueSecondGamerOld = valueSecondGamerNew;
            summ += valueSecondGamerOld;

            if (summ >= 50) {  //оканчиваем игру при достижения значения общего счетчика
                std::cout << "The second player won!" << std::endl;
                break;
            }
        }

        if (step == 100) {     //оканчиваем игру при достижении числа ходов
            std::cout << "The game ended in a draw!" << std::endl;
            break;
        }

        std::cout << "step: " << step << " first: "
            << valueFirstGamerOld << " second : " << valueSecondGamerOld
            << " summ : " << summ << std::endl;
        step += 1;
    }
}
