
#include <stdio.h>

union uni
{
    int a;
    char b;
  struct s1
  {
      int x;
      float y;
  }s2;
};

int main()
{
    union uni u;
    union uni *ptr=&u;
    u.a=90;
    u.b='l';
    u.s2.x=98;
    u.s2.y=8.0;
    ptr->a=67;
    ptr->b=80;
    ptr->s2.x=45;
    printf("%d\n",u.a);
    printf("%d\n",u.b);
    printf("%d\n",ptr->a);//pointer  access
    printf("%d\n",ptr->b);//pointer access
    printf("%d\n",u.s2.x);
    printf("%f\n",u.s2.y);
        printf("%d\n",ptr->s2.x);
    printf("%zu sizeof\n",sizeof(struct s1));
    printf("%zu\nsizeof",sizeof(u));
    
    //printf("Hello World");

    //return 0;
}