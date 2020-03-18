#include <stdio.h>
#include "method_sig.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{

  welcome();
  menu();

}


void welcome(){
  printf("Welcome to Connect 4 please select a menu option: \n");

}


void menu(){
  int menNum;
  int boolval = 0;

  printf("%s \n","-------------------------");
  printf("%s \n","| 1. Player vs Player   |");
  printf("%s \n","| 2. Player vs CPU(WIP) |");
  printf("%s \n","| 3. Credits            |");
  printf("%s \n","| 4. Exit               |");
  printf("%s \n","-------------------------");

  while(boolval == 0) {
      printf("Please enter a number: ");

      scanf("%d", &menNum);
      if (menNum == 1) {
          playerMenu();
          boolval = 1;
      } else if (menNum == 2) {
          //CPU();
          boolval = 0;
      } else if (menNum == 3) {
          credits();
          boolval = 1;
      } else if (menNum == 4) {
          printf("%s \n", "Thank you for playing please close the terminal window");
          boolval = 1;
      } else{
          boolval = 0;
      }
  }
}


void playerMenu(){
    int menNum;
    int boolval = 0;
    printf("%s \n","-------------------------");
    printf("%s \n","| 1. 6x7 board          |");
    printf("%s \n","| 2. 8x9 board          |");
    printf("%s \n","| 3. 10x11 board        |");
    printf("%s \n","| 4. Back               |");
    printf("%s \n","-------------------------");

    while(boolval == 0){
        printf("Please pick a board size: ");

        scanf("%d", &menNum);
        if(menNum == 1){
            boardReg();
            boolval = 1;
        } else if(menNum == 2){
            boolval = 1;
            boardMed();

        } else if(menNum == 3){
            boolval = 1;
            boardLarge();
        }
        else if(menNum == 4){
            boolval = 1;
            menu();
        }
        else{
            boolval = 0;
        }
    }
}

void CPU(){
    int menNum;
    int boolval = 0;
    printf("%s \n","-------------------------");
    printf("%s \n","| 1. 6x7 board          |");
    printf("%s \n","| 2. 8x9 board(WIP)     |");
    printf("%s \n","| 3. 10x11 board(WIP)   |");
    printf("%s \n","| 4. Back               |");
    printf("%s \n","-------------------------");

    while(boolval == 0){
        printf("Please pick a board size: ");

        scanf("%d", &menNum);
        if(menNum == 1){
            boardReg();
            boolval = 1;
        } else if(menNum == 2){
            boolval = 1;
            boardMed();

        } else if(menNum == 3){
            boolval = 1;
            boardLarge();
        }
        else if(menNum == 4){
            boolval = 1;
            menu();
        }
        else{
            boolval = 0;
        }
    }
}
void credits(){
    printf("Thank you for taking the time to play this game \n");
    printf("the following people and website have helped in the creation of the game \n");
    printf("1 - Stack Overflow \n");
    printf("   -- for reminding me on how to write if statements in C \n");
    printf("   -- and for help on how to create the board as for some reason i couldnt get a board size to work \n");
    printf("2 - Stewart Anderson \n");
    printf("   -- for trying to prove me wrong ;)");

    //add people and websites here like a sap
}

