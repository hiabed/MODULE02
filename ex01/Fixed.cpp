#include "Fixed.hpp"

<<<<<<< HEAD
Fixed::Fixed()
=======
Fixed::Fixed() //default constructor;
>>>>>>> 5c12158b539d478fe8e60a2f8570279e5ec8c656
{
    std::cout << "Default constructor called\n";
    fixed_point = 0;
}

<<<<<<< HEAD
Fixed::Fixed(const int number)
{
    fixed_point = number * 2;
}

Fixed::Fixed(const int fl_point)
{

}

Fixed::Fixed(const Fixed &copy_constructor)
=======
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
>>>>>>> 5c12158b539d478fe8e60a2f8570279e5ec8c656
{
    std::cout << "Copy constructor called\n";
    fixed_point = copy_constructor.fixed_point;
}

<<<<<<< HEAD
Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other) // Self-assignment check
    {
        fixed_point = other.fixed_point;
    }
    return *this;
}

=======
>>>>>>> 5c12158b539d478fe8e60a2f8570279e5ec8c656
Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
<<<<<<< HEAD
    std::cout << "getRawBits member function called\n";
    return 0;
}

void setRawBits(int const raw)
{
    raw;
=======
    // std::cout << "getRawBits member function called\n";
    return fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)fixed_point / (1 << frac_bits));
    // converts the fixed-point value to a floating-point value.
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
    output << i.toFloat();
    return output;
>>>>>>> 5c12158b539d478fe8e60a2f8570279e5ec8c656
}