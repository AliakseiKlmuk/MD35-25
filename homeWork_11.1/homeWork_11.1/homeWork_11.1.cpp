
#include <iostream>

#include "UserDB.h"

int main()
{
    std::cout << "Hello World!\n";

    UserDB userDB;
    User user{};

    std::vector <User> _users;

    user.id = "0300-30";
    user.name = "Aliaksei";
    user.email = "Lechiy@tut.by";

    userDB.addUser(user);
    userDB.print();

    //auto begin_it = _users.begin();

    auto lenght = _users.end() - _users.begin();

    std::cout << lenght << std::endl;

    

}