void boardReg(){


        int array[6][7];
        int i,j,k;
        int resp;
        char P1[18];
        char P2[18];
        int counter;
        for(i=0;i<7;i++)
            printf("+---");


        printf("+\n");
        memset(array,0,sizeof(array));
        for(i=0;i<6;i++)
        {
            for(j=0;j<7;j++)
            {
                printf("| %d ",array[i][j]);
            }
            printf("|\n");
            for(k=0;k<7;k++)
                printf("+---");

            printf("+\n");
        }

        printf("Is this board size okay for you? (please use 1 for yes or 0 for no)\n");
        scanf("%d", &resp);
        if(resp == 1){
            printf("okay then, lets begin \n");

            printf("who will be player 1 : \n");
            scanf("%s", P1);
            printf("And which unlucky sod will be player 2 \n");
            scanf("%s", P2);
            printf("Thank you we will now begin the game with the following players %s , %s \n", P1 , P2);
int gfin = 0;
int p1win = 0;
int p2win = 0;
while(gfin == 0) {
    int temp = 0;
    while (temp == 0) {
        printf("Player 1: %s, Please pick a column you wish to drop your counter (0 - 6) \n", P1);
        scanf("%d", &counter);
        switch (counter) {
            case 0:
                for (int f = 5; f > 0; f--) {
                    if (array[f][0] == 0) {
                        array[f][0] = 1;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 1:
                for (int f = 5; f > 0; f--) {
                    if (array[f][1] == 0) {
                        array[f][1] = 1;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 2:
                for (int f = 5; f > 0; f--) {
                    if (array[f][2] == 0) {
                        array[f][2] = 1;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 3:
                for (int f = 5; f > 0; f--) {
                    if (array[f][3] == 0) {
                        array[f][3] = 1;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 4:
                for (int f = 5; f > 0; f--) {
                    if (array[f][4] == 0) {
                        array[f][4] = 1;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 5:
                for (int f = 5; f > 0; f--) {
                    if (array[f][5] == 0) {
                        array[f][5] = 1;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 6:
                for (int f = 5; f > 0; f--) {
                    if (array[f][6] == 0) {
                        array[f][6] = 1;
                        temp = 1;
                        break;
                    }
                }

                break;

            default:
                temp = 0;
                printf("Unknown Number");
        }
    }


    for (i = 0; i < 7; i++)
        printf("+---");


    printf("+\n");
    //memset(array,0,sizeof(array));
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            printf("| %d ", array[i][j]);
        }
        printf("|\n");
        for (k = 0; k < 7; k++)
            printf("+---");

        printf("+\n");
    }

    for(int i = 5; i < 0; i--){
        for(int j = 0; j < 6; j++){
            if( (array[i][j] == 1) && (array[i][j+1] == 1) && (array[i][j+2] == 1) && (array[i][j+3] == 1)){
                p1win = 4;
                if(p1win >= 4){
                    gfin++;
                }
            } else if((array[i][j] == 1) && (array[i+1][j] == 1) && (array[i+2][j] == 1) && (array[i+3][j]== 1)){
                p1win = 4;
                gfin++;
            }
        }
    }

    temp = 0;
    while (temp == 0) {
        printf("Player 2: %s, Please pick a column you wish to drop your counter (0 - 6) \n", P2);
        scanf("%d", &counter);
        switch (counter) {
            case 0:
                for (int f = 5; f > 0; f--) {
                    if (array[f][0] == 0) {
                        array[f][0] = 2;
                        temp = 1;
                        break;
                    }
                }

                break;
            case 1:
                for (int f = 5; f > 0; f--) {
                    if (array[f][1] == 0) {
                        array[f][1] = 2;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 2:
                for (int f = 5; f > 0; f--) {
                    if (array[f][2] == 0) {
                        array[f][2] = 2;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 3:
                for (int f = 5; f > 0; f--) {
                    if (array[f][3] == 0) {
                        array[f][3] = 2;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 4:
                for (int f = 5; f > 0; f--) {
                    if (array[f][4] == 0) {
                        array[f][4] = 2;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 5:
                for (int f = 5; f > 0; f--) {
                    if (array[f][5] == 0) {
                        array[f][5] = 2;
                        temp = 1;
                        break;
                    }
                }
                break;
            case 6:
                for (int f = 5; f > 0; f--) {
                    if (array[f][6] == 0) {
                        array[f][6] = 2;
                        temp = 1;
                        break;
                    }
                }

                break;


            default:
                temp = 0;
                printf("Unknown Number");
        }
    }


    for (i = 0; i < 7; i++)
        printf("+---");


    printf("+\n");
    //memset(array,0,sizeof(array));
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            printf("| %d ", array[i][j]);
        }
        printf("|\n");
        for (k = 0; k < 7; k++)
            printf("+---");

        printf("+\n");
    }
    for(int i = 5; i < 0; i--){
        for(int j = 6; j < 0; j--){
            if(array[i][j] == array[i][j +1] || array[i][j] == array[i +1][j] ){
                p2win++;
            } else {
                continue;
            }
        }
    }
    if(p1win >= 4 || p2win >= 4) {
        gfin = 1;
        if(p1win == 4){
            printf("Congratulations Player 1: %s, You have bested your opponent and claimed Victory", P1);
            menu();
        } else{
            printf("Congratulations Player 2: %s, You have bested your opponent and claimed Victory", P2);
            menu();
        }
    }
}
        }else if(resp == 0){
            printf("sorry to hear that lets change it for you \n");
            playerMenu();

        }else{
            printf("I'm sorry i didnt quite catch that \n");
            boardReg();
        }




}
void boardMed(){
    int a[8][9];
    int i,j,k;
    for(i=0;i<9;i++)
        printf("+---");


    printf("+\n");
    memset(a,0,sizeof(a));
    for(i=0;i<8;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("| %d ",a[i][j]);
        }
        printf("|\n");
        for(k=0;k<9;k++)
            printf("+---");

        printf("+\n");
    }
}
void boardLarge(){
    int a[10][11];
    int i,j,k;
    for(i=0;i<11;i++)
        printf("+---");


    printf("+\n");
    memset(a,0,sizeof(a));
    for(i=0;i<10;i++)
    {
        for(j=0;j<11;j++)
        {
            printf("| %d ",a[i][j]);
        }
        printf("|\n");
        for(k=0;k<11;k++)
            printf("+---");

        printf("+\n");
    }
}
