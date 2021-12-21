#ifndef TESTING_H
#define TESTING_H

#include <iostream>

/**
 * @brief  A simple class for demonstration
 * */
class A
{
private:
    int a_;

public:

    /**
    * @brief Constructor
    * @param a An int
    **/
    A(int a):a_(a){}

    //! @fn Function to print 
    //! @brief Prints the private variable a_
    //! @details Printing
    print(){ std::cout << "Printing a: " << a_ << std::endl; }

}

#endif
