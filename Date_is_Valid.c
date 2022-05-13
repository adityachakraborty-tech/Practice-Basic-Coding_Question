#include <stdio.h>
int main()
{
  int d, m, y, flag = 1, isleap = 0;
  printf(" enter a date (dd/mm/yyyy)----     ");
  scanf("%d%d%d", &d, &m, &y);
  if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0))
    isleap = 1;
  if (y < 1850 || y > 2050 || m < 1 || m > 12 || d < 1 || d > 31)
    flag = 0;
  else if (m = 2)
  {
    if (d == 31 || d == 30 || (d == 29 && !isleap))
      flag = 0;
  }
  else if (m == 4 || m == 6 || m == 9 || m == 11)
  {
    if (d == 31)
      flag = 0;
  }
  if (flag == 0)
    printf("not a valid date ");
  else
    printf("  valid");
  return 0;
}