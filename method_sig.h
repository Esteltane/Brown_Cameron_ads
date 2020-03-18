#pragma once

#include <string.h>


void menu();
void welcome();
void redo();
void undo();
void playerMenu();
void credits();
void CPU();
void boardReg();
void boardMed();
void boardLarge();

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
                    if((array[i][j] == 1 && array[i][j+1] == 1 && array[i][j+2] == 1 && array[i][j+3] == 1) || (array[i][j] == 1 && array[i+1][j] == 1 && array[i+2][j] == 1 && array[i+3][j] == 1)){
                        p1win = 4;
                        //printf("this test:: %d, %d, %d, %d \n" , array[i][j], array[i][j+1] , array[i][j+2] , array[i][j+3] );
                        if(p1win == 4){
                            gfin++;
                        }
                    }
                }
                printf("|\n");
                for (k = 0; k < 7; k++)
                    printf("+---");

                printf("+\n");
            }
            //printf("yeshere \n");

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
                    if((array[i][j] == 2 && array[i][j+1] == 2 && array[i][j+2] == 2 && array[i][j+3] == 2) || (array[i][j] == 2 && array[i+1][j] == 2 && array[i+2][j] == 2 && array[i+3][j] == 2)){
                        p2win = 4;
                        //printf("this test:: %d, %d, %d, %d \n" , array[i][j], array[i][j+1] , array[i][j+2] , array[i][j+3] );
                        if(p1win == 4){
                            gfin++;
                        }
                    }
                }
                printf("|\n");
                for (k = 0; k < 7; k++)
                    printf("+---");

                printf("+\n");
            }

            if(p1win >= 4 || p2win >= 4) {
                gfin = 1;
                if(p1win == 4){
                    printf("Congratulations Player 1: %s, You have bested your opponent and claimed Victory \n", P1);
                    menu();
                } if(p2win == 4){
                    printf("Congratulations Player 2: %s, You have bested your opponent and claimed Victory \n", P2);
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

