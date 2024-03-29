#include <stdio.h>
#include "util.h"
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
  printf("%s \n","| 5. How to Play        |");
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
          menu();
          boolval = 1;
      } else if (menNum == 4) {
          printf("%s \n", "Thank you for playing please close the terminal window");
          boolval = 1;
      }else if(menNum == 5){
          HowTo();
          menu();
          boolval = 1;
      }
      else{
          boolval = 0;
      }
  }
}

void HowTo(){
    printf("-------------------------------------------------------------------------------------------------------- \n");
    printf("This is the How to guide for connect 4 \n");
    printf("To start off with you'll need to pick the first option player vs player \n");
    printf("then you will need to pick the required board size and youll be prompted is this the correct board \n");
    printf("then you will be asked who is player 1 and player 2 \n");
    printf("then you will be asked to pick a column to drop your counter (player 1 = 1, Player 2 = 2) \n");
    printf("the game will play as normal each player takes a turn until one player has connected 4 in a row \n");
    printf("once a player has 4 in a row the game will end and you will be presented the main menu again \n");
    printf("-------------------------------------------------------------------------------------------------------- \n");
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
    printf("   -- and for help on how to create the board as for some reason i couldn't get a board size to work \n");
    printf("2 - Stewart Anderson \n");
    printf("   -- for trying to prove me wrong with my array :) \n");

    //add people and websites here like a sap
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
