
#include <stdio.h>
union stu
{
    int age;
    char a;
    float hight;
};
int main()
{
  union stu var;
  var.age=78;
  var.a='j';
  var.hight=8.9;
  printf("%dage:\n",var.age);
  printf("%cchar:\n",var.a);
  printf("%f\n",var.hight);
  
}
