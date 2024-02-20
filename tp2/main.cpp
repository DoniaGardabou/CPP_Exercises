#include "Card.hpp"
#include "Player.hpp"

int main()
{ // q4-6
    const Card c1{8, "Pique"};
    c1.print();

    // Q7-8
    const Card c2{8, "Carreau"};
    std::cout << (c2.operator==(c1)) << std::endl; // -> 1
    const Card c3{10, "Carreau"};
    std::cout << (c2.operator==(c3)) << std::endl; // -> 0

    // Q9
    std::cout << (c1 < c2) << std::endl;          // -> 0
    std::cout << (c1.operator<(c3)) << std::endl; // -> 1
    std::cout << (c3.operator<(c1)) << std::endl; // -> 0
    
    //Q11
    std::cout << c1 << std::endl;

    //Q3 
    Player p("sami");
    // std::cout << p._score << std::endl;
    
    return 0;
}