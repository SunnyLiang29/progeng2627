#include <iostream>
#include <string>

int main(){
    std::string Username;
    std::string Usersurname;
    std::cout << "What is your name" << std::endl;
    std::cin >> Username;
    std::cout << "What is your surname" << std::endl;
    std::cin >> Usersurname ;
    std::cout << "Hello,"<< Username << Usersurname << std::endl;
}