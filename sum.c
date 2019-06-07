#include<stdio.h>
int main()
{
int x,b,c=0;
char g,k;
printf("you want to use calculator y/n\n");
scanf("%s",&g);
while(g==121)
{
 if(g==121)
 {
  printf("which function you want to use\n");
  printf("for addition press a\n");
  printf("for subtraction press s\n");
  printf("for multiplication press m\n");
  printf("for division press d\n");
  scanf("%s",&k);
  if(k==97)
  {
    printf("Enter two values a and b\n");
    scanf("%d",&x);
    scanf("%d",&b);
    c=x+b;
    printf("%d",c);
  }
  else if(k==115)
  {
    printf("Enter two values a and b\n");
    scanf("%d",&x);
    scanf("%d",&b);
    c=x-b;
    printf("%d",c);
  }
  else if(k==109)
  {
    printf("Enter two values a and b\n");
    scanf("%d",&x);
    scanf("%d",&b);
    c=x*b;
    printf("%d",c);
  }
  else if(k==100)
  {
    printf("Enter two values a and b\n");
    scanf("%d",&x);
    scanf("%d",&b);
    c=x/b;
    printf("%d",c);
  }
}
 else if(g==110)
 {
  break;
}
}
return 0;
}
