#include <stdio.h>



int​ fun() 
{
  int​ global_count = ​2​;
  static​ ​int​ count = ​0​;
  count++;
  global_count++;
  return​ count;
}

int​ main() 
{
  printf(​"%d \n"​, global_count);
  printf(​"%d \n"​, fun());
  printf(​"%d \n"​, fun());
  global_count++;
  printf(​"%d \n"​, global_count);
  return​ ​0​;
}