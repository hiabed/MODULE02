#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fixed_point = 0;
}

Fixed::Fixed(const int number)
{
    fixed_point = number * 2;
}

Fixed::Fixed(const int fl_point)
{

}

Fixed::Fixed(const Fixed &copy_constructor)
{
    std::cout << "Copy constructor called\n";
    fixed_point = copy_constructor.fixed_point;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other) // Self-assignment check
    {
        fixed_point = other.fixed_point;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return 0;
}

void setRawBits(int const raw)
{
    raw;
}