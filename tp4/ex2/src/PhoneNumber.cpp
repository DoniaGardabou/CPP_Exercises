#include "PhoneNumber.hpp"

PhoneNumber::PhoneNumber(int a, int b, int c, int d, int e)
    : _numbers { a, b, c, d, e }
{}
bool PhoneNumber::is_valid() const
{
    for (auto number : _numbers)
    {
        if (number < 0 || number > 99)
        {
            return false;
        }
    }
    return true;
}

int PhoneNumber::operator[](int index) const
{
    return (index < 0 || index > _numbers.size() - 1) ? -1 : _numbers[index];
}

std::ostream& operator<<(std::ostream& stream, PhoneNumber phone)
{
    for (auto nb : phone._numbers)
    {
        stream << nb;
    }
    return stream;
}

// const x& foo() const {}

/* test 25: const int& operator[](int i) {
                return vec[i];
}
donc on pourra faire X[i] = 42 ; cette ligne on fait une affectatoin au vecteur X */
