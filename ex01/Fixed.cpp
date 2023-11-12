#include "Fixed.hpp"

Fixed::Fixed() //default constructor;
{
    std::cout << "Default constructor called\n";
    fixed_point = 0;
}

Fixed::Fixed(const int nb) //constructor parametrized with int;
{
    std::cout << "Int constructor called\n";
    fixed_point = nb << frac_bits;
    // (int) converts it to the corresponding fixed-point value.
}

Fixed::Fixed(const float nb) //constructor parametrized with float;
{
    
    fixed_point = (roundf(nb * (1 << frac_bits)));
    // (float) converts it to the corresponding fixed-point value.
}

Fixed::Fixed(const Fixed &copy_constructor) // copy constructor;
{
    std::cout << "Copy constructor called\n";
    fixed_point = copy_constructor.fixed_point;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called\n";
    return fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}

float Fixed::toFloat( void ) const
{
    // converts the fixed-point value to a floating-point value.
    return 1;
}

int Fixed::toInt( void ) const
{
    int to_int = fixed_point >> frac_bits;
    return to_int;
}

Fixed& Fixed::operator=(const Fixed &other) //copy assignement;
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other) // Self-assignment check
    {
        fixed_point = other.fixed_point;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &output, Fixed const &i)
{
    output << i.getRawBits();
    return output;
}