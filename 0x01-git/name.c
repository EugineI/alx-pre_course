#include<stdio.h>
int main()
{
  char name[20];
  int age;
  char grade;
  double gpa;
  
  printf("Enter your grade:");
  scanf("%c",&grade);
  
  printf("Enter your gpa:");
  scanf("%lf",&gpa);
  
  printf("Enter your age:");
  scanf("%d",&age);

  printf("Enter your name:");
  scanf("%s",name);

  printf("You are %d years old and your gpa is %lf \n", age,gpa);
  printf("Name: %s\n Grade: %c\n", name, grade);
  return 0;
}
