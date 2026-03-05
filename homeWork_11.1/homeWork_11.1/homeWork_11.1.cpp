
#include <iostream>

#include "UserDB.h"

int main()
{
    std::cout << "Hello World!\n";

    UserDB userDB;
    User user{};

    user.id = "0300-30";
    user.name = "Aliaksei";
    user.email = "Lechiy@tut.by";

    userDB.addUser(user);
    userDB.print();


    

}
