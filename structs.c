#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {char* name; int age;};


//Write a function that returns an example of your struct when run.
//This should not return the same values every time.
struct student sample(){
  struct student output;

  srand( time(NULL) );
  int x = rand();
  output.age = x;

  output.name = "name";
  return output;
}

//Write a function that prints out variables of your structs type in a reasonable way.
int print(struct student myStudent){
  printf("name: %s\n", myStudent.name);
  printf("age: %d\n", myStudent.age);
  return 0;
}

//Write a function that modifies values of your struct's type.
int modify(struct student myStudent, char* newName, int newAge){
  myStudent.name = newName;
  myStudent.age += newAge;
}




int main(){
  struct student s1;
  s1 = sample();
  print(s1);
  modify(s1, "mine", 23);
  printf("modified\n");
  print(s1);

  return 0;
}
