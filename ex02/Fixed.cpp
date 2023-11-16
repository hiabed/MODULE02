#include "Fixed.hpp"

Fixed::Fixed() //default constructor;
{
    std::cout << "Default constructor called\n";
    fixed_point = 0;
}

Fixed::Fixed(const int nb) //constructor parametrized with int; (!v)
{
    std::cout << "Int constructor called\n";
    fixed_point = nb << frac_bits;
    // (int) converts it to the corresponding fixed-point value.
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

Fixed::Fixed(const float nb) //constructor parametrized with float;
{
    std::cout << "Float constructor called\n";
    fixed_point = (roundf(nb * (1 << frac_bits))); //shifting a float by a non-integer value is not well-defined behavior in C++.
    // (float) converts it to the corresponding fixed-point value.
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

Fixed::Fixed(const Fixed &copy_constructor) // copy constructor;
{
    std::cout << "Copy constructor called\n";
    *this = copy_constructor;
}

Fixed& Fixed::operator=(const Fixed &other) //copy assignement;
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other) // Self-assignment check;
        fixed_point = other.fixed_point;
    return *this;
}

std::ostream &operator<<(std::ostream &output, Fixed const &object)
{
    output << object.toFloat();
    return output;
}

bool Fixed::operator>(Fixed const &obj)
{
    return fixed_point > obj.fixed_point;
}

bool Fixed::operator<(Fixed const &obj)
{
    return fixed_point < obj.fixed_point;
}

bool Fixed::operator>=(Fixed const &obj)
{
    return fixed_point >= obj.fixed_point;
}

bool Fixed::operator<=(Fixed const &obj)
{
    return fixed_point <= obj.fixed_point;
}

bool Fixed::operator==(Fixed const &obj)
{
    return fixed_point == obj.fixed_point;
}

bool Fixed::operator!=(Fixed const &obj)
{
    return fixed_point != obj.fixed_point;
}

Fixed Fixed::operator+(Fixed const &obj)
{
    Fixed res;
    res.fixed_point = fixed_point + obj.fixed_point;
    return res;
}

Fixed Fixed::operator-(Fixed const &obj)
{
    Fixed res;
    res.fixed_point = fixed_point - obj.fixed_point;
    return res;
}

Fixed Fixed::operator*(Fixed const &obj)
{
    Fixed res; 
    res.fixed_point = fixed_point / 256 * obj.fixed_point;
    return res;
}

Fixed Fixed::operator/(Fixed const &obj)
{
    Fixed res;
    res.fixed_point = fixed_point / obj.fixed_point * 256;
    return res;
}

Fixed &Fixed::operator++()
{
    ++fixed_point; //pre-increment
    return *this;
}

Fixed Fixed::operator++(int) // post-increment;
{
    Fixed original(*this);
    fixed_point++;
    return original;
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if(obj1.fixed_point <= obj2.fixed_point)
        return obj1;
    else
        return obj2;
}

Fixed &Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
    if(obj1.fixed_point <= obj2.fixed_point)
        return (Fixed)obj1;
    else
        return (Fixed)obj2;
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    if(obj1.fixed_point >= obj2.fixed_point)
        return obj1;
    else
        return obj2;
}

Fixed &Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
    if(obj1.fixed_point >= obj2.fixed_point)
        return (Fixed)obj1;
    else
        return (Fixed)obj2;
}

