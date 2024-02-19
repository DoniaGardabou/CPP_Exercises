#pragma one

#include <iostream>
#include <string>

class Person
{
private:
    std::string _first_name;
    std::string _surname;

public:
    Person(std::string first_name, std::string surname);

    std::string get_name();
    std::string get_surname();
};