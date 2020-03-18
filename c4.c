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
