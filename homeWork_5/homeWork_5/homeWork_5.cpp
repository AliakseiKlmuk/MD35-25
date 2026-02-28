
#include <iostream>

class smallobj
{
private:
    int somedata;
public:
    void setdata(int d)
    {
        somedata = d;
    }
    void showdata()
    {
        std::cout << "Equals data " << somedata << std::endl;
    }
};

class part
{
private:
    int model_number;
    int part_number;
    float coast;

public:
    void setPart(int mn, int pn, float c)
    {
        model_number = mn;
        part_number = pn;
        coast = c;
    }

    void showPart()
    {
        std::cout << "Model: " << model_number;
        std::cout << " Detail: " << part_number;
        std::cout << " Coast: " << coast << std::endl;
    }
};

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0)
    { }

    Distance(int ft, float in) : feet(ft), inches(in)
    { }

    void setDist(int ft, float in)
    {
        feet = ft;
        inches = in;
    }

    void getDist()
    {
        std::cout << "\nEnter count feet: "; std::cin >> feet;
        std::cout << "Enter count inches: "; std::cin >> inches;
    }

    void showDist() const
    {
        std::cout << feet << "\' - " << inches << ' \"';
    }

    Distance add_dist(const Distance&) const;

};

Distance Distance::add_dist(const Distance& d2) const
{
    Distance temp;
    temp.inches = inches + d2.inches;
    if (temp.inches >= 12.0)
    {
        temp.inches -= 12.0;
        temp.feet = 1;
    }
    temp.feet += feet + d2.feet;
    return temp;
}

class Counter
{
private:
    unsigned int count;
public:
    Counter() :count()
    {
        std::cout << "Constructor\n";
    }
    void inc_count()
    {
        count++;
    }
    int get_count()
    {
        return count;
    }
};

enum Suit{clubs, diamonds, hearts, spades};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
{
private:
    int number;
    Suit suit;

public:
    card()
    { }
    card(int n, Suit s) : number (n), suit(s)
    { }

    void display();
    bool isEqual(card);
};

void card::display()
{
    if (number >= 2 && number <= 10)
    {
        std::cout << number;
        
    }
    else
    {
        switch (number)
        {
        case jack:
            std::cout << "Jack";
            break;
        case queen:
            std::cout << "Quine";
            break;
        case king:
            std::cout << "King";
            break;
        case ace:
            std::cout << "Ace";
        }
    }
        switch (suit)
        {
        case clubs:
            std::cout << " Clubs";
            break;
        case diamonds:
            std::cout << " Diamonds";
            break;
        case hearts:
            std::cout << " Hearts";
            break;
        case spades:
            std::cout << " Spades";
            break;
        }
    
}

bool card::isEqual(card c2)
{
    return (number == c2.number && suit == c2.suit) ? true : false;
}

class foo
{
private:
    static int count;
public:
    foo()
    {
        count++;
    }
    int getCount() {
        return count;
    }
};
int foo::count = 0;


int main()
{

    Distance dist1, dist3;
    Distance dist2(11, 6.25);
    dist1.getDist();
    dist3 = dist1.add_dist(dist2);

    std::cout << "\ndist1 = "; dist1.showDist();
    std::cout << "\ndist2 = "; dist2.showDist();
    std::cout << "\ndist3 = "; dist3.showDist();
    std::cout << std::endl;

    return 0;
    foo f1, f2, f3;
    std::cout << "count object: " << f1.getCount() << std::endl;
    std::cout << "count object: " << f2.getCount() << std::endl;
    std::cout << "count object: " << f3.getCount() << std::endl;
    return 0;

    card temp, chosen, prize;
    int position;
    card card1(7, clubs);
    std::cout << "\nCard1: "; card1.display(); std::cout << std::endl;

    card card2(jack, hearts);
    std::cout << "\nCard2: "; card2.display(); std::cout << std::endl;

    card card3(ace, spades);
    std::cout << "\nCard3: "; card3.display(); std::cout << std::endl;

    prize = card3;

    std::cout << "Change position card 1 and 3" << std::endl;
    temp = card3; card3 = card1; card1 = temp;
    std::cout << "Change position card 2 and 3" << std::endl;
    temp = card3; card3 = card2; card2 = temp;
    std::cout << "Change position card 1 and 2"<<std::endl;
    temp = card2; card2 = card1; card1 = temp;

    std::cout << "What position have card2? (1, 2 or 3): ";
    std::cin >> position;
    
    switch (position)
    {
    case 1:
        chosen = card1;
        break;
    case 2:
        chosen = card2;
        break;
    case 3:
        chosen = card3;
        break;
    }
    
    if (chosen.isEqual(prize))
    {
        std::cout << "you win";
    }
    else
    {
        std::cout << "you lose"<< std::endl;
        chosen.display();
        std::cout << std::endl;
    }

    
    
    
    
    
    return 0;
  

    return 0;
    
    Counter c1, c2;
    std::cout << "\nc1= " << c1.get_count();
    std::cout << "\nc2= " << c2.get_count();

    c1.inc_count();
    c2.inc_count();
    c2.inc_count();

    std::cout << "\nc1= " << c1.get_count();
    std::cout << "\nc2= " << c2.get_count();
    std::cout << std::endl;

    return 0;

    /*Distance dist1, dist2;
    dist1.setDist(11, 6.25);
    dist2.getDist();  
    std::cout << "\ndist1 = "; dist1.showDist();
    std::cout << "\ndist2 = "; dist2.showDist();
    std::cout << std::endl;
    return 0;
    part part1;
    part1.setPart(6244, 373, 217.55F);
    part1.showPart();*/


    return 0;
    
    smallobj s1, s2;
    s1.setdata(1066);
    s2.setdata(1776);
    s1.showdata();
    s2.showdata();
    return 0;
    std::cout << "Hello World!\n";
}


