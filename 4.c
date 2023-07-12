  #include<stdio.h>
  #include<string.h>

  typedef struct stu
  {
      char name[20];
      int age;
  }STU ,*Pstu;

  int main()
  {
      struct stu xx = {"cxk",24},yy;
      strcpy(yy.name,"rap");
      yy.age = 2;
      Pstu p = &xx;
      p=&yy;
      p->age = 25;
      printf("%d\n",xx.age);
      printf("%d\n",yy.age);
  }
