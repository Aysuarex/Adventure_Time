/**
 * @file kalakuta.c
 * @author Suara Ayomide (aysuarex@gmail.com) 
 * 
 * kalakuta - function that controls all player activities within the kalakuta maze
 * 
 * @date 2022-06-20
 */

#include <stdio.h>
#include <windows.h>
#include "main.h"

char dir0, dir1, dir2, dir3, dir4, dir5, dir6, dir7, dir8, dir9;
char dir0A, dir0B, dir0C, dir0D, dir4A, dir9A, dir9B, dir9C, dir9D, dir9Bii;


void kalakuta()
{
    char map;
    int mode;
    char proceed;
    char direction;

    kalakuta_start: //Reference Point
    system("cls");
    printf("\n-------------------------------------------------------------------------------\n\n");
    printf("     The Kalakuta Republic, because of its small size is a brotherhood.\n");
    printf("  A society of rich, influential men known for its great gates,\n");
    printf("  serene environment and classy occupants. The brotherhood of kalakuta\n");
    printf("  is also popular for their womanising practices and extreme security measures.\n");
    printf("     The porters keep watch during the day and the security marshalls patrol\n");
    printf("  at night. Only members of this great brotherhood are allowed to step foot  \n");
    printf("  within the premises of the society's terrestrial boundaries.\n\n");
    printf("      You've been spotted by the marshalls! You ran into the maze to avoid\n");
    printf("  being captured. Escape this maze quickly to be free of them!!!\n\n");
    printf("-------------------------------------------------------------------------------\n");

    Sleep(1000);
    printf("\n\n\nYou couldn't possibly know your way around the maze,\nbut the satellite map will guide you\n\n\t==> Good Luck!");
    printf("\n\n\nTIPS:");
    printf("\n1. Turn on <caps_lock> ");
    printf("\n2. Maximize the window for full screen view");
    printf("\n3. Enter F, L, R, B or X to navigate within the maze");
    printf("\n\n\nEnter Any Button to Proceed");
    printf("\n\nPress X to exit\n\t\t==>  ");
    scanf("%s", &proceed);
    if (proceed != 'X')
        goto kalakuta_maze;
    else
    {
        system("cls");
        return;
    }

    kalakuta_maze: //Reference Point
/*  Maze redrawing labelled with dir_numbers
    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   
    88     0B          0C     0D   X 88888888888888   
    88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   
    888888   888888888   88888   88888    9Bii   88   
    88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   
    88    0A     888888888   88888   88888   888888   
    88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   
    888888   888888888     9D     9C 88888   888888   
    88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   
START      0     8888888888888    9B      9A 888888   
    aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   
    888888   888888888   888888888     8   9       END
    88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   
    88     1           2     888888888   8888888888   
    88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   
    888888   88888     3     88888     7     888888   
    88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   
    8888888888   88888   88888   88888   8888888888   
    88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   
    888888    4A       4       5       6     888888   
    88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   
*/

    system("cls");
    kalakuta_point0();
    printf("--------------------------------------------------------------\n");
    printf("You are now within the maze");
    printf("\nYou're at your First Choice-Point ");

    point0: //Reference Point
    {
    printf("\nSelect a direction: \n"); //At point 0
    printf("Forward(F), Left(L) or Right(R) or exit maze(X)\n\t\t==> ");
    scanf("%s", &dir0);
    
    if (dir0 == 'R') //point0 right
    {   
        system("cls");
        kalakuta_point1();
        printf("\nYou have come to the next Choice Point\n ");
        point1: //Reference Point
        {
        printf("\nSelect a direction: \n"); //At point 1
        printf("Forward(F), Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
        scanf("%s", &dir1);
        
        if (dir1 == 'L') //point1 left
        {
            system("cls");
            kalakuta_point2();
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
                kalakuta_point3();
                printf("--------------------------------------------------------------\n");
                printf("\nYou have come to the next Choice Point\n ");
                point3: //Reference Point
                {
                printf("\nSelect a direction: \n"); //At point 3
                printf("Forward(F), Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                scanf("%s", &dir3);
                
                if (dir3 == 'F') //point3 forward
                {
                    system("cls");
                    kalakuta_point4();
                    printf("--------------------------------------------------------------\n");
                    printf("\nYou have come to the next Choice Point\n ");
                    point4: //Reference Point
                    {
                    printf("\nSelect a direction: \n"); //At point 4
                    printf("Right(R), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                    scanf("%s", &dir4);
                    
                    if (dir4 == 'L') //point4 left
                    {
                        system("cls");
                        kalakuta_point5();
                        printf("--------------------------------------------------------------\n");
                        printf("\nYou have come to the next Choice Point\n ");
                        point5: //Reference Point
                        {
                        printf("\nSelect a direction: \n"); //At point 5
                        printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                        scanf("%s", &dir5);
                        
                        if (dir5 == 'F') //point5 forward
                        {
                            system("cls");
                            kalakuta_point6();
                            printf("--------------------------------------------------------------\n");
                            printf("\nYou have come to the next Choice Point\n ");
                            point6: //Reference Point
                            {
                            printf("\nSelect a direction: \n"); //At point 6
                            printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                            scanf("%s", &dir6);
                            
                            if (dir6 == 'L') //point6 left
                            {
                                system("cls");
                                kalakuta_point7();
                                printf("--------------------------------------------------------------\n");
                                printf("\nYou have come to the next Choice Point\n ");
                                point7: //Reference Point
                                {
                                printf("\nSelect a direction: \n"); //At point 7
                                printf("Forward(F), Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                scanf("%s", &dir7);
                                
                                if (dir7 == 'F') //point7 forward
                                {
                                    system("cls");
                                    kalakuta_point8();
                                    printf("--------------------------------------------------------------\n");
                                    printf("\nYou have come to the next Choice Point\n ");
                                    point8: //Reference Point
                                    {
                                    printf("\nSelect a direction: \n"); //At point 8
                                    printf("Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                    scanf("%s", &dir8);
                                    
                                    if (dir8 == 'R') //point8 right
                                    {
                                        system("cls");
                                        kalakuta_point9();
                                        printf("--------------------------------------------------------------\n");
                                        printf("\nYou have come to the next Choice Point\n ");
                                        point9: //Reference Point
                                        {
                                        printf("\nSelect a direction: \n"); //At point 9
                                        printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                        scanf("%s", &dir9);
                                        
                                        if (dir9 == 'F') //point9 forward
                                        {
                                            printf("\n\n--------------------------------------------------------------\n");
                                            printf("Congratulations! You have successfully made it out unscathed!");
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
                                        else if (dir9 == 'L') //point9 left
                                        {
                                            system("cls");
                                            kalakuta_point9A();
                                            printf("--------------------------------------------------------------\n");
                                            printf("\nYou have come to the next Choice Point\n ");
                                            point9A: //Reference Point
                                            {
                                            printf("\nSelect a direction: \n"); //At point 9A
                                            printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                            scanf("%s", &dir9A);
                                            
                                            if (dir9A == 'L') //pointX left
                                            {
                                                system("cls");
                                                kalakuta_point9B();
                                                printf("--------------------------------------------------------------\n");
                                                printf("\nYou have come to the next Choice Point\n ");
                                                point9B: //Reference Point
                                                {
                                                printf("\nSelect a direction: \n"); //At point 9B
                                                printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                                scanf("%s", &dir9B);
                                                
                                                if (dir9B == 'R') //point9B right
                                                {
                                                    system("cls");
                                                    kalakuta_point9C();
                                                    printf("--------------------------------------------------------------\n");
                                                    printf("\nYou have come to the next Choice Point\n ");
                                                    point9C: //Reference Point
                                                    {
                                                    printf("\nSelect a direction: \n"); //At point 9C
                                                    printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                                                    scanf("%s", &dir9C);
                                                    
                                                    if (dir9C == 'L') //point9C left
                                                    {
                                                        system("cls");
                                                        kalakuta_point9D();
                                                        printf("--------------------------------------------------------------\n");
                                                        printf("\nYou have come to the next Choice Point\n ");
                                                        point9D: //Reference Point
                                                        {
                                                        printf("\nSelect a direction: \n"); //At point 9D
                                                        printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                                        scanf("%s", &dir9D);
                                                        
                                                        if (dir9D == 'F') //point9D forward
                                                        {
                                                            printf("\nOops! Dead-end");
                                                            printf("\nReturning to last Choice Point...\n");
                                                            Sleep(500);
                                                            goto point9D;
                                                        }
                                                        else if (dir9D == 'R') //point9D right
                                                        {
                                                            printf("\nOops! Dead-end");
                                                            printf("\nReturning to last Choice Point...\n");
                                                            Sleep(500);
                                                            goto point9D;
                                                        }
                                                        else if (dir9D =='B') //Back
                                                        {
                                                            system("cls");
                                                            kalakuta_point9C();
                                                            printf("\nReturning to last Choice Point...\n");
                                                            goto point9C;
                                                        }
                                                        else if (dir9D == 'X') //exit
                                                        {
                                                            goto kalakuta_start;
                                                        }
                                                        else //point9D else
                                                    {
                                                        printf("\nERROR! Invalid direction");
                                                        goto point9D;
                                                    }
                                                        }
                                                    }
                                                    else if (dir9C == 'F') //point9C forward
                                                    {
                                                        printf("\nOops! Dead-end");
                                                        printf("\nReturning to last Choice Point...\n");
                                                        Sleep(500);
                                                        goto point9C;
                                                    }
                                                    else if (dir9C =='B') //Back
                                                    {
                                                        system("cls");
                                                        kalakuta_point9B();
                                                        printf("\nReturning to last Choice Point...\n");
                                                        goto point9B;
                                                    }
                                                    else if (dir9C == 'X') //exit
                                                    {
                                                        goto kalakuta_start;
                                                    }
                                                    else //point9C else
                                                    {
                                                        printf("\nERROR! Invalid direction");
                                                        goto point9C;
                                                    }
                                                    }
                                                }
                                                else if (dir9B == 'F') //point9B forward
                                                {
                                                    printf("\nOops! Dead-end");
                                                    printf("\nReturning to last Choice Point...\n");
                                                    Sleep(500);
                                                    goto point9B;
                                                }
                                                else if (dir9B =='B') //Back
                                                {
                                                    system("cls");
                                                    kalakuta_point9A();
                                                    printf("\nReturning to last Choice Point...\n");
                                                    goto point9A;
                                                }
                                                else if (dir9B == 'X') //exit
                                                {
                                                    goto kalakuta_start;
                                                }
                                                else //point9B else
                                                {
                                                    printf("\nERROR! Invalid direction");
                                                    goto point9B;
                                                }
                                                }    
                                            }
                                            else if (dir9A == 'F') //point9A forward
                                            {
                                                system("cls");
                                                kalakuta_point9Bii();
                                                printf("--------------------------------------------------------------\n");
                                                printf("\nYou have come to the next Choice Point\n ");
                                                point9Bii: //Reference Point
                                                {
                                                printf("\nSelect a direction: \n"); //At point 9Bii
                                                printf("Forward(F), Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                                scanf("%s", &dir9Bii);
                                                
                                                if (dir9Bii == 'L') //point9Bii left
                                                {
                                                    printf("\nOops! Dead-end");
                                                    printf("\nReturning to last Choice Point...\n");
                                                    Sleep(500);
                                                    goto point9Bii;
                                                }
                                                else if (dir9Bii == 'R') //point9Bii right
                                                {
                                                    printf("\nOops! Dead-end");
                                                    printf("\nReturning to last Choice Point...\n");
                                                    Sleep(500);
                                                    goto point9Bii;
                                                }
                                                else if (dir9Bii =='B') //Back
                                                {
                                                    system("cls");
                                                    kalakuta_point9A();
                                                    printf("\nReturning to last Choice Point...\n");
                                                    goto point9A;
                                                }
                                                else if (dir9Bii == 'X') //exit
                                                {
                                                    goto kalakuta_start;
                                                }
                                                else //point9Bii else
                                                {
                                                    printf("\nERROR! Invalid direction");
                                                    goto point9Bii;
                                                }
                                                }
                                            }                                            
                                            else if (dir9A =='B') //Back
                                            {
                                                system("cls");
                                                kalakuta_point9();
                                                printf("\nReturning to last Choice Point...\n");
                                                goto point9;
                                            }
                                            else if (dir9A == 'X') //exit
                                            {
                                                goto kalakuta_start;
                                            }
                                            else //point9A else
                                            {
                                                printf("\nERROR! Invalid direction");
                                                goto point9A;
                                            }
                                            }
                                        }
                                        else if (dir9 == 'X') //exit
                                        {
                                            goto kalakuta_start;
                                        }
                                        else if (dir9 =='B')
                                        {
                                            system("cls");
                                            kalakuta_point8();
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
                                    else if (dir8 == 'L') //point8 left
                                    {
                                        printf("\nOops! Dead-end");
                                        printf("\nReturning to last Choice Point...\n");
                                        Sleep(500);
                                        goto point8;
                                    }
                                    else if (dir8 =='B')
                                    {
                                        system("cls");
                                        kalakuta_point7();
                                        printf("\nReturning to last Choice Point...\n");
                                        goto point7;
                                    }
                                    else if (dir8 == 'X') //exit
                                    {
                                        goto kalakuta_start;
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
                                    printf("\nReturning to last Choice Point...");
                                    Sleep(500);
                                    goto point7;
                                }
                                else if (dir7 == 'R') //point7 right
                                {
                                    printf("\nOops! Dead-end");
                                    printf("\nReturning to last Choice Point...");
                                    Sleep(500);
                                    goto point7;
                                }
                                else if (dir7 =='B')
                                {
                                system("cls");
                                kalakuta_point6();
                                printf("\nReturning to last Choice Point...\n");
                                    goto point6;
                                }
                                else if (dir7 == 'X') //exit
                                {
                                    goto kalakuta_start;
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
                                kalakuta_point5();
                                printf("\nReturning to last Choice Point...\n");
                                goto point5;
                            }
                            else if (dir6 == 'X') //exit
                            {
                                goto kalakuta_start;
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
                            printf("Oops! Dead-end");
                            printf(" Returning to last Choice Point...");
                            Sleep(500);
                            goto point5;
                        }
                        else if (dir5 == 'X') //exit
                        {
                            goto kalakuta_start;
                        }
                        else if (dir5 =='B')
                        {
                            system("cls");
                            kalakuta_point4();
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
                    else if (dir4 == 'R') //point4 right
                    {
                        system("cls");
                        kalakuta_point4A();
                        printf("--------------------------------------------------------------\n");
                        printf("\nYou have come to the next Choice Point\n ");
                        point4A: //Reference Point
                        {
                        printf("\nSelect a direction: \n"); //At point 4A
                        printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                        scanf("%s", &dir4A);
                        
                        if (dir4A == 'F') //point4A forward
                        {
                            printf("\nOops! Dead-end");
                            printf("\nReturning to last Choice Point...\n");
                            Sleep(500);
                            goto point4A;
                        }
                        else if (dir4A == 'R') //pointX right
                        {
                            printf("\nOops! Dead-end");
                            printf("\nReturning to last Choice Point...\n");
                            Sleep(500);
                            goto point4A;
                        }
                        else if (dir4A =='B') //Back
                        {
                            system("cls");
                            kalakuta_point4();
                            printf("\nReturning to last Choice Point...\n");
                            goto point4;
                        }
                        else if (dir4A == 'X') //exit
                        {
                            goto kalakuta_start;
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
                        goto kalakuta_start;
                    }
                    else if (dir4 =='B')
                    {
                        system("cls");
                        kalakuta_point3();
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
                else if (dir3 == 'L') //point3 left
                {
                    printf("\nOops! Dead-end");
                    printf("\nReturning to last Choice Point...\n");
                    Sleep(500);
                    goto point3;
                }
                else if (dir3 == 'R') //point3 right
                {
                    printf("\nOops! Dead-end");
                    printf("\nReturning to last Choice Point...\n");
                    Sleep(500);
                    goto point3;
                }
                else if (dir3 == 'X') //exit
                {
                    goto kalakuta_start;
                }
                else if (dir3 =='B')
                {
                    system("cls");
                    kalakuta_point2();
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
                printf("\nOops! Dead-end");
                printf("\nReturning to last Choice Point...\n");
                Sleep(500);
                goto point2;
            }
            else if (dir2 == 'X') //exit
            {
                goto kalakuta_start;
            }
            else if (dir2 =='B')
            {
                system("cls");
                kalakuta_point1();
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
        else if (dir1 == 'F') //point1 forward
        {
            printf("\nOops! Dead-end");
            printf("\nReturning to last Choice Point...\n");
            Sleep(500);
            goto point1;
        }
        else if (dir1 == 'R') //point1 right
        {
            printf("\nOops! Dead-end");
            printf("\nReturning to last Choice Point...\n");
            Sleep(500);
            goto point1;
        }
        else if (dir1 =='B')
        {
            system("cls");
            kalakuta_point0();
            printf("\nReturning to last Choice Point...\n");
            goto point0;
        }
        else if (dir1 == 'X') //exit
        {
            goto kalakuta_start;
        }
        else //point1 else
        {
            printf("\nERROR! Invalid direction");
            goto point1;
        }
        }
    }
    else if (dir0 == 'L') //point0 left
    {
        system("cls");
        kalakuta_point0A();
        printf("--------------------------------------------------------------\n");
        printf("\nYou have come to the next Choice Point\n ");
        point0A: //Reference Point
        {
        printf("\nSelect a direction: \n"); //At point 0A
        printf("Forward(F), Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
        scanf("%s", &dir0A);
        
        if (dir0A == 'F') //pointX forward
        {
            system("cls");
            kalakuta_point0B();
            printf("--------------------------------------------------------------\n");
            printf("\nYou have come to the next Choice Point\n ");
            point0B: //Reference Point
            {
            printf("\nSelect a direction: \n"); //At point 0B
            printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
            scanf("%s", &dir0B);
            
            if (dir0B == 'R') //pointX right
            {
                system("cls");
                kalakuta_point0C();
                printf("--------------------------------------------------------------\n");
                printf("\nYou have come to the next Choice Point\n ");
                point0C: //Reference Point
                {
                printf("\nSelect a direction: \n"); //At point 0C
                printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                scanf("%s", &dir0C);
                
                if (dir0C == 'F') //point0C forward
                {
                    system("cls");
                    kalakuta_point0D();
                    printf("--------------------------------------------------------------\n");
                    printf("\nYou have come to the next Choice Point\n ");
                    point0D: //Reference Point
                    {
                    printf("\nSelect a direction: \n"); //At point 0D
                    printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                    scanf("%s", &dir0D);
                    
                    if (dir0D == 'F') //point0D forward
                    {   //Treasure
                        system("cls");
                        printf("\nWOW! You found some hidden loot belonging to the Brotherhood!");
                        kalakuta_treasure();
                        printf("\n\nThis is however still a Dead-end!");
                        printf("\nEnter any button to Return to the last Choice Point in the maze: \n\t==> ");
                        scanf("%s", &proceed);
                        if(proceed!= '~')
                        {
                            system("cls");
                            kalakuta_point0D();
                            printf("\nReturning to last Choice Point...\n");
                            Sleep(500);
                            goto point0D;
                        }
                        else
                        {
                            system("cls");
                            kalakuta_point0D();
                            printf("\nReturning to last Choice Point...\n");
                            Sleep(500);
                            goto point0D;
                        }
                    }
                    else if (dir0D == 'R') //point0D right
                    {
                        printf("\nOops! Dead-end");
                        printf("\nReturning to last Choice Point...\n");
                        Sleep(500);
                        goto point0D;
                    }
                    else if (dir0D =='B') //Back
                    {
                        system("cls");
                        kalakuta_point0C();
                        printf("\nReturning to last Choice Point...\n");
                        goto point0C;
                    }
                    else if (dir0D == 'X') //exit
                    {
                        goto kalakuta_start;
                    }
                    else //point0D else
                    {
                        printf("\nERROR! Invalid direction");
                        goto point0D;
                    }
                    }
                }
                else if (dir0C == 'R') //point0C right
                {
                    printf("\nOops! Dead-end");
                    printf("\nReturning to last Choice Point...\n");
                    Sleep(500);
                    goto point0C;
                }
                else if (dir0C =='B') //Back
                {
                    system("cls");
                    kalakuta_point0B();
                    printf("\nReturning to last Choice Point...\n");
                    goto point0B;
                }
                else if (dir0C == 'X') //exit
                {
                    goto kalakuta_start;
                }
                else //point0C else
                {
                    printf("\nERROR! Invalid direction");
                    goto point0C;
                }
                }
            }
            else if (dir0B == 'L') //pointX left
            {
                printf("\nOops! Dead-end");
                printf("\nReturning to last Choice Point...\n");
                Sleep(500);
                goto point0B;
            }
            else if (dir0B =='B') //Back
            {
                system("cls");
                kalakuta_point0A();
                printf("\nReturning to last Choice Point...\n");
                goto point0A;
            }
            else if (dir0B== 'X') //exit
            {
                goto kalakuta_start;
            }
            else //point0B else
            {
                printf("\nERROR! Invalid direction");
                goto point0B;
            }
            }
        }
        else if (dir0A == 'R') //point0A right
        {
            printf("\nOops! Dead-end");
            printf("\nReturning to last Choice Point...\n");
            Sleep(500);
            goto point0A;
        }
        else if (dir0A == 'L') //point0A left
        {
            printf("\nOops! Dead-end");
            printf("\nReturning to last Choice Point...\n");
            Sleep(500);
            goto point0A;
        }
        else if (dir0A =='B') //Back
        {
            system("cls");
            kalakuta_point0();
            printf("\nReturning to last Choice Point...\n");
            goto point0;
        }
        else if (dir0A == 'X') //exit
        {
            goto kalakuta_start;
        }
        else //pointX else
        {
            printf("\nERROR! Invalid direction");
            goto point0A;
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
        goto kalakuta_start;
    }
    else //point0 else
    {
        printf("\nERROR! Invalid direction");
        goto point0;
    }
    }

    return;
}