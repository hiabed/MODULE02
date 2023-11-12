#include "Fixed.hpp"

int main( void )
{
    Fixed a;
<<<<<<< HEAD
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d( b );
    a = Fixed(1234.4321f);
=======
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

>>>>>>> 5c12158b539d478fe8e60a2f8570279e5ec8c656
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
<<<<<<< HEAD
=======

>>>>>>> 5c12158b539d478fe8e60a2f8570279e5ec8c656
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
<<<<<<< HEAD
=======

>>>>>>> 5c12158b539d478fe8e60a2f8570279e5ec8c656
    return 0;
}