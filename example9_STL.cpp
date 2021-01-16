#include <iostream>
#include <string>
#include <vector>

int main ()
{
  std::vector<int> list;

  list.push_back(4);
  list.push_back(3);
  list.push_back(2);
  list.push_back(1);


  for(std::vector<int>::iterator iter = list.begin(); iter < list.end(); iter++)
  {
    std::cout << "Element in vector = " << *iter << std::endl;
  }
  return 0;
}
