
#include <iostream>
#include<string>
#include <algorithm> // Для std::transform
#include <cctype>    // Для tolower


enum class Permission {
    UNKNOW = -1,
    GUEST,
    USER,
    ADMIN
};

void printPermission (Permission people) {

    switch(people) {
    case Permission::GUEST:
        std::cout << "This people guest" << std::endl;
        break;

    case Permission::USER:
        std::cout << "This people user" << std::endl;
        break;

    case Permission::ADMIN:
        std::cout << "This people administrator" << std::endl;
        break;

    default:
        std::cout << "Unknow this people" << std::endl;
        break;
    }

};

Permission selectPeople(std::string people) {

    if (people == "guest") return Permission::GUEST;
    else if (people == "user") return Permission::USER;
    else if (people == "admin") return Permission::ADMIN;
    else return Permission::UNKNOW;

};


int main()
{
    std::cout << "Enter permission (guest, user, admin):" << std::endl;

    std::string people;
    std::cin >> people;

    std::transform(people.begin(), people.end(), people.begin(), ::tolower);



    Permission securiti = selectPeople(people);

    //std::cout << people << std::endl;
    printPermission(securiti);

}
