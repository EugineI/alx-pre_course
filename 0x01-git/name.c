/*include<stdio.h>
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

  
);
  printf("Used comments started a  new c program \n");
  return 0;
  }*/

#include<stdio.h>
int main()
{
  int n = 1;
  int m = 2;
  int sum = n + m;
  char name[20];
  printf("Enter you message:");
  scanf("%s", name);
  printf("%s %d\n",name,sum);
  if(sum > 5)
    {
      printf("********");
    }
  else
    {
      printf("##########");
    }

  return 0;
  
}
