#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {char* name; int age;};
//Write a function that returns an example of your struct when run.
//This should not return the same values every time.
struct student* sample(){
  srand(time(NULL));
  struct student sample;
  char* names[] = {"Joey", "Chandler", "Ross", "Monica", "Rachel", "Phoebe"};
  int x = rand() % 20;

  sample.age = x;
  sample.name = names[x % 5];

  struct student* output = &sample;
  return output;
}

//Write a function that prints out variables of your structs type in a reasonable way.
int printStudent(struct student *myStudent){
  printf("name: %s\n", (*myStudent).name);
  printf("age: %d\n", (*myStudent).age);
  return 0;
}

//Write a function that modifies values of your struct's type.
int modify(struct student *myStudent, char *newName, int newAge){
  if (newName != NULL){
    myStudent->name = newName;
  }
  myStudent->age = newAge;
  return 0;
}


int main(){
  printStudent(sample());


  return 0;
}
