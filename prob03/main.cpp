// Random Rectangle

#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{
  //set the maximum base of the rectangle to 40
  int max = 40;
  int base;

  //generate random length
  unsigned seed = time (0);
  srand (seed);
  base = rand () % max + 1;

  // show Rectangle
  std::string rectangle;
  rectangle.assign(base, '#');
  std::cout << rectangle << '\n';
  std::cout << rectangle << '\n';
  std::cout << rectangle << '\n';






  return 0;
}
