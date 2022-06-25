/**
 * @file katanga.c
 * @author Suara Ayomide (aysuarex@gmail.com) 
 * 
 * katanga -
 * 
 * @date 2022-06-25
 */

#include <stdio.h>
#include <windows.h>
#include "main.h"

//void katanga_map(); //fuction to draw the map for the katanga maze

char dir0, dir1, dir2, dir3, dir4, dir5, dir6, dir7, dir8, dir9;
char dir2A, dir2B, dir5A, dir5B, dir5C, dir6A, dir7A, dir7B, dir7C;


void katanga()
{
    char map;
    int mode;
    char proceed;
    char direction;

    katanga_start: //Reference Point
    system("cls");
    printf("\n    ---------------------------------------------------------------------\n\n");
    printf("\t Katanga is supposedly a nation of independence, however their practices,\n");
    printf("\t unorthodox living conditions and constant partying has made this great\n");
    printf("\t nation inhabitable to outsiders & tourists such as yourself.\n");
    printf("\t    You tried to interfer and convince the locals against their terrible\n");
    printf("\t way of life but the emperor of Katanga has gotten wind of this and has  \n");
    printf("\t ordered that you be arrested and detained for execution.    RUN!!!!!!! \n\n\n");
    printf("    ---------------------------------------------------------------------\n\n");

    Sleep(1000);
    printf("\n\nYou couldn't possibly know your left from your right,\nbut the map will guide you\n\n\t==> Good Luck!");
    printf("\n\n\nTIPS: \n1. Keeps your Eyes On The Map At All Times");
    printf("\n2. Turn on <caps_lock> ");
    printf("\n3. Maximize the window for full screen view");
    printf("\n4. Type F, L, R, B or X to navigate within the maze");
    printf("\n\n\nEnter Any Button to Proceed");
    printf("\n\nPress X to exit\n\t\t==>  ");
    scanf("%s", &proceed);
    if (proceed != 'X')
        goto katanga_maze;
    else
        main();
    //Sleep(1000);
    //system("color: 0b");

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
    katanga_map();
    printf("--------------------------------------------------------------\n");
    printf("You have found yourself within the Katanga Maze!");
    printf("\nYou're at your First Choice-Point ");
    //printf("You are now inside the Maze\n");
    //printf("Use the Map!");

    point0:
    {
    printf("\nSelect a direction: \n"); //At point 0
    printf("Forward(F), Left(L) or exit maze(X)\n\t\t==> ");
    scanf("%s", &dir0);
    
    if (dir0 == 'L') //point0 left
    {   
        system("cls");
        katanga_map();
        printf("\nYou have come to the next Choice Point\n ");
        point1:
        {
        printf("\nSelect a direction: \n"); //At point 1
        printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
        scanf("%s", &dir1);
        
        if (dir1 == 'F') //point1 forward
        {
            system("cls");
            katanga_map();
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
                katanga_map();
                printf("--------------------------------------------------------------\n");
                printf("\nYou have come to the next Choice Point\n ");
                point3:
                {
                printf("\nSelect a direction: \n"); //At point 3
                printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                scanf("%s", &dir3);
                
                if (dir3 == 'L') //point3 left
                {
                    system("cls");
                    katanga_map();
                    printf("--------------------------------------------------------------\n");
                    printf("\nYou have come to the next Choice Point\n ");
                    point4:
                    {
                    printf("\nSelect a direction: \n"); //At point 4
                    printf("Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                    scanf("%s", &dir4);
                    
                    if (dir4 == 'R') //point4 right
                    {
                        system("cls");
                        katanga_map();
                        printf("--------------------------------------------------------------\n");
                        printf("\nYou have come to the next Choice Point\n ");
                        point5:
                        {
                        printf("\nSelect a direction: \n"); //At point 5
                        printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                        scanf("%s", &dir5);
                        
                        if (dir5 == 'F') //point5 forward
                        {
                            system("cls");
                            katanga_map();
                            printf("--------------------------------------------------------------\n");
                            printf("\nYou have come to the next Choice Point\n ");
                            point6:
                            {
                            printf("\nSelect a direction: \n"); //At point 6
                            printf("Forward(F), Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                            scanf("%s", &dir6);
                            
                            if (dir6 == 'L') //point6 left
                            {
                                system("cls");
                                katanga_map();
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
                                    katanga_map();
                                    printf("--------------------------------------------------------------\n");
                                    printf("\nYou have come to the next Choice Point\n ");
                                    point8:
                                    {
                                    printf("\nSelect a direction: \n"); //At point 8
                                    printf("Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                    scanf("%s", &dir8);
                                    
                                    if (dir8 == 'L') //point8 left
                                    {
                                        system("cls");
                                        katanga_map();
                                        printf("--------------------------------------------------------------\n");
                                        printf("\nYou have come to the next Choice Point\n ");
                                        point9:
                                        {
                                        printf("\nSelect a direction: \n"); //At point 9
                                        printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                        scanf("%s", &dir9);
                                        
                                        if (dir9 == 'R') //point9 right
                                        {
                                            printf("\n\n-----------------------------------------------------------------\n");
                                            printf("Congratulations! You have made it out of the katanga's Castle!!!");
                                            printf("\n-----------------------------------------------------------------");
                                            printf("\n\n\nEnter Any Button to Proceed: ");
                                            scanf("%s", &proceed);
                                            if (proceed != '~')
                                                main();
                                        }
                                        else if (dir9 == 'L') //point9 left
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
                                        //Since you cannot go forward
                                        //else if (dir9 == 'F') //point9 forward
                                        //{
                                        //    printf("\nOops! Dead-end");
                                        //    printf("\nReturning to last Choice Point...");
                                        //    Sleep(500);
                                        //    goto point9;
                                        //}
                                        else if (dir9 =='B')
                                        {
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
                                    else if (dir8 == 'R') //point8 right
                                    {
                                        printf("\nOops! Dead-end");
                                        printf("\nReturning to last Choice Point...\n");
                                        Sleep(500);
                                        goto point8;
                                    }
                                    //Since you cannot go forward
                                    //else if (dir8 == 'F') //point8 forward
                                    //{
                                    //    printf("\nOops! Dead-end");
                                    //    printf("\nReturning to last Choice Point...");
                                    //    Sleep(500);
                                    //    goto point8;
                                    //}
                                    else if (dir8 =='B')
                                    {
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
                                else if (dir7 == 'L') //point7 left
                                {
                                    system("cls");
                                    katanga_map();
                                    printf("--------------------------------------------------------------\n");
                                    printf("\nYou have come to the next Choice Point\n ");
                                    point7A:
                                    {
                                    printf("\nSelect a direction: \n"); //At point 7A
                                    printf("Forward(F), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                    scanf("%s", &dir7A);
                                    
                                    if (dir7A == 'F') //point7A forward
                                    {
                                        system("cls");
                                        katanga_map();
                                        printf("--------------------------------------------------------------\n");
                                        printf("\nYou have come to the next Choice Point\n ");
                                        point7B:
                                        {
                                        printf("\nSelect a direction: \n"); //At point 7B
                                        printf("Forward(F), Left(L) go Back(B) or exit maze(X)\n\t\t==> ");
                                        scanf("%s", &dir7B);
                                        
                                        if (dir7B == 'L') //point7B left
                                        {
                                            system("cls");
                                            katanga_map();
                                            printf("--------------------------------------------------------------\n");
                                            printf("\nYou have come to the next Choice Point\n ");
                                            point7C:
                                            {
                                            printf("\nSelect a direction: \n"); //At point 7C
                                            printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                            scanf("%s", &dir7C);
                                            
                                            if (dir7C == 'L') //point7C left
                                            {
                                                printf("\nOops! Dead-end");
                                                printf("\nReturning to last Choice Point...\n");
                                                Sleep(500);
                                                goto point7C;
                                            }
                                            else if (dir7C == 'R') //point7C right
                                            {
                                                printf("\nOops! Dead-end");
                                                printf("\nReturning to last Choice Point...\n");
                                                Sleep(500);
                                                goto point7C;
                                            }
                                            //Since you cannot go forward
                                            //else if (dir7C == 'F') //point7C forward
                                            //{
                                            //    printf("\nOops! Dead-end");
                                            //    printf("\nReturning to last Choice Point...");
                                            //    Sleep(500);
                                            //    goto point7C;
                                            //}
                                            else if (dir7C =='B') //Back
                                            {
                                                printf("\nReturning to last Choice Point...");
                                                goto point7B;
                                            }
                                            else if (dir7C == 'X') //exit
                                            {
                                                goto katanga_start;
                                            }
                                            else //point7C else
                                            {
                                                printf("\nERROR! Invalid direction");
                                                goto point7C;
                                            }
                                            }                                            
                                        }
                                        else if (dir7B == 'F') //point7B forward
                                        {
                                            printf("\nOops! Dead-end");
                                            printf("\nReturning to last Choice Point...\n");
                                            Sleep(500);
                                            goto point7B;
                                        }
                                        //Since you cannot go right
                                        //else if (dir7B == 'R') //point7B right
                                        //{
                                        //    printf("\nOops! Dead-end");
                                        //    printf("\nReturning to last Choice Point...");
                                        //    Sleep(500);
                                        //    goto point7B;
                                        //}
                                        else if (dir7B =='B') //Back
                                        {
                                            printf("\nReturning to last Choice Point...");
                                            goto point7A;
                                        }
                                        else if (dir7B == 'X') //exit
                                        {
                                            goto katanga_start;
                                        }
                                        else //point7B else
                                        {
                                            printf("\nERROR! Invalid direction");
                                            goto point7B;
                                        }
                                        }
                                    }
                                    else if (dir7A == 'R') //point7A right
                                    {
                                        printf("\nOops! Dead-end");
                                        printf("\nReturning to last Choice Point...\n");
                                        Sleep(500);
                                        goto point7A;
                                    }
                                    //Since you cannot go left
                                    //else if (dir7A == 'L') //point7A left  
                                    //{
                                    //    printf("\nOops! Dead-end");
                                    //    printf("\nReturning to last Choice Point...");
                                    //    Sleep(500);
                                    //    goto point7A;
                                    //}
                                    else if (dir7A =='B') //Back
                                    {
                                        printf("\nReturning to last Choice Point...");
                                        goto point7;
                                    }
                                    else if (dir7A == 'X') //exit
                                    {
                                        goto katanga_start;
                                    }
                                    else //point7A else
                                    {
                                        printf("\nERROR! Invalid direction");
                                        goto point7A;
                                    }
                                    }
                                }
                                //Since you cannot go forward
                                //else if (dir7 == 'F') //point7 forward
                                //{
                                //    printf("\nOops! Dead-end");
                                //    printf("\nReturning to last Choice Point...");
                                //    Sleep(500);
                                //    goto point7;
                                //}
                                else if (dir7 =='B')
                                {
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
                            else if (dir6 == 'R') //point6 right
                            {
                                printf("\nOops! Dead-end");
                                printf("\nReturning to last Choice Point...\n");
                                Sleep(500);
                                goto point6;
                            }
                            else if (dir6 == 'F') //point6 forward
                            {    
                                system("cls");
                                katanga_map();
                                printf("--------------------------------------------------------------\n");
                                printf("\nYou have come to the next Choice Point\n ");
                                point6A:
                                {
                                printf("\nSelect a direction: \n"); //At point 6A
                                printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                scanf("%s", &dir6A);
                                
                                if (dir6A == 'L') //point6A left
                                {
                                    printf("\nOops! Dead-end");
                                    printf("\nReturning to last Choice Point...\n");
                                    Sleep(500);
                                    goto point6A;
                                }
                                else if (dir6A == 'R') //point6A right
                                {
                                    printf("\nOops! Dead-end");
                                    printf("\nReturning to last Choice Point...\n");
                                    Sleep(500);
                                    goto point6A;
                                }
                                //Since you cannot go forward
                                //else if (dir6A == 'F') //point6A forward
                                //{
                                //    printf("\nOops! Dead-end");
                                //    printf("\nReturning to last Choice Point...");
                                //    Sleep(500);
                                //    goto point6A;
                                //}
                                else if (dir6A =='B') //Back
                                {
                                    printf("\nReturning to last Choice Point...");
                                    goto point6;
                                }
                                else if (dir6A == 'X') //exit
                                {
                                    goto katanga_start;
                                }
                                else //point6A else
                                {
                                    printf("\nERROR! Invalid direction");
                                    goto point6A;
                                }
                                }
                            }                       
                            else if (dir6 =='B')
                            {
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
                        else if (dir5 == 'R') //point5 right
                        {
                            system("cls");
                            katanga_map();
                            printf("--------------------------------------------------------------\n");
                            printf("\nYou have come to the next Choice Point\n ");
                            point5A:
                            {
                            printf("\nSelect a direction: \n"); //At point 5A
                            printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                            scanf("%s", &dir5A);
                            
                            if (dir5A == 'L') //point5A left
                            {
                                system("cls");
                                katanga_map();
                                printf("--------------------------------------------------------------\n");
                                printf("\nYou have come to the next Choice Point\n ");
                                point5B:
                                {
                                printf("\nSelect a direction: \n"); //At point 5B
                                printf("Forward(F) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                scanf("%s", &dir5B);
                                
                                if (dir5B == 'F') //point5B forward
                                {
                                    system("cls");
                                    katanga_map();
                                    printf("--------------------------------------------------------------\n");
                                    printf("\nYou have come to the next Choice Point\n ");
                                    point5C:
                                    {
                                    printf("\nSelect a direction: \n"); //At point 5C
                                    printf("Forward(F), Left(L) go Back(B) or exit maze(X)\n\t\t==> ");
                                    scanf("%s", &dir5C);
                                    
                                    if (dir5C == 'F') //point5C forward
                                    {   //Treasure
                                        system("cls");
                                        printf("\nWOW! You found the katanga's Hidden Treasure!");
                                        katanga_treasure();
                                        ("\n\nThis is however still a Dead-end!");
                                        printf("\nEnter any button to Return to the last Choice Point in the maze: \n\t==> ");
                                        scanf("%s", &proceed);
                                        if(proceed!= '~')
                                        {
                                            system("cls");
                                            katanga_map();
                                            printf("\nReturning to last Choice Point...\n");
                                            Sleep(500);
                                            goto point5C;
                                        }
                                        else
                                        {
                                            system("cls");
                                            katanga_map();
                                            printf("\nReturning to last Choice Point...\n");
                                            Sleep(500);
                                            goto point5C;
                                        }
                                    }
                                    else if (dir5C == 'L') //point5C left
                                    {
                                        printf("\nOops! Dead-end");
                                        printf("\nReturning to last Choice Point...\n");
                                        Sleep(500);
                                        goto point5C;
                                    }
                                    //Since you cannot go right
                                    //else if (dir5C == 'R') //point5C right
                                    //{
                                    //    printf("\nOops! Dead-end");
                                    //    printf("\nReturning to last Choice Point...");
                                    //    Sleep(500);
                                    //    goto point5C;
                                    //}
                                    else if (dir5C =='B') //Back
                                    {
                                        printf("\nReturning to last Choice Point...");
                                        goto point5B;
                                    }
                                    else if (dir5C == 'X') //exit
                                    {
                                        goto katanga_start;
                                    }
                                    else //point5C else
                                    {
                                        printf("\nERROR! Invalid direction");
                                        goto point5C;
                                    }
                                    }
                                }
                                else if (dir5B == 'R') //point5B right
                                {
                                    printf("\nOops! Dead-end");
                                    printf("\nReturning to last Choice Point...\n");
                                    Sleep(500);
                                    goto point5B;
                                }
                                //Since you cannot go left
                                //else if (dir5B == 'L') //point5B left
                                //{
                                //    printf("\nOops! Dead-end");
                                //    printf("\nReturning to last Choice Point...");
                                //    Sleep(500);
                                //    goto point5B;
                                //}
                                else if (dir5B =='B') //Back
                                {
                                    printf("\nReturning to last Choice Point...");
                                    goto point5A;
                                }
                                else if (dir5B == 'X') //exit
                                {
                                    goto katanga_start;
                                }
                                else //point5B else
                                {
                                    printf("\nERROR! Invalid direction");
                                    goto point5B;
                                }
                                }
                            }
                            else if (dir5A == 'R') //point5A right
                            {
                                printf("\nOops! Dead-end");
                                printf("\nReturning to last Choice Point...\n");
                                Sleep(500);
                                goto point5A;
                            }
                            //Since you cannot go forward
                            //else if (dir5A == 'F') //point5A forward
                            //{
                            //    printf("\nOops! Dead-end");
                            //    printf("\nReturning to last Choice Point...");
                            //    Sleep(500);
                            //    goto point5A;
                            //}
                            else if (dir5A =='B') //Back
                            {
                                printf("\nReturning to last Choice Point...");
                                goto point5;
                            }
                            else if (dir5A == 'X') //exit
                            {
                                goto katanga_start;
                            }
                            else //point5A else
                            {
                                printf("\nERROR! Invalid direction");
                                goto point5A;
                            }
                            }
                        }
                        //  Since you cannot go left
                        //else if (dir5 == 'L') //point5 left
                        //{
                        //    printf("\nOops! Dead-end");
                        //    printf("\nReturning to last Choice Point...");
                        //    Sleep(500);
                        //    goto point5;
                        //}
                        else if (dir5 == 'X') //exit
                        {
                            goto katanga_start;
                        }
                        else if (dir5 =='B')
                        {
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
                        printf("\nLeading Astray to point 4A");
                    }
                    //   since you cannot go forward
                    //   else if (dir4 == 'F') //point4 forward
                    //   {
                    //   printf("Oops! Dead-end");
                    //   printf(" Returning to last Choice Point...");
                    //   Sleep(500);
                    //   goto point4;
                    // }
                    else if (dir4 == 'X') //exit
                    {
                        goto katanga_start;
                    }
                    else if (dir4 =='B')
                    {
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
                //Since you cannot go to the right
                //else if (dir3 == 'R') //point3 right
                //{
                //    printf("Oops! Dead-end");
                //    printf(" Returning to last Choice Point...");
                //    Sleep(500);
                //    goto point3;
                //}
                else if (dir3 == 'X') //exit
                {
                    goto katanga_start;
                }
                else if (dir3 =='B')
                {
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
            //since you cannot go to the left
            //else if (dir2 == 'L') //point2 left
            //{
            //    printf("Oops! Dead-end");
            //    printf(" Returning to last Choice Point...");
            //    Sleep(500);
            //    goto point2;
            // }
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
                printf("\nReturning to last Choice Point...");
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
        /*since you cannot go to the right
        else if (dir1 == 'R') //point1 right
        {
            printf("\nOops! Dead-end");
            printf("\nReturning to last Choice Point...\n");
            Sleep(500);
            goto point1;
        }*/
        else if (dir1 =='B')
        {
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
    /*Since you cannot go to the right
    else if (dir0 == 'R') //point0 right
    {
        printf("\nOops! Dead-end");
        printf("\nReturning to last Choice Point...\n");
        Sleep(500);
        goto point0;
    }*/
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



/*
    system("cls");
    katanga_map();
    printf("--------------------------------------------------------------\n");
    printf("\nYou have come to the next Choice Point\n ");
    pointX:
    {
    printf("\nSelect a direction: \n"); //At point X
    printf("Forward(F), Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
    scanf("%s", &dirX);
    
    if (dirX == 'L') //pointX left
    {
        system("cls");
        katanga_map();
        printf("--------------------------------------------------------------\n");
        printf("\nYou have come to the next Choice Point\n ");
    }
    else if (dirX == 'R') //pointX right
    {
        printf("\nOops! Dead-end");
        printf("\nReturning to last Choice Point...\n");
        Sleep(500);
        goto point8;
    }
    //Since you cannot go forward
    //else if (dirX == 'F') //point8 forward
    //{
    //    printf("\nOops! Dead-end");
    //    printf("\nReturning to last Choice Point...");
    //    Sleep(500);
    //    goto point8;
    //}
    else if (dirX =='B') //Back
    {
        printf("\nReturning to last Choice Point...");
        goto pointY;
    }
    else if (dirX == 'X') //exit
    {
        goto katanga_start;
    }
    else //pointX else
    {
        printf("\nERROR! Invalid direction");
        goto pointX;
    }
    }
*/