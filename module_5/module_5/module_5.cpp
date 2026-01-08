
#include <iostream>
#include<string>
#include <algorithm> // Для std::transform
#include <cctype>    // Для tolower


enum class permissions {
    UNKNOW = -1,
    GUEST,
    USER,
    ADMIN
};

void printPermission (permissions people) {

    switch(people) {
    case permissions::GUEST:
        std::cout << "this people guest" << std::endl;
        break;

    case permissions::USER:
        std::cout << "this people user" << std::endl;
        break;

    case permissions::ADMIN:
        std::cout << "this people administrator" << std::endl;
        break;

    default:
        std::cout << "unknow this people" << std::endl;
        break;
    }

};

permissions selectPeople(std::string people) {

    if ("guest" == people) return permissions::GUEST;
    else if ("user" == people) return permissions::USER;
    else if ("admin" == people) return permissions::ADMIN;
    else return permissions::UNKNOW;

};


int main()
{
    std::cout << "enter permission" << std::endl;

    std::string people;
    std::cin >> people;

    std::transform(people.begin(), people.end(), people.begin(), ::tolower);



    permissions securiti = selectPeople(people);

    //std::cout << people << std::endl;
    printPermission(securiti);

}
