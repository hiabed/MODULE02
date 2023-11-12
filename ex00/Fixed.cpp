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
    fixed_point = copy_constructor.fixed_point;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    // if (this != &other) // Self-assignment check
    fixed_point = other.fixed_point;
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
<<<<<<< HEAD
    (void)raw;
=======
    fixed_point = raw;
>>>>>>> 5c12158b539d478fe8e60a2f8570279e5ec8c656
}