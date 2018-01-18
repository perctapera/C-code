#include <iostream>

int main()
{
  float dollars;
  int want;
 
  cout<<"Input dollars: ";
  cin >> dollars;
  if (0. == dollars)
  {
    printf("give nothing, get nothing...\n");
    exit(1);
  }
  else if (0. > dollars)
  {
    printf("I wrote input, not take!\n");
    exit(2);
  }
  else if (1. > dollars)
  {
    printf("Well, you sure are a parsimonious one, aren't you?\n");
    exit(3);
  }
  else
  { }
 
  printf("What do you want in return: 1 dollars, 2 nothing? ");
  cin >> want;
 
  if (1 == want)
    printf("Sure thing, here's your $%f.2 back, less my fee, of course.", (dollars - 0.50));
  else if (2 == want)
    printf("Here you go ... a whole lot of nothing ...\n");
  else
    printf("I guess you're sure ... here's your %d back.  I'll keep the $%f.2 for the effort.", desire, dollars);
 
  return 0;
}
