#include <iostream>
#include <vector>
#include "Person.hpp"

int main()
{
    // Person person("Palluche", "La Faluche");
    // person.first_name = "Palluche";
    // person.surname = "La Faluche";

    // std::cout << "La personne s'appelle " << person.first_name << person.surname << std::endl;
    // std::cout << "La personne s'appelle " << person.get_name() << " " << person.get_surname() << std::endl;

    std::vector<Person> personnes;
    int nb;
    std::string first_name;
    std::string surname;

    std::cout << "Nombre de personnes : ";
    std::cin >> nb;

    for (auto i = 0; i < nb; i++)
    {
        std::cout << "Prenom: ";
        std::cin >> first_name;
        std::cout << "Nom: ";
        std::cin >> surname;

        personnes.emplace_back(Person(first_name, surname));
    }
    std::cout << "Les personnes sont ";
    // for (auto p : personnes)
    // {
    //     std::cout << p.get_name() << " " << p.get_surname() << ",";
    // }

    for (auto i = 0; i < personnes.size() - 1; i++)
    {
        std::cout << personnes[i].get_name() << " " << personnes[i].get_surname() << ", ";
    }
    std::cout << personnes[personnes.size() - 1].get_name() << " " << personnes[personnes.size() - 1].get_surname() << "." << std::endl;
    return 0;
}