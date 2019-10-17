struct student {char name[32]; int age;};

struct student sample();
int printStudent(struct student myStudent);
int modify(struct student *myStudent, char *newName, int newAge);
