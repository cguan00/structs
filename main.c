#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

int main(){
  printf("FIRST STUDENT: \n");
  struct student s1 = sample();
  printStudent(s1);

  printf("\nSECOND STUDENT:\n");
  struct student s2 = sample();
  printStudent(s2);

  printf("\nMODIFYING SECOND STUDENT:\n");
  modify(&s1, "Bob", 5);
  printStudent(s1);


  return 0;
}
