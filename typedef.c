#include<stdio.h>
#include<stdlib.h>
struct student
  {
	char name[10];
	int id;
  };
  void display(struct stdent s1);
  void main()
  {
  	struct student s2;
  	printf("enter name");
  	scanf("%s",s2.name);
  	printf("enter id");
  	scanf("%d",&s2.id);
  	display(s2);
  }
  void display(struct student s1)
  {
  	printf("name=%s\n id=%d\n",s1.name,s1.id);
  }
