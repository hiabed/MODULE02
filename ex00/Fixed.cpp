#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fixed_point = 0;
}

Fixed::Fixed(const Fixed &copy_constructor)
{
    fixed_point = 0;
    std::cout << "Copy constructor called\n";
    *this = copy_constructor;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other) // Self-assignment check
        fixed_point = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}