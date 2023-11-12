#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
<<<<<<< HEAD
# include <cmath>
=======
#include <cmath>
>>>>>>> 5c12158b539d478fe8e60a2f8570279e5ec8c656

class Fixed
{
  private:
	int fixed_point;
	static const int frac_bits = 8;

  public:
	Fixed();                              // Default constructor
<<<<<<< HEAD
	Fixed(const int number);
	Fixed(const int fl_point);
	Fixed(const Fixed &copy_constructor); // Copy constructor
	Fixed &operator=(const Fixed &other); // Copy assignment operator
	~Fixed();                             // Destructor
	void setRawBits(int const raw);
	int getRawBits(void) const;
};

#endif
=======
	Fixed(const Fixed &copy_constructor); // Copy constructor
	Fixed &operator=(const Fixed &other); // Copy assignment operator
	Fixed(const int nb);	  			  // Parametrized constructor
	Fixed(const float nb);				  // Parametrized constructor
	~Fixed();                             // Destructor
	void setRawBits(int const raw);
	int getRawBits(void) const;
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
>>>>>>> 5c12158b539d478fe8e60a2f8570279e5ec8c656
