#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"


//Write a function that returns an example of your struct when run.
//This should not return the same values every time.
struct student sample(){
  int x = rand();
  struct student output;

  char names[6][32] = {"Joey", "Chandler", "Ross", "Monica", "Rachel", "Phoebe"};

  strcpy(output.name, names[rand() % 6]);
  output.age = rand() % 10 + 10;

  return output;
}

//Write a function that prints out variables of your structs type in a reasonable way.
int printStudent(struct student myStudent){
  printf("name: %s\n", myStudent.name);
  printf("age: %d\n", myStudent.age);
  return 0;
}

//Write a function that modifies values of your struct's type.
int modify(struct student *myStudent, char* newName, int newAge){
  strncpy(myStudent->name, newName, 32);
  myStudent->age = newAge;
  return 0;
}
