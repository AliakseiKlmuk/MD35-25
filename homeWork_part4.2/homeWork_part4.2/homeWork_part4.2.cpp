
#include <iostream>
using namespace std;

const int clubs = 0;
const int diamonds = 1;
const int hearts = 3;
const int spiders = 3;
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

struct card
{
    int number;
    int suit;
};

int main()
{
    card temp, chosen, prize;
    int position;
    card card1 = { 7, clubs };
    std::cout << "Card 1: 7 clubs \n" << std::endl;
    card card2 = { jack, hearts };
    std::cout << "Card 2: Jack Hearts \n" << std::endl;
    card card3 = { ace, spiders };
    std::cout << "Card 2: Ace Spiders \n" << std::endl;

    prize = card3;
    std::cout << "Change card positions 1 and 3 \n" << std::endl;
    temp = card3; card3 = card1; card1 = temp;
    std::cout << "Change card positions 2 and 3 \n" << std::endl;
    temp = card3; card3 = card2; card2 = temp;
    std::cout << "Change card positions 1 and 2 \n" << std::endl;
    temp = card2; card2 = card1; card1 = temp;
    std::cout << "What positions card (1,2,3) ice spiders now? \n" << std::endl;
    std::cin >> position;

    switch (position) 
    {
    case 1: chosen = card1; break;
    case 2: chosen = card2; break;
    case 3: chosen = card3; break;
    }

    if (chosen.number == prize.number && chosen.suit == prize.suit)
    {
        std::cout << "Right. You win! \n" << std::endl;
    }
    else
    {
        std::cout << "You loose \n" << std::endl;
    }
    return 0;

}
