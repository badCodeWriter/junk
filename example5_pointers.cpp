#include <iostream>

int main()
{
   int *a;   //declaration of a pointer, this ONLY allocates memory
   int b;  //b is a value not a pointer
   int c;

   //pointer a has an address and a value
   //ponter a is a memory location that stores the address of another value
   //to change the value at the memory location pointed to, dereference!

   //a = 2;      //incorrect way to set the value
   *a = 3;       //correct way to set the value being pointed to

   //if(a == 2)  //incorrect way to evaluate refereced value
   if(*a == 2)  //correct way to evaluate referenced value
   {
     std::cout << "see, value is indeed " << *a << std::endl;
   }
   else
   {
     std::cout << "see, value is not " << *a << std::endl;
   }

   //note the * operator
   //It is used differently at declaration and for dereferecing

   b = 5;
   *a = b;

   std::cout << b << std::endl;
   std::cout << *a << std::endl;

   c = *a;

   std::cout << c << std::endl;

   *a = 1;

   std::cout << a << std::endl;
   std::cout << *a << std::endl;
   std::cout << b << std::endl;
   std::cout << c << std::endl;

   a = &b; //a points to whatever the value of b is
   b = 2;

   std::cout << a << std::endl;
   std::cout << *a << std::endl;
   std::cout << b << std::endl;
   std::cout << c << std::endl;

   *a = c;

   std::cout << a << std::endl;
   std::cout << *a << std::endl;
   std::cout << b << std::endl;
   std::cout << c << std::endl;

   std::cout << &b << std::endl;
   std::cout << &c << std::endl;
}
