#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Entre ton nom: "; // écrit sur la sortie std

    // char name[20] = ""; // aloue un tableau de char nommé name de taille 20
    // std::cin >> std::setw(20) >> name;

    std::string name;
    std::cin >> name;
    std::cout << "Bonjour " << name << " !" << std::endl;     // affiche un msg sur stdout

    return 0;
}
