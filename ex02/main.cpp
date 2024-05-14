#include <iostream>
#include <string>

int main() {
   std::string str = "HI THIS IS BRAIN";
   std::string *stringPTR = &str;
   std::string &stringREF = str;

   // Print memory
   std::cout << "The memory address of the string variable: " << &str << std::endl;
   std::cout << "The memory address held by stringPTR     : " << stringPTR << std::endl;
   std::cout << "The memory address held by stringREF     : " << &stringREF << std::endl;
   std::cout << std::endl;
   // Print values:
   std::cout << "The value of the string variable : " << str << std::endl;
   std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
   std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

   return 0;
}


/*
*stringPTR is a pointer to a string object.
It stores the memory address where the str object is located.

&stringREF is a reference to a std::string object.
It directly refers to the str object itself, rather than its memory address.
*/