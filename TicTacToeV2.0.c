/******************************************************************************
TIC TAC TOE
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
void display(char[]);
void p1chance(char[]);
void p2chance(char[]);
void check(char[],int);
int main()
{
char a[]={'1','2','3','4','5','6','7','8','9'};
int i;
printf("1st person's character is X\n2nd player's character is O \n ");
 for(i=0;i<9;i++)
 {
  display(a);
  if(i%2==0)
  p1chance(a);
  else
  p2chance(a);
  check(a,i);
 }
 display(a);
 return 0;
}
void display(char x[])
{
 printf("\n       |       |      ");
 printf("\n  %c    |   %c   |  %c  ",x[0],x[1],x[2]);
 printf("\n-------|-------|------");
 printf("\n  %c    |   %c   |  %c  ",x[3],x[4],x[5]);
 printf("\n-------|-------|------");
 printf("\n  %c    |   %c   |  %c  ",x[6],x[7],x[8]);
 printf("\n       |       |      ");
}
void p1chance(char x[])
{    printf("\nplayer 1's turn\n");
     int n;
     printf("\nwhere do u want your entry: ");
     aaa:
     scanf("%d",&n);
     n--;
     if(x[n]=='X'||x[n]=='O'|| n>8 || n<0)
      {
        printf("\nINVALID ENTERY PLEASE ENTER AGAIN: ");
        goto aaa;
      }
      else
      {
          x[n]='X';
      }

}
void p2chance(char x[])
{    printf("\nplayer 2's turn\n");
     int n;
     printf("\nwhere do u want your entry: ");
     aaa:
     scanf("%d",&n);
     n--;
     if(x[n]=='X'||x[n]=='O'|| n>8 || n<0)
      {
        printf("\nINVALID ENTERY PLEASE ENTER AGAIN: ");
        goto aaa;
      }
      else
      {
          x[n]='O';
      }

}
void check(char a[],int x)
{ 
  if((a[0]==a[1]&&a[1]==a[2])||(a[3]==a[4]&&a[4]==a[5])||(a[6]==a[7]&&a[7]==a[8])||(a[0]==a[4]&&a[4]==a[8])||(a[2]==a[4]&&a[4]==a[6])||(a[0]==a[3]&&a[3]==a[6])||(a[2]==a[5]&&a[5]==a[8])||(a[1]==a[4]&&a[4]==a[7]))
  { 
     display(a);
    if(x%2==0)
    {
        printf("player 1 has won the game");
        getch();
        exit(1); 
    }
    else
    {
        printf("player 2 has won the game");
        getch();
        exit(1);
    }
  }
}
