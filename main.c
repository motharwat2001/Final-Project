#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char sym[3][3]={'1','2','3','4','5','6','7','8','9'};
char user='X';
bool check=true,check_winning=false;
int iteration=1;

    void Display(char arr[3][3])

    {
        printf("\t\t T I C  T A C   T O E \n");
        printf(" Player One is:- X\n");
        printf(" Player Two is:- O\n");
        printf("\n    %c  |   %c   |   %c ",arr[0][0],arr[0][1],arr[0][2]);
        printf("\n ----- | ----- | -----");
        printf("\n    %c  |   %c   |   %c ",arr[1][0],arr[1][1],arr[1][2]);
        printf("\n ----- | ----- | -----");
        printf("\n    %c  |   %c   |   %c ",arr[2][0],arr[2][1],arr[2][2]);
        if (check==false)
            printf("\n Enter valid number");
            check=true;

    }
    void turn()
    {
        if(user =='X')
        {
            user = 'O';
        }
        else
        {
            user ='X';
        }
    }

    bool empty(char sym)
    {
        if(sym =='X'||sym =='O')

        return false;
        else
        {
                return true;
        }

    }



    int insert()
    {
        int u_input;
        printf("\n");
        scanf("%d", &u_input);
        switch (u_input)
        {
        case 1:

            if(empty(sym[0][0]) == true)
            {
              sym [0][0] =user;
              turn();
              break;
            }
            else printf("The cell isn't empty");
            iteration=0;
                    break;

        case 2:
           if(empty(sym[0][1])== true)
           {
               sym [0][1] =user;
            turn();
            break;
           }
           else printf("The cell isn't empty");
           iteration=0;
                   break;


        case 3:
        if(empty(sym[0][2])== true)
           {
               sym [0][2] =user;
            turn();
            break;
           }
           else printf("The cell isn't empty");
                      iteration=0;

                   break;


        case 4:
       if(empty(sym[1][0])== true)
         {
            sym [1][0] =user;
            turn();
            break;
         }
          else printf("The cell isn't empty");
                     iteration=0;

                  break;

        case 5:
      if(empty(sym[1][1])== true)
         {
        sym [1][1] =user;
            turn();
            break;
        }
          else printf("The cell isn't empty");
                     iteration=0;

                  break;



         case 6:
        if(empty(sym[1][2])== true)
        {
          sym [1][2] =user;
            turn();
            break;
        }
        else printf("The cell isn't empty");
                   iteration=0;
                    break;




        case 7:
            if(empty(sym[2][0])== true)
            {
               sym [2][0] =user;
            turn();
            break;
            }
            else printf("The cell isn't empty");
                       iteration=0;
                       break;



        case 8:
            if(empty(sym[2][1])== true)
            {
              sym [2][1] =user;
            turn();
            break;
            }

            else printf("The cell isn't empty");
                       iteration=0;

            break;

        case 9:
            if(empty(sym[2][2])== true)
            {
               sym [2][2] =user;
            turn();
            break;
            }
           else printf("The cell isn't empty");
                      iteration=0;

           break;

     default:{check=false;
              iteration=0;
             }

    }
    }


void is_winning()
{
    for(int i=0;i<3; i++)
   {
       if(sym[i][0]== sym[i][1] &&
       sym[i][0]== sym[i][2])
       {
           printf("\n %c wins",sym[i][0]);
           check_winning=true;
       }

   }

  for(int i=0; i<3; i++)
    {
        if(sym[0][i]==sym[1][i] &&
       sym[0][i]==sym[2][i])
       {
           printf("\n %c wins",sym[0][i]);
           check_winning=true;
       }

    }


if(sym[0][0]==sym[1][1] &&
     sym[1][1]==sym[2][2])
     {
         printf("\n %c wins",sym[0][0]);
         check_winning=true;
     }

  else if(sym[0][2]==sym [1][1] &&
     sym[1][1]==sym[2][0])
     {
         printf("\n %c wins",sym[0][2]);
         check_winning=true;
     }


     else
         {
             int tie = 0;
            for(int i=0;i<3;i++)
           {
             for (int j=0;j<3;j++)
         {
          if(((sym[i][j]=='X')||(sym[i][j]=='O')))
             {
               tie ++;
            }
          }

          }
          if (tie==9)
          {
              printf("\n X & O Tied");
              check_winning=true;
          }
        }


}

    int main()
    {

    Display(sym);
        do
       {
        insert();
        system("cls");
        Display(sym);
        if (iteration==0)
        {
            iteration=1;
        }
         is_winning(sym);
        if(check_winning==true)
        {
            break;
        }

        } while (iteration=1);
    }
