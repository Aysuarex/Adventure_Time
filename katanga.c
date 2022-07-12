/**
 * @file katanga.c
 * @author Suara Ayomide (aysuarex@gmail.com) 
 * 
 * katanga - function that controls all player activities within the katanga maze
 * 
 * @date 2022-06-25
 */

#include <stdio.h>
#include <windows.h>
#include "main.h"

char dir0, dir1, dir2, dir3, dir4, dir5, dir6, dir7, dir8, dir9, dir10, dir11, dir12, dir13;
char dir4A, dir4B, dir4C, dir4Cii, dir4D, dir4E, dir4F, dir12A, dir12B, dir12Bii;

void katanga()
{
    char map;
    int mode;
    char proceed;
    char direction;

    katanga_start: //Reference Point
    system("cls");

    printf("\n -----------------------------------------------------------------------------\n\n");
    printf("    Katanga is supposedly a nation of independence, however their practices,\n");
    printf("    unorthodox living conditions and constant partying have made this great\n");
    printf("    nation inhabitable to outsiders & tourists such as yourself.\n");
    printf("      You tried to interfer and convince the citizens against their terrible\n");
    printf("    way of life but the emperor of Katanga has gotten word of this and has  \n");
    printf("    ordered that you be arrested and detained for execution.    RUN!!!!!!! \n\n\n");
    printf(" -----------------------------------------------------------------------------\n\n");

    Sleep(1000);
    printf("\n\nYou couldn't possibly know your left from your right,\nbut the satellite map will guide you\n\n\t==> Good Luck!");
    printf("\n\nTIPS:");
    printf("\n1. Turn on <caps_lock> ");
    printf("\n2. Maximize the window for full screen view");
    printf("\n3. Enter F, L, R, B or X to navigate within the maze");
    printf("\n\n\nEnter Any Button to Proceed");
    printf("\n\nPress X to exit\n\t\t==>  ");
    scanf("%s", &proceed);
    if (proceed != 'X')
        goto katanga_maze;
    else
    {
        system("cls");
        return;
    }

    katanga_maze:
/*  Maze redrawing labelled with dir_numbers
    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    888888     4C             4D           4E    88
    88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88
    88   88888   88888   88888   888888888   888888
    88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88
    88 4Cii   4B 88888 6       7     88888 4F  X 88
    88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88
    88   88888   88888   88888   888888888   888888
    88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88
    888888    4A   4   5    88 8           9     88
    88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88
    888888   88888   888888888   888888888   888888
    88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88
    888888 2       3     888888888   88888 10    88
    88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88
    88     1 88888888888888888   12B 88888 11    88
    88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88
    888888   888888888   12Bii    12A     12 888888
    88aaaa   aaaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa88
START      0     888888888   8aaa8aaa8     13    END
    aaaaaaaaaaaaa8aaa8aaa8aaa8aaa8aaa8aaaaaaaaaaaaa
    );
*/
    system("cls");
    katanga_point0();
    printf("--------------------------------------------------------------\n");
    printf("You have found yourself within the Katanga Maze!");
    printf("\nYou're at your First Choice-Point ");

    point0: //Reference Point
    {
    printf("\nSelect a direction: \n"); //At point 0
    printf("Forward(F), Left(L) or exit maze(X)\n\t\t==> ");
    scanf("%s", &dir0);
    
    if (dir0 == 'L') //point0 left
    {   
        system("cls");
        katanga_point1();
        printf("\nYou have come to the next Choice Point\n ");
        point1: //Reference Point
        {
        printf("\nSelect a direction: \n"); //At point 1
        printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
        scanf("%s", &dir1);
        
        if (dir1 == 'F') //point1 forward
        {
            system("cls");
            katanga_point2();
            printf("--------------------------------------------------------------\n");
            printf("\nYou have come to the next Choice Point\n ");
            point2: //Reference Point
            {
            printf("\nSelect a direction: \n"); //At point 2
            printf("Forward(F) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
            scanf("%s", &dir2);
            if (dir2 == 'R') //point2 right
            {
                system("cls");
                katanga_point3();
                printf("--------------------------------------------------------------\n");
                printf("\nYou have come to the next Choice Point\n ");
                point3: //Reference Point
                {
                printf("\nSelect a direction: \n"); //At point 3
                printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                scanf("%s", &dir3);
                
                if (dir3 == 'L') //point3 left
                {
                    system("cls");
                    katanga_point4();
                    printf("--------------------------------------------------------------\n");
                    printf("\nYou have come to the next Choice Point\n ");
                    point4: //Reference Point
                    {
                    printf("\nSelect a direction: \n"); //At point 4
                    printf("Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                    scanf("%s", &dir4);
                    
                    if (dir4 == 'R') //point4 right
                    {
                        system("cls");
                        katanga_point5();
                        printf("--------------------------------------------------------------\n");
                        printf("\nYou have come to the next Choice Point\n ");
                        point5: //Reference Point
                        {
                        printf("\nSelect a direction: \n"); //At point 5
                        printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                        scanf("%s", &dir5);
                        
                        if (dir5 == 'L') //point5 left
                        {
                            system("cls");
                            katanga_point6();
                            printf("--------------------------------------------------------------\n");
                            printf("\nYou have come to the next Choice Point\n ");
                            point6: //Reference Point
                            {
                            printf("\nSelect a direction: \n"); //At point 6
                            printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                            scanf("%s", &dir6);
                            
                            if (dir6 == 'R') //point6 right
                            {
                                system("cls");
                                katanga_point7();
                                printf("--------------------------------------------------------------\n");
                                printf("\nYou have come to the next Choice Point\n ");
                                point7: //Reference Point
                                {
                                printf("\nSelect a direction: \n"); //At point 7
                                printf("Forward(F) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                scanf("%s", &dir7);
                                
                                if (dir7 == 'R') //point7 right
                                {
                                    system("cls");
                                    katanga_point8();
                                    printf("--------------------------------------------------------------\n");
                                    printf("\nYou have come to the next Choice Point\n ");
                                    point8: //Reference Point
                                    {
                                    printf("\nSelect a direction: \n"); //At point 8
                                    printf("Forawrd(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                    scanf("%s", &dir8);
                                    
                                    if (dir8 == 'L') //point8 left
                                    {
                                        system("cls");
                                        katanga_point9();
                                        printf("--------------------------------------------------------------\n");
                                        printf("\nYou have come to the next Choice Point\n ");
                                        point9: //Reference Point
                                        {
                                        printf("\nSelect a direction: \n"); //At point 9
                                        printf("Forward(F), or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                        scanf("%s", &dir9);
                                        
                                        if (dir9 == 'R') //point9 right
                                        {
                                            system("cls");
                                            katanga_point10();
                                            printf("--------------------------------------------------------------\n");
                                            printf("\nYou have come to the next Choice Point\n ");
                                            point10: //Reference Point
                                            {
                                            printf("\nSelect a direction: \n"); //At point 10
                                            printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                            scanf("%s", &dir10);
                                            
                                            if (dir10 == 'F') //point10 forward
                                            {
                                                system("cls");
                                                katanga_point11();
                                                printf("--------------------------------------------------------------\n");
                                                printf("\nYou have come to the next Choice Point\n ");
                                                point11: //Reference Point
                                                {
                                                printf("\nSelect a direction: \n"); //At point 11
                                                printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                                scanf("%s", &dir11);
                                                
                                                if (dir11 == 'F') //point11 forward
                                                {
                                                    system("cls");
                                                    katanga_point12();
                                                    printf("--------------------------------------------------------------\n");
                                                    printf("\nYou have come to the next Choice Point\n ");
                                                    point12: //Reference Point
                                                    {
                                                    printf("\nSelect a direction: \n"); //At point 12
                                                    printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                                    scanf("%s", &dir12);
                                                    
                                                    if (dir12 == 'F') //point12 forward
                                                    {
                                                        system("cls");
                                                        katanga_point13();
                                                        printf("--------------------------------------------------------------\n");
                                                        printf("\nYou have come to the next Choice Point\n ");
                                                        point13: //Reference Point
                                                        {
                                                        printf("\nSelect a direction: \n"); //At point 13
                                                        printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                                        scanf("%s", &dir13);
                                                        
                                                        if (dir13 == 'L') //point13 left
                                                        {
                                                            printf("\n\n--------------------------------------------------------------\n");
                                                            printf("Congratulations! You have successfully made it out alive!");
                                                            printf("\n--------------------------------------------------------------");
                                                            printf("\n\n\n\nEnter Any Button to Proceed: ");
                                                            scanf("%s", &proceed);
                                                            if (proceed != '~')
                                                            {
                                                                system("cls");
                                                                return;
                                                            }
                                                            else
                                                            {
                                                                system("cls");
                                                                return;
                                                            }
                                                        }
                                                        else if (dir13 == 'R') //point13 right
                                                        {
                                                            printf("\nOops! Dead-end");
                                                            printf("\nReturning to last Choice Point...\n");
                                                            Sleep(500);
                                                            goto point13;
                                                        }
                                                        else if (dir13 =='B') //Back
                                                        {
                                                            system("cls");
                                                            katanga_point12();
                                                            printf("\nReturning to last Choice Point...\n");
                                                            goto point12;
                                                        }
                                                        else if (dir13 == 'X') //exit
                                                        {
                                                            goto katanga_start;
                                                        }
                                                        else //point13 else
                                                        {
                                                            printf("\nERROR! Invalid direction");
                                                            goto point13;
                                                        }
                                                        }
                                                    }
                                                    else if (dir12 == 'R') //point10 right
                                                    {
                                                        system("cls");
                                                        katanga_point12A();
                                                        printf("--------------------------------------------------------------\n");
                                                        printf("\nYou have come to the next Choice Point\n ");
                                                        point12A: //Reference Point
                                                        {
                                                        printf("\nSelect a direction: \n"); //At point 12A
                                                        printf("Forward(F) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                                        scanf("%s", &dir12A);
                                                        
                                                        if (dir12A == 'R') //point12A right
                                                        {
                                                            system("cls");
                                                            katanga_point12B();
                                                            printf("--------------------------------------------------------------\n");
                                                            printf("\nYou have come to the next Choice Point\n ");
                                                            point12B: //Reference Point
                                                            {
                                                            printf("\nSelect a direction: \n"); //At point 12B
                                                            printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                                            scanf("%s", &dir12B);
                                                            
                                                            if (dir12B == 'L') //point12B left
                                                            {
                                                                printf("\nOops! Dead-end");
                                                                printf("\nReturning to last Choice Point...\n");
                                                                Sleep(500);
                                                                goto point12B;
                                                            }
                                                            else if (dir12B == 'F') //point12B forward
                                                            {
                                                                printf("\nOops! Dead-end");
                                                                printf("\nReturning to last Choice Point...\n");
                                                                Sleep(500);
                                                                goto point12B;
                                                            }
                                                            else if (dir12B =='B') //Back
                                                            {
                                                                system("cls");
                                                                katanga_point12A();
                                                                printf("\nReturning to last Choice Point...\n");
                                                                goto point12A;
                                                            }
                                                            else if (dir12B == 'X') //exit
                                                            {
                                                                goto katanga_start;
                                                            }
                                                            else //point12B else
                                                            {
                                                                printf("\nERROR! Invalid direction");
                                                                goto point12B;
                                                            }
                                                            }
                                                        }
                                                        else if (dir12A == 'F') //point12A forward
                                                        {
                                                            system("cls");
                                                            katanga_point12Bii();
                                                            printf("--------------------------------------------------------------\n");
                                                            printf("\nYou have come to the next Choice Point\n ");
                                                            point12Bii: //Reference Point
                                                            {
                                                            printf("\nSelect a direction: \n"); //At point 12Bii
                                                            printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                                            scanf("%s", &dir12Bii);
                                                            
                                                            if (dir12Bii == 'L') //point12Bii left
                                                            {
                                                                printf("\nOops! Dead-end");
                                                                printf("\nReturning to last Choice Point...\n");
                                                                Sleep(500);
                                                                goto point12Bii;
                                                            }
                                                            else if (dir12Bii == 'F') //point12Bii forward
                                                            {
                                                                printf("\nOops! Dead-end");
                                                                printf("\nReturning to last Choice Point...\n");
                                                                Sleep(500);
                                                                goto point12Bii;
                                                            }
                                                            else if (dir12Bii =='B') //Back
                                                            {
                                                                system("cls");
                                                                katanga_point12B();
                                                                printf("\nReturning to last Choice Point...\n");
                                                                goto point12B;
                                                            }
                                                            else if (dir12Bii == 'X') //exit
                                                            {
                                                                goto katanga_start;
                                                            }
                                                            else //point12Bii else
                                                            {
                                                                printf("\nERROR! Invalid direction");
                                                                goto point12Bii;
                                                            }
                                                            }                                                        
                                                        }
                                                        else if (dir12A =='B') //Back
                                                        {
                                                            system("cls");
                                                            katanga_point12();
                                                            printf("\nReturning to last Choice Point...\n");
                                                            goto point12;
                                                        }
                                                        else if (dir12A == 'X') //exit
                                                        {
                                                            goto katanga_start;
                                                        }
                                                        else //point12A else
                                                        {
                                                            printf("\nERROR! Invalid direction");
                                                            goto point12A;
                                                        }
                                                        }
                                                    }
                                                    else if (dir12 =='B') //Back
                                                    {
                                                        system("cls");
                                                        katanga_point11();
                                                        printf("\nReturning to last Choice Point...\n");
                                                        goto point11;
                                                    }
                                                    else if (dir12 == 'X') //exit
                                                    {
                                                        goto katanga_start;
                                                    }
                                                    else //point12 else
                                                    {
                                                        printf("\nERROR! Invalid direction");
                                                        goto point12;
                                                    }
                                                    }
                                                }
                                                else if (dir11 == 'L') //point10 left
                                                {
                                                    printf("\nOops! Dead-end");
                                                    printf("\nReturning to last Choice Point...\n");
                                                    Sleep(500);
                                                    goto point11;
                                                }
                                                else if (dir11 =='B') //Back
                                                {
                                                    system("cls");
                                                    katanga_point10();
                                                    printf("\nReturning to last Choice Point...\n");
                                                    goto point10;
                                                }
                                                else if (dir11 == 'X') //exit
                                                {
                                                    goto katanga_start;
                                                }
                                                else //point11 else
                                                {
                                                    printf("\nERROR! Invalid direction");
                                                    goto point11;
                                                }
                                                }
                                            }
                                            else if (dir10 == 'L') //point10 left
                                            {
                                                printf("\nOops! Dead-end");
                                                printf("\nReturning to last Choice Point...\n");
                                                Sleep(500);
                                                goto point10;
                                            }
                                            else if (dir10 =='B') //Back
                                            {
                                                system("cls");
                                                katanga_point9();
                                                printf("\nReturning to last Choice Point...\n");
                                                goto point9;
                                            }
                                            else if (dir10 == 'X') //exit
                                            {
                                                goto katanga_start;
                                            }
                                            else //point10 else
                                            {
                                                printf("\nERROR! Invalid direction");
                                                goto point10;
                                            }
                                            }
                                        }
                                        else if (dir9 == 'F') //point9 forward
                                        {
                                            printf("\nOops! Dead-end");
                                            printf("\nReturning to last Choice Point...\n");
                                            Sleep(500);
                                            goto point9;
                                        }
                                        else if (dir9 == 'X') //exit
                                        {
                                            goto katanga_start;
                                        }
                                        else if (dir9 =='B')
                                        {
                                            system("cls");
                                            katanga_point8();
                                            printf("\nReturning to last Choice Point...\n");
                                            goto point8;
                                        }
                                        else //point9 else
                                        {
                                            printf("\nERROR! Invalid direction");
                                            goto point9;
                                        }
                                        }
                                    }
                                    else if (dir8 == 'F') //point8 forward
                                    {
                                        printf("\nOops! Dead-end");
                                        printf("\nReturning to last Choice Point...\n");
                                        Sleep(500);
                                        goto point8;
                                    }
                                    else if (dir8 =='B')
                                    {
                                        system("cls");
                                        katanga_point7();
                                        printf("\nReturning to last Choice Point...\n");
                                        goto point7;
                                    }
                                    else if (dir8 == 'X') //exit
                                    {
                                        goto katanga_start;
                                    }
                                    else //point8 else
                                    {
                                        printf("\nERROR! Invalid direction");
                                        goto point8;
                                    }
                                    }
                                }
                                else if (dir7 == 'F') //point7 forward
                                {
                                    printf("\nOops! Dead-end");
                                    printf("\nReturning to last Choice Point...\n");
                                    Sleep(500);
                                    goto point7;
                                }
                                else if (dir7 =='B')
                                {
                                    system("cls");
                                    katanga_point6();
                                    printf("\nReturning to last Choice Point...\n");
                                    goto point6;
                                }
                                else if (dir7 == 'X') //exit
                                {
                                    goto katanga_start;
                                }
                                else //point7 else
                                {
                                    printf("\nERROR! Invalid direction");
                                    goto point7;
                                }
                                }
                            }
                            else if (dir6 == 'F') //point6 forward
                            {
                                printf("\nOops! Dead-end");
                                printf("\nReturning to last Choice Point...\n");
                                Sleep(500);
                                goto point6;
                            }
                            else if (dir6 =='B')
                            {
                                system("cls");
                                katanga_point5();
                                printf("\nReturning to last Choice Point...\n");
                                goto point5;
                            }
                            else if (dir6 == 'X') //exit
                            {
                                goto katanga_start;
                            }
                            else //point6 else
                            {
                                printf("\nERROR! Invalid direction");
                                goto point6;
                            }
                            }
                        }
                        else if (dir5 == 'F') //point5 forward
                        {
                            printf("\nOops! Dead-end");
                            printf("\nReturning to last Choice Point...\n");
                            Sleep(500);
                            goto point5;
                        }
                        else if (dir5 == 'X') //exit
                        {
                            goto katanga_start;
                        }
                        else if (dir5 =='B')
                        {
                            system("cls");
                            katanga_point4();
                            printf("\nReturning to last Choice Point...\n");
                            goto point4;
                        }
                        else //point5 else
                        {
                            printf("\nERROR! Invalid direction");
                            goto point5;
                        }
                        }
                    }
                    else if (dir4 == 'L') //point4 left
                    {
                        system("cls");
                        katanga_point4A();
                        printf("--------------------------------------------------------------\n");
                        printf("\nYou have come to the next Choice Point\n ");
                        point4A: //Reference Point
                        {
                        printf("\nSelect a direction: \n"); //At point 4A
                        printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                        scanf("%s", &dir4A);
                        
                        if (dir4A == 'R') //point4A right
                        {
                            system("cls");
                            katanga_point4B();
                            printf("--------------------------------------------------------------\n");
                            printf("\nYou have come to the next Choice Point\n ");
                            point4B: //Reference Point
                            {
                            printf("\nSelect a direction: \n"); //At point 4B
                            printf("Forward(F), Left(L) go Back(B) or exit maze(X)\n\t\t==> ");
                            scanf("%s", &dir4B);
                            
                            if (dir4B == 'F') //point4B forward
                            {
                                system("cls");
                                katanga_point4C();
                                printf("--------------------------------------------------------------\n");
                                printf("\nYou have come to the next Choice Point\n ");
                                point4C: //Reference Point
                                {
                                printf("\nSelect a direction: \n"); //At point 4C
                                printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                scanf("%s", &dir4C);
                                
                                if (dir4C == 'R') //point4C right
                                {
                                    system("cls");
                                    katanga_point4D();
                                    printf("--------------------------------------------------------------\n");
                                    printf("\nYou have come to the next Choice Point\n ");
                                    point4D: //Reference Point
                                    {
                                    printf("\nSelect a direction: \n"); //At point 4D
                                    printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                    scanf("%s", &dir4D);
                                    
                                    if (dir4D == 'F') //point4D forward
                                    {
                                        system("cls");
                                        katanga_point4E();
                                        printf("--------------------------------------------------------------\n");
                                        printf("\nYou have come to the next Choice Point\n ");
                                        point4E: //Reference Point
                                        {
                                        printf("\nSelect a direction: \n"); //At point 4E
                                        printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                        scanf("%s", &dir4E);
                                        
                                        if (dir4E == 'R') //point4E right
                                        {
                                            system("cls");
                                            katanga_point4F();
                                            printf("--------------------------------------------------------------\n");
                                            printf("\nYou have come to the next Choice Point\n ");
                                            point4F: //Reference Point
                                            {
                                            printf("\nSelect a direction: \n"); //At point 4F
                                            printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                            scanf("%s", &dir4F);
                                            
                                            if (dir4F == 'L') //point4F left
                                            {   //Treasure
                                                system("cls");
                                                printf("\nWOW! You found a long-forgotten hidden treasure chest within the maze!");
                                                katanga_treasure();
                                                printf("\n\nThis is however still a Dead-end!");
                                                printf("\nEnter any button to Return to the last Choice Point in the maze: \n\t==> ");
                                                scanf("%s", &proceed);
                                                if(proceed!= '~')
                                                {
                                                    system("cls");
                                                    katanga_point4F();
                                                    printf("\nReturning to last Choice Point...\n");
                                                    Sleep(500);
                                                    goto point4F;
                                                }
                                                else
                                                {
                                                    system("cls");
                                                    katanga_point4F();
                                                    printf("\nReturning to last Choice Point...\n");
                                                    Sleep(500);
                                                    goto point4F;
                                                }
                                            }                              
                                            else if (dir4F == 'F') //point4F forward
                                            {
                                                printf("\nOops! Dead-end");
                                                printf("\nReturning to last Choice Point...\n");
                                                Sleep(500);
                                                goto point4F;
                                            }
                                            else if (dir4F =='B') //Back
                                            {
                                                system("cls");
                                                katanga_point4E();
                                                printf("\nReturning to last Choice Point...\n");
                                                goto point4E;
                                            }
                                            else if (dir4F == 'X') //exit
                                            {
                                                goto katanga_start;
                                            }
                                            else //point4F else
                                            {
                                                printf("\nERROR! Invalid direction");
                                                goto point4F;
                                            }
                                            }                                        }
                                        else if (dir4E == 'F') //point4E forward
                                        {
                                            printf("\nOops! Dead-end");
                                            printf("\nReturning to last Choice Point...\n");
                                            Sleep(500);
                                            goto point4E;
                                        }
                                        else if (dir4E =='B') //Back
                                        {
                                            system("cls");
                                            katanga_point4D();
                                            printf("\nReturning to last Choice Point...\n");
                                            goto point4D;
                                        }
                                        else if (dir4E == 'X') //exit
                                        {
                                            goto katanga_start;
                                        }
                                        else //point4E else
                                        {
                                            printf("\nERROR! Invalid direction");
                                            goto point4E;
                                        }
                                        }                                    
                                    }
                                    else if (dir4D == 'R') //point4D right
                                    {
                                        printf("\nOops! Dead-end");
                                        printf("\nReturning to last Choice Point...\n");
                                        Sleep(500);
                                        goto point4D;
                                    }
                                    else if (dir4D =='B') //Back
                                    {
                                        system("cls");
                                        katanga_point4C();
                                        printf("\nReturning to last Choice Point...\n");
                                        goto point4C;
                                    }
                                    else if (dir4D == 'X') //exit
                                    {
                                        goto katanga_start;
                                    }
                                    else //point4D else
                                    {
                                        printf("\nERROR! Invalid direction");
                                        goto point4D;
                                    }
                                    }                                
                                }
                                else if (dir4C == 'L') //point4C left
                                {
                                    printf("\nOops! Dead-end");
                                    printf("\nReturning to last Choice Point...\n");
                                    Sleep(500);
                                    goto point4C;
                                }
                                else if (dir4C =='B') //Back
                                {
                                    system("cls");
                                    katanga_point4B();
                                    printf("\nReturning to last Choice Point...\n");
                                    goto point4B;
                                }
                                else if (dir4C == 'X') //exit
                                {
                                    goto katanga_start;
                                }
                                else //point4C else
                                {
                                    printf("\nERROR! Invalid direction");
                                    goto point4C;
                                }
                                }                            
                            }
                            else if (dir4B == 'L') //point4B left
                            {
                                system("cls");
                                katanga_point4Cii();
                                printf("--------------------------------------------------------------\n");
                                printf("\nYou have come to the next Choice Point\n ");
                                point4Cii:
                                {
                                printf("\nSelect a direction: \n"); //At point 4Cii
                                printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                scanf("%s", &dir4Cii);
                                
                                if (dir4Cii == 'L') //point4Cii left
                                {
                                    printf("\nOops! Dead-end");
                                    printf("\nReturning to last Choice Point...\n");
                                    Sleep(500);
                                    goto point4Cii;
                                }
                                else if (dir4Cii == 'R') //point4Cii right
                                {
                                    printf("\nOops! Dead-end");
                                    printf("\nReturning to last Choice Point...\n");
                                    Sleep(500);
                                    goto point4Cii;
                                }
                                else if (dir4Cii =='B') //Back
                                {
                                    system("cls");
                                    katanga_point4B();
                                    printf("\nReturning to last Choice Point...\n");
                                    goto point4B;
                                }
                                else if (dir4Cii == 'X') //exit
                                {
                                    goto katanga_start;
                                }
                                else //point4Ciielse
                                {
                                    printf("\nERROR! Invalid direction");
                                    goto point4Cii;
                                }
                                }
                            }
                            else if (dir4B =='B') //Back
                            {
                                system("cls");
                                katanga_point4A();
                                printf("\nReturning to last Choice Point...\n");
                                goto point4A;
                            }
                            else if (dir4B == 'X') //exit
                            {
                                goto katanga_start;
                            }
                            else //point4B else
                            {
                                printf("\nERROR! Invalid direction");
                                goto point4B;
                            }
                            }                        
                        }
                        else if (dir4A == 'F') //point4A forward
                        {
                            printf("\nOops! Dead-end");
                            printf("\nReturning to last Choice Point...\n");
                            Sleep(500);
                            goto point4A;
                        }
                        else if (dir4A =='B') //Back
                        {
                            system("cls");
                            katanga_point4();
                            printf("\nReturning to last Choice Point...\n");
                            goto point4;
                        }
                        else if (dir4A == 'X') //exit
                        {
                            goto katanga_start;
                        }
                        else //point4A else
                        {
                            printf("\nERROR! Invalid direction");
                            goto point4A;
                        }
                        }   
                    }                 
                    else if (dir4 == 'X') //exit
                    {
                        goto katanga_start;
                    }
                    else if (dir4 =='B')
                    {
                        system("cls");
                        katanga_point3();
                        printf("\nReturning to last Choice Point...\n");
                        goto point3;
                    }
                    else //point4 else
                    {
                        printf("\nERROR! Invalid direction");
                        goto point4;
                    }
                    }
                }
                else if (dir3 == 'F') //point3 forward
                {
                    printf("\nOops! Dead-end");
                    printf("\nReturning to last Choice Point...\n");
                    Sleep(500);
                    goto point3;
                }
                else if (dir3 == 'X') //exit
                {
                    goto katanga_start;
                }
                else if (dir3 =='B')
                {
                    system("cls");
                    katanga_point2();
                    printf("\nReturning to last Choice Point...\n");
                    goto point2;
                }
                else //point3 else
                {
                    printf("\nERROR! Invalid direction");
                    goto point3;
                }
                }
            }
            else if (dir2 == 'F') //point2 forward
            {
                printf("\nOops! Dead-end");
                printf("\nReturning to last Choice Point...\n");
                Sleep(500);
                goto point2;
            }
            else if (dir2 == 'X') //exit
            {
                goto katanga_start;
            }
            else if (dir2 =='B')
            {
                system("cls");
                katanga_point1();
                printf("\nReturning to last Choice Point...\n");
                goto point1;
            }
            else //point2 else
            {
                printf("\nERROR! Invalid direction");
                goto point2;
            }
            }
        }
        else if (dir1 == 'L') //point1 left
        {
            printf("\nOops! Dead-end");
            printf("\nReturning to last Choice Point...\n");
            Sleep(500);
            goto point1;
        }
        else if (dir1 =='B')
        {
            system("cls");
            katanga_point0();
            printf("\nReturning to last Choice Point...\n");
            goto point0;
        }
        else if (dir1 == 'X') //exit
        {
            goto katanga_start;
        }
        else //point1 else
        {
            printf("\nERROR! Invalid direction");
            goto point1;
        }
        }
    }
    else if (dir0 == 'F') //point0 forward
    {
        printf("\nOops! Dead-end");
        printf("\nReturning to last Choice Point...\n");
        Sleep(500);
        goto point0;
    }
    else if (dir0 == 'X') //exit
    {
        goto katanga_start;
    }
    else //point0 else
    {
        printf("\nERROR! Invalid direction");
        goto point0;
    }
    }

    return;
}