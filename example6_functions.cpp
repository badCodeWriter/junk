#include <iostream>

void function_a(int &a);

int main()
{
   int b = 4;
   function_a(b);
   std::cout << "B is " << b << std::endl;
   return 0;  //may or may not be needed
}

void function_a(int &a)
{
  a = 5;
}
