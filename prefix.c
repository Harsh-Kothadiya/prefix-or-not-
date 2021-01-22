//prefix or not
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct h1
{
    char ch[50];
};
struct h1* create_h1(int n)
{
    struct h1 *p;
    p=(struct h1*)malloc(sizeof(struct h1)*n);
    return p;
}
int check(struct h1 *ptr,int i,int n)
{
   int j;
   int l;
   int k;
   char x[50];
   int h=1;
   l=strlen(ptr->ch);

   struct h1 *p1;
   p1=ptr;
   for(k=i+1;k<n;k++)
   {
       p1++;
       for(j=0;j<l;j++)
        x[j]=p1->ch[j];

        x[j]='\0';
        h=strcmp(x,ptr->ch);

        if(h==0)
            break;
   }
   if(h==0)
    return 0;
   else
    return 1;

}

void main()
{
    int n;
    printf("\n\n\t HOW MANY CODE ENTER : ");
    scanf("%d",&n);
    struct h1 *p;
    p=create_h1(n);

    struct h1 *ptr;
    ptr=p;
    int i;
    int h;
    for(i=0;i<n;i++)
    {
        printf("\n\t CODE-%d ENTER :",i+1);
        scanf("%s",ptr->ch);
        ptr++;
    }
    ptr=p;
    for(i=0;i<n;i++)
    {
        printf("\ncode-%d : %s",i+1,ptr->ch);
        ptr++;
    }
   ptr=p;
     for(i=0;i<n;i++)
     {
        h=check(ptr,i,n);
        if(h==0)
         break;
         ptr++;
     }
     printf("\n\n----------OUTPUT---------------\n\n");
     if(h==0)
        printf("\n\n NOT PREFIX");
     else
        printf("\n\n  PRIFIX");

    printf("\n\n");
getch();
}
