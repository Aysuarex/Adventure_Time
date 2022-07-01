/**
 * @file baluba.c
 * @author Suara Ayomide (aysuarex@gmail.com) 
 * 
 * baluba - function that controls all player activities within the baluba maze
 * 
 * @date 2022-06-26
 */

#include <stdio.h>
#include <windows.h>
#include "main.h"

char dir0, dir1, dir2, dir3, dir4, dir5, dir6, dir7, dir8, dir9, dir10, dir11, dir12, dir13;
char dir1A, dir2A, dir3A, dir12A, dir12B;

void baluba()
{
    char map;
    int mode;
    char proceed;
    char direction;

    baluba_start: //Reference Point
    system("cls");
    printf("\n -----------------------------------------------------------------------------\n\n");
    printf("        In the kingdom of Baluba, chaos, noise and pandemonium are normal \n");
    printf("    day-to-day occurences. The residents of this kingdom are barbarians  \n");
    printf("    with no sense of decency. They are also carnibals who enjoy feasting  \n");
    printf("    on poor unsuspecting tourists who visit this supposedly great kingdom.  \n");
    printf("        The locals who noticed your presence amongst them were planning to   \n");
    printf("    attack you in the night while you slept but you overheard their plans   \n");
    printf("    and escaped just before they arrived.    \n");
    printf("        They are however very hot on your trail as they have chased you   \n");
    printf("    into a cornfield maze. Escape this maze quickly before you become meat   \n");
    printf("    for their next bonfire! \n\n\n");
    printf(" -----------------------------------------------------------------------------\n\n");

    Sleep(1000);
    printf("\nYou couldn't possibly know your left from your right,\nbut the satellite map will guide you\n\n\t==> Good Luck!");
    printf("\n\n\nTIPS:");
    printf("\n1. Turn on <caps_lock> ");
    printf("\n2. Maximize the window for full screen view");
    printf("\n3. Enter F, L, R, B or X to navigate within the maze");
    printf("\n\n\nEnter Any Button to Proceed");
    printf("\n\nPress X to exit\n\t\t==>  ");
    scanf("%s", &proceed);
    if (proceed != 'X')
        goto baluba_maze;
    else
    {
        system("cls");
        return;
    }

    baluba_maze:
/*  Maze redrawing labelled with dir_numbers
       aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
  START               0     88888   8888888888888 X 88   \n"
       aaaaaaaaaaaaaa   aaaa8aaa8   8aaa8aaa8aaaa   88   \n"
       88    1A       1           2              2A 88   \n"
       88aaaa   aaaaaaaaaaaaaaaaa   aaaaaaaaaaaaa   88   \n"
       888888   88888888888888888   8888888888888   88   \n"
       88aaa8aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa88   \n"
       88888888888888    3A       3       4     888888   \n"
       88aaa8aaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa8aaa88   \n"
       88    12B    88888   8888888888888   8888888888   \n"
       88aaaa   aaaa8aaa8aaa8aaa8aaa8aaaa   aaaa8aaa88   \n"
       888888 12A   88888   888888888     5     888888   \n"
       88aaaa   aaaaaaaaa   8aaa8aaa8aaaa   aaaa8aaa88   \n"
       88     12         11 88888   88888   8888888888   \n"
       88aaaa   aaaaaaaaa   aaaaa   aaaa8   aaaa8aaa88   \n"
       888888   888888888 10      9 88888 6     888888   \n"
       88aaaa   aaaa8aaa8   aaaaa   aaaaa   aaaa8aaa88   \n"
       88     13    88888   88888   88888   8888888888   \n"
       88aaaa   aaaa8aaa8aaa8aaaa   aaaaa   aaaa8aaa88   \n"
       888888   8888888888888     8       7     888888   \n"
       88aaa8   8aaa8aaa8aaa8aaaaaaaaaaaaaaaaaaa8aaa88   \n"
             END                                         \n"
*/
    system("cls");
    baluba_point0();
    printf("--------------------------------------------------------------\n");
    printf("You are now within the Baluba kingdom Cornfield.");
    printf("\nYou're at your First Choice-Point ");

    point0:
    {
    printf("\nSelect a direction: \n"); //At point 0
    printf("Forward(F), Right(R) or exit maze(X)\n\t\t==> ");
    scanf("%s", &dir0);
    
    if (dir0 == 'R') //point0 right
    {   
        system("cls");
        baluba_point1();
        printf("\nYou have come to the next Choice Point\n ");
        point1:
        {
        printf("\nSelect a direction: \n"); //At point 1
        printf("Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
        scanf("%s", &dir1);
        
        if (dir1 == 'L') //point1 left
        {
            system("cls");
            baluba_point2();
            printf("--------------------------------------------------------------\n");
            printf("\nYou have come to the next Choice Point\n ");
            point2:
            {
            printf("\nSelect a direction: \n"); //At point 2
            printf("Forward(F) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
            scanf("%s", &dir2);
            if (dir2 == 'R') //point2 right
            {
                system("cls");
                baluba_point3();
                printf("--------------------------------------------------------------\n");
                printf("\nYou have come to the next Choice Point\n ");
                point3:
                {
                printf("\nSelect a direction: \n"); //At point 3
                printf("Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                scanf("%s", &dir3);
                
                if (dir3 == 'L') //point3 left
                {
                    system("cls");
                    baluba_point4();
                    printf("--------------------------------------------------------------\n");
                    printf("\nYou have come to the next Choice Point\n ");
                    point4:
                    {
                    printf("\nSelect a direction: \n"); //At point 4
                    printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                    scanf("%s", &dir4);
                    
                    if (dir4 == 'R') //point4 right
                    {
                        system("cls");
                        baluba_point5();
                        printf("--------------------------------------------------------------\n");
                        printf("\nYou have come to the next Choice Point\n ");
                        point5:
                        {
                        printf("\nSelect a direction: \n"); //At point 5
                        printf("Forward(F), Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                        scanf("%s", &dir5);
                        
                        if (dir5 == 'F') //point5 forward
                        {
                            system("cls");
                            baluba_point6();
                            printf("--------------------------------------------------------------\n");
                            printf("\nYou have come to the next Choice Point\n ");
                            point6:
                            {
                            printf("\nSelect a direction: \n"); //At point 6
                            printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                            scanf("%s", &dir6);
                            
                            if (dir6 == 'F') //point6 forward
                            {
                                system("cls");
                                baluba_point7();
                                printf("--------------------------------------------------------------\n");
                                printf("\nYou have come to the next Choice Point\n ");
                                point7:
                                {
                                printf("\nSelect a direction: \n"); //At point 7
                                printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                scanf("%s", &dir7);
                                
                                if (dir7 == 'R') //point7 right
                                {
                                    system("cls");
                                    baluba_point8();
                                    printf("--------------------------------------------------------------\n");
                                    printf("\nYou have come to the next Choice Point\n ");
                                    point8:
                                    {
                                    printf("\nSelect a direction: \n"); //At point 8
                                    printf("Forawrd(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                    scanf("%s", &dir8);
                                    
                                    if (dir8 == 'R') //point8 right
                                    {
                                        system("cls");
                                        baluba_point9();
                                        printf("--------------------------------------------------------------\n");
                                        printf("\nYou have come to the next Choice Point\n ");
                                        point9:
                                        {
                                        printf("\nSelect a direction: \n"); //At point 9
                                        printf("Forward(F), or Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                        scanf("%s", &dir9);
                                        
                                        if (dir9 == 'L') //point9 left
                                        {
                                            system("cls");
                                            baluba_point10();
                                            printf("--------------------------------------------------------------\n");
                                            printf("\nYou have come to the next Choice Point\n ");
                                            point10:
                                            {
                                            printf("\nSelect a direction: \n"); //At point 10
                                            printf("Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                            scanf("%s", &dir10);
                                            
                                            if (dir10 == 'R') //point10 right
                                            {
                                                system("cls");
                                                baluba_point11();
                                                printf("--------------------------------------------------------------\n");
                                                printf("\nYou have come to the next Choice Point\n ");
                                                point11:
                                                {
                                                printf("\nSelect a direction: \n"); //At point 11
                                                printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                                scanf("%s", &dir11);
                                                
                                                if (dir11 == 'L') //point11 left
                                                {
                                                    system("cls");
                                                    baluba_point12();
                                                    printf("--------------------------------------------------------------\n");
                                                    printf("\nYou have come to the next Choice Point\n ");
                                                    point12:
                                                    {
                                                    printf("\nSelect a direction: \n"); //At point 12
                                                    printf("Forward(F), Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                                    scanf("%s", &dir12);
                                                    
                                                    if (dir12 == 'L') //point12 left
                                                    {
                                                        system("cls");
                                                        baluba_point13();
                                                        printf("--------------------------------------------------------------\n");
                                                        printf("\nYou have come to the next Choice Point\n ");
                                                        point13:
                                                        {
                                                        printf("\nSelect a direction: \n"); //At point 13
                                                        printf("Forward(F), Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                                        scanf("%s", &dir13);
                                                        
                                                        if (dir13 == 'F') //point13 forward
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
                                                        else if (dir13 == 'L') //point13 left
                                                        {
                                                            printf("\nOops! Dead-end");
                                                            printf("\nReturning to last Choice Point...\n");
                                                            Sleep(500);
                                                            goto point13;
                                                        }
                                                        else if (dir13 =='B') //Back
                                                        {
                                                            system("cls");
                                                            baluba_point12();
                                                            printf("\nReturning to last Choice Point...\n");
                                                            goto point12;
                                                        }
                                                        else if (dir13 == 'X') //exit
                                                        {
                                                            goto baluba_start;
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
                                                        baluba_point12A();
                                                        printf("--------------------------------------------------------------\n");
                                                        printf("\nYou have come to the next Choice Point\n ");
                                                        point12A:
                                                        {
                                                        printf("\nSelect a direction: \n"); //At point 12A
                                                        printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                                        scanf("%s", &dir12A);
                                                        
                                                        if (dir12A == 'F') //point12A forward
                                                        {
                                                            system("cls");
                                                            baluba_point12B();
                                                            printf("--------------------------------------------------------------\n");
                                                            printf("\nYou have come to the next Choice Point\n ");
                                                            point12B:
                                                            {
                                                            printf("\nSelect a direction: \n"); //At point 12B
                                                            printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                                            scanf("%s", &dir12B);
                                                            
                                                            if (dir12B == 'L') //point12B left
                                                            {
                                                                printf("\nOops! Dead-end");
                                                                printf("\nReturning to last Choice Point...\n");
                                                                Sleep(500);
                                                                goto point12B;
                                                            }                          
                                                            else if (dir12B == 'R') //point12B right
                                                            {
                                                                printf("\nOops! Dead-end");
                                                                printf("\nReturning to last Choice Point...\n");
                                                                Sleep(500);
                                                                goto point12B;
                                                            }
                                                            else if (dir12B =='B') //Back
                                                            {
                                                                system("cls");
                                                                baluba_point12A();
                                                                printf("\nReturning to last Choice Point...\n");
                                                                goto point12A;
                                                            }
                                                            else if (dir12B == 'X') //exit
                                                            {
                                                                goto baluba_start;
                                                            }
                                                            else //point12B else
                                                            {
                                                                printf("\nERROR! Invalid direction");
                                                                goto point12B;
                                                            }
                                                            }
                                                        }
                                                        else if (dir12A == 'R') //point12A right
                                                        {
                                                            printf("\nOops! Dead-end");
                                                            printf("\nReturning to last Choice Point...\n");
                                                            Sleep(500);
                                                            goto point12A;
                                                        }
                                                        else if (dir12A =='B') //Back
                                                        {
                                                            system("cls");
                                                            baluba_point12();
                                                            printf("\nReturning to last Choice Point...\n");
                                                            goto point12;
                                                        }
                                                        else if (dir12A == 'X') //exit
                                                        {
                                                            goto baluba_start;
                                                        }
                                                        else //point12A else
                                                        {
                                                            printf("\nERROR! Invalid direction");
                                                            goto point12A;
                                                        }
                                                        }
                                                    }
                                                    else if (dir12 == 'F') //point10 forward
                                                    {
                                                        printf("\nOops! Dead-end");
                                                        printf("\nReturning to last Choice Point...\n");
                                                        Sleep(500);
                                                        goto point12;
                                                    }
                                                    else if (dir12 =='B') //Back
                                                    {
                                                        system("cls");
                                                        baluba_point11();
                                                        printf("\nReturning to last Choice Point...\n");
                                                        goto point11;
                                                    }
                                                    else if (dir12 == 'X') //exit
                                                    {
                                                        goto baluba_start;
                                                    }
                                                    else //point12 else
                                                    {
                                                        printf("\nERROR! Invalid direction");
                                                        goto point12;
                                                    }
                                                    }
                                                }
                                                else if (dir11 == 'F') //point10 forward
                                                {
                                                    printf("\nOops! Dead-end");
                                                    printf("\nReturning to last Choice Point...\n");
                                                    Sleep(500);
                                                    goto point11;
                                                }
                                                else if (dir11 =='B') //Back
                                                {
                                                    system("cls");
                                                    baluba_point10();
                                                    printf("\nReturning to last Choice Point...\n");
                                                    goto point10;
                                                }
                                                else if (dir11 == 'X') //exit
                                                {
                                                    goto baluba_start;
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
                                                baluba_point9();
                                                printf("\nReturning to last Choice Point...\n");
                                                goto point9;
                                            }
                                            else if (dir10 == 'X') //exit
                                            {
                                                goto baluba_start;
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
                                            goto baluba_start;
                                        }
                                        else if (dir9 =='B')
                                        {
                                            system("cls");
                                            baluba_point8();
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
                                        baluba_point7();
                                        printf("\nReturning to last Choice Point...\n");
                                        goto point7;
                                    }
                                    else if (dir8 == 'X') //exit
                                    {
                                        goto baluba_start;
                                    }
                                    else //point8 else
                                    {
                                        printf("\nERROR! Invalid direction");
                                        goto point8;
                                    }
                                    }
                                }
                                else if (dir7 == 'L') //point7 left
                                {
                                    printf("\nOops! Dead-end");
                                    printf("\nReturning to last Choice Point...\n");
                                    Sleep(500);
                                    goto point7;
                                }
                                else if (dir7 =='B')
                                {
                                    system("cls");
                                    baluba_point6();
                                    printf("\nReturning to last Choice Point...\n");
                                    goto point6;
                                }
                                else if (dir7 == 'X') //exit
                                {
                                    goto baluba_start;
                                }
                                else //point7 else
                                {
                                    printf("\nERROR! Invalid direction");
                                    goto point7;
                                }
                                }
                            }
                            else if (dir6 == 'L') //point6 left
                            {
                                printf("\nOops! Dead-end");
                                printf("\nReturning to last Choice Point...\n");
                                Sleep(500);
                                goto point6;
                            }
                            else if (dir6 =='B')
                            {
                                system("cls");
                                baluba_point5();
                                printf("\nReturning to last Choice Point...\n");
                                goto point5;
                            }
                            else if (dir6 == 'X') //exit
                            {
                                goto baluba_start;
                            }
                            else //point6 else
                            {
                                printf("\nERROR! Invalid direction");
                                goto point6;
                            }
                            }
                        }
                        else if (dir5 == 'L') //point5 left
                        {
                            printf("\nOops! Dead-end");
                            printf("\nReturning to last Choice Point...\n");
                            Sleep(500);
                            goto point5;
                        }
                        else if (dir5 == 'R') //point5 right
                        {
                            printf("\nOops! Dead-end");
                            printf("\nReturning to last Choice Point...\n");
                            Sleep(500);
                            goto point5;
                        }
                        else if (dir5 == 'X') //exit
                        {
                            goto baluba_start;
                        }
                        else if (dir5 =='B')
                        {
                            system("cls");
                            baluba_point4();
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
                    else if (dir4 == 'F') //point4 forward
                    {
                        printf("\nOops! Dead-end");
                        printf("\nReturning to last Choice Point...\n");
                        Sleep(500);
                        goto point4;
                    }
                    else if (dir4 == 'X') //exit
                    {
                        goto baluba_start;
                    }
                    else if (dir4 =='B')
                    {
                        system("cls");
                        baluba_point3();
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
                else if (dir3 == 'R') //point3 right
                {
                    system("cls");
                    baluba_point3A();
                    printf("--------------------------------------------------------------\n");
                    printf("\nYou have come to the next Choice Point\n ");
                    point3A:
                    {
                    printf("\nSelect a direction: \n"); //At point 3A
                    printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                    scanf("%s", &dir3A);
                    
                    if (dir3A == 'L') //point3A left
                    {
                        printf("\nOops! Dead-end");
                        printf("\nReturning to last Choice Point...\n");
                        Sleep(500);
                        goto point3A;
                    }
                    else if (dir3A == 'F') //point3A forward
                    {
                        printf("\nOops! Dead-end");
                        printf("\nReturning to last Choice Point...\n");
                        Sleep(500);
                        goto point3A;
                    }
                    else if (dir3A =='B') //Back
                    {
                        system("cls");
                        baluba_point3();
                        printf("\nReturning to last Choice Point...\n");
                        goto point3;
                    }
                    else if (dir3A == 'X') //exit
                    {
                        goto baluba_start;
                    }
                    else //point3A else
                    {
                        printf("\nERROR! Invalid direction");
                        goto point3A;
                    }
                    }
                }
                else if (dir3 == 'X') //exit
                {
                    goto baluba_start;
                }
                else if (dir3 =='B')
                {
                    system("cls");
                    baluba_point2();
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
            else if (dir2 == 'L') //point2 left
            {
                printf("\nOops! Dead-end");
                printf("\nReturning to last Choice Point...\n");
                Sleep(500);
                goto point2;
            }
            else if (dir2 == 'F') //point2 forward
            {
                system("cls");
                baluba_point2A();
                printf("--------------------------------------------------------------\n");
                printf("\nYou have come to the next Choice Point\n ");
                point2A:
                {
                printf("\nSelect a direction: \n"); //At point 2A
                printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                scanf("%s", &dir2A);
                
                if (dir2A == 'L') //point2A left
                {   //Treasure
                    system("cls");
                    printf("\nWOW! You found the buried treasure chest of the people of Baluba Kingdom");
                    baluba_treasure();
                    printf("\n\nThis is however still a Dead-end!");
                    printf("\nEnter any button to Return to the last Choice Point in the maze: \n\t==> ");
                    scanf("%s", &proceed);
                    if(proceed!= '~')
                    {
                        system("cls");
                        baluba_point2A();
                        printf("\nReturning to last Choice Point...\n");
                        Sleep(500);
                        goto point2A;
                    }
                    else
                    {
                        system("cls");
                        baluba_point2A();
                        printf("\nReturning to last Choice Point...\n");
                        Sleep(500);
                        goto point2A;
                    }
                }
                else if (dir2A == 'R') //point2A right
                {
                    printf("\nOops! Dead-end");
                    printf("\nReturning to last Choice Point...\n");
                    Sleep(500);
                    goto point2A;
                }
                else if (dir2A =='B') //Back
                {
                    system("cls");
                    baluba_point2();
                    printf("\nReturning to last Choice Point...\n");
                    goto point2;
                }
                else if (dir2A == 'X') //exit
                {
                    goto baluba_start;
                }
                else //point2A else
                {
                    printf("\nERROR! Invalid direction");
                    goto point2A;
                }
                }
            }
            else if (dir2 == 'X') //exit
            {
                goto baluba_start;
            }
            else if (dir2 =='B')
            {
                system("cls");
                baluba_point1();
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
        else if (dir1 == 'R') //point1 right
        {
            system("cls");
            baluba_point1A();
            printf("--------------------------------------------------------------\n");
            printf("\nYou have come to the next Choice Point\n ");
            point1A:
            {
            printf("\nSelect a direction: \n"); //At point 1A
            printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
            scanf("%s", &dir1A);
            
            if (dir1A == 'L') //point1A left
            {
                printf("\nOops! Dead-end");
                printf("\nReturning to last Choice Point...\n");
                Sleep(500);
                goto point1A;
            }
            else if (dir1A == 'F') //point1A forward
            {
                printf("\nOops! Dead-end");
                printf("\nReturning to last Choice Point...\n");
                Sleep(500);
                goto point1A;
            }
            else if (dir1A =='B') //Back
            {
                system("cls");
                baluba_point1();
                printf("\nReturning to last Choice Point...\n");
                goto point1;
            }
            else if (dir1A == 'X') //exit
            {
                goto baluba_start;
            }
            else //point1A else
            {
                printf("\nERROR! Invalid direction");
                goto point1A;
            }
            }  
        }      
        else if (dir1 =='B')
        {
            system("cls");
            baluba_point0();
            printf("\nReturning to last Choice Point...\n");
            goto point0;
        }
        else if (dir1 == 'X') //exit
        {
            goto baluba_start;
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
        goto baluba_start;
    }
    else //point0 else
    {
        printf("\nERROR! Invalid direction");
        goto point0;
    }
    }

    return;
}