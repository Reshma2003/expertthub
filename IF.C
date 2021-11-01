#include<stdio.h>
#include<conio.h>
int ragul=1;
void main()
{      while(ragul)
   {
    clrscr();
	  yogesh:
	  printf("enter status:");
	  scanf("%d",&ragul);
	       if(ragul==0)
	       {
	       printf(" sitting\n");
	       // ragul=1
	       //getch();
	       //continue;
	       }
	       else if(ragul==1)
	       {
	       printf(" standing\n");
	       // break;
	       }
	       else
	       {
	       printf("invalid input\n");
	       }


   getch();
   }
}



























