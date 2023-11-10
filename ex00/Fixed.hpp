#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int fixed_point;
	static const int frac_bits = 8;

  public:
	Fixed();                              // Default constructor
	Fixed(const Fixed &copy_constructor); // Copy constructor
	Fixed &operator=(const Fixed &other); // Copy assignment operator
	~Fixed();                             // Destructor
	void setRawBits(int const raw);
	int getRawBits(void) const;
};

#endif
