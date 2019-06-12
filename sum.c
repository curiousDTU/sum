#include<stdio.h>
int main()
{
int x,b,c=0;
char g,k;
printf("you want to use calculator y/n\n");
scanf("%s",&g);
while(g=='y')
{
 if(g=='y')
 {
  printf("which function you want to use\n");
  printf("for addition press a\n");
  printf("for subtraction press s\n");
  printf("for multiplication press m\n");
  printf("for division press d\n");
  scanf("%s",&k);
  if(k=='a')
  {
    printf("Enter two values a and b\n");
    scanf("%d",&x);
    scanf("%d",&b);
    c=x+b;
    printf("%d",c);
  }
  else if(k=='s')
  {
    printf("Enter two values a and b\n");
    scanf("%d",&x);
    scanf("%d",&b);
    c=x-b;
    printf("%d",c);
  }
  else if(k=='m')
  {
    printf("Enter two values a and b\n");
    scanf("%d",&x);
    scanf("%d",&b);
    c=x*b;
    printf("%d",c);
  }
  else if(k=='d')
  {
    printf("Enter two values a and b\n");
    scanf("%d",&x);
    scanf("%d",&b);
    c=x/b;
    printf("%d",c);
  }
}
 else if(g=='n')
 {
  break;
}
}
return 0;
}
