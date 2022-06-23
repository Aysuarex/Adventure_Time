/**
 * @file mallam.c
 * @author Suara Ayomide (aysuarex@gmail.com) 
 * 
 *  mallam -
 * 
 * @date 2022-06-18
 */

#include <stdio.h>
#include <windows.h>
#include "main.h"
//#include <conio.h>

//void mallam_map(); //fuction to draw the map for the mallam maze

char dir0, dir1, dir2, dir3, dir4, dir5, dir6, dir7, dir8, dir9;
char dir2A, dir2B, dir5A, dir5B, dir5C, dir6A, dir7A, dir7B, dir7C;


//You havent done 6A!!!!!!!


void mallam()
{
    char map;
    int mode;
    char proceed;
    char direction;

    mallam_start: //Reference Point
    system("cls");
    printf("\n    ---------------------------------------------------------------------\n\n");
    printf("\tOh NO! The evil Mallam has caught you on the restricted halls\n");
    printf("\tof his grand Palace and has sent his dogs after you!\n");
    printf("\tThe halls of his palace are intertwined and confusing.\n");
    printf("\tOne block always unfortunately leads to another and \n");
    printf("\teven the residents sometimes don't know their way around.\n");
    printf("\t Use your adventuring expertise to escape this maze quickly\n");
    printf("\tbefore the guard dogs sniff you out and strike!\n\n\n");
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
        goto mallam_maze;
    else
        main();
    //Sleep(1000);
    //system("color: 0b");

    mallam_maze:
/*  Maze redrawing labelled with dir_numbers
                                     START     
                                       |       
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa
888888   88888   8888888888888   88888   888888
88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88
88    2B      2A       2       1       0     88
88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88
888888   88888   88888   88888   88888   888888
88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88
88888888888888     4   3     888888888888888888
88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88
888888   888888888   88888   88888   8888888888
88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88
888888 5A          5 88888 7C     7B 8888888888
88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88
888888   88888aaaa   88888   88888 7A    888888
88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88
88    5B 88888     6               7 8888888888
88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88
888888   888888888   8888888888888   88888   88
88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88
888888 5C     8888   888888888     8       9 88
88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88
888888 X 88888    6A     88888888888888888   88
88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88
                                           |   
                                          END
*/
    system("cls");
    mallam_map();
    printf("--------------------------------------------------------------\n");
    printf("The Chase Has Now Begun!");
    printf("\nYou're at your First Choice-Point ");
    //printf("You are now inside the Maze\n");
    //printf("Use the Map!");

    point0:
    {
    printf("\nSelect a direction: \n"); //At point 0
    printf("Forward(F), Left(L) or Right(R) or exit maze(X)\n\t\t==> ");
    scanf("%s", &dir0);
    
    if (dir0 == 'R') //point0 right
    {   
        system("cls");
        mallam_map();
        printf("\nYou have come to the next Choice Point\n ");
        point1:
        {
        printf("\nSelect a direction: \n"); //At point 0
        printf("Forward(F), Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
        scanf("%s", &dir1);
        
        if (dir1 == 'F') //point1 forward
        {
            system("cls");
            mallam_map();
            printf("--------------------------------------------------------------\n");
            printf("\nYou have come to the next Choice Point\n ");
            point2:
            {
            printf("\nSelect a direction: \n"); //At point 0
            printf("Forward(F) or Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
            scanf("%s", &dir2);
            if (dir2 == 'L') //point2 left
            {
                system("cls");
                mallam_map();
                printf("--------------------------------------------------------------\n");
                printf("\nYou have come to the next Choice Point\n ");
                point3:
                {
                printf("\nSelect a direction: \n"); //At point 3
                printf("Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                scanf("%s", &dir3);
                
                if (dir3 == 'R') //point3 right
                {
                    system("cls");
                    mallam_map();
                    printf("--------------------------------------------------------------\n");
                    printf("\nYou have come to the next Choice Point\n ");
                    point4:
                    {
                    printf("\nSelect a direction: \n"); //At point 4
                    printf("Forward(F), Left(L), go Back(B) or exit maze(X)\n\t\t==> ");
                    scanf("%s", &dir4);
                    
                    if (dir4 == 'L') //point4 left
                    {
                        system("cls");
                        mallam_map();
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
                            mallam_map();
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
                                mallam_map();
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
                                    mallam_map();
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
                                        mallam_map();
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
                                            printf("Congratulations! You have made it out of the Mallam's Castle!!!");
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
                                            goto mallam_start;
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
                                        goto mallam_start;
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
                                    mallam_map();
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
                                        mallam_map();
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
                                            mallam_map();
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
                                                goto mallam_start;
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
                                            goto mallam_start;
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
                                        goto mallam_start;
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
                                    goto mallam_start;
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
                                printf("\nLeading you astray to point 6A from here");
                                //printf("\nReturning to last Choice Point...");
                                //Sleep(500);
                                //goto point6;
                            }
                            else if (dir6 =='B')
                            {
                                printf("\nReturning to last Choice Point...\n");
                                goto point5;
                            }
                            else if (dir6 == 'X') //exit
                            {
                                goto mallam_start;
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
                            mallam_map();
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
                                mallam_map();
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
                                    mallam_map();
                                    printf("--------------------------------------------------------------\n");
                                    printf("\nYou have come to the next Choice Point\n ");
                                    point5C:
                                    {
                                    printf("\nSelect a direction: \n"); //At point 5C
                                    printf("Forward(F), Left(L) or Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                                    scanf("%s", &dir5C);
                                    
                                    if (dir5C == 'F') //point5C forward
                                    {   //Treasure
                                        system("cls");
                                        printf("\nWOW! You found the Mallam's Hidden Treasure!");
                                        mallam_treasure();
                                        ("\n\nThis is however still a Dead-end!");
                                        printf("\nEnter any button to Return to the last Choice Point in the maze: \n\t==> ");
                                        scanf("%s", &proceed);
                                        if(proceed!= '~')
                                        {
                                            system("cls");
                                            mallam_map();
                                            printf("\nReturning to last Choice Point...\n");
                                            Sleep(500);
                                            goto point5C;
                                        }
                                        else
                                        {
                                            system("cls");
                                            mallam_map();
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
                                        goto mallam_start;
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
                                    goto mallam_start;
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
                                goto mallam_start;
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
                            goto mallam_start;
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
                    else if (dir4 == 'F') //point4 forward
                    {
                        printf("\nOops! Dead-end");
                        printf("\nReturning to last Choice Point...\n");
                        Sleep(500);
                        goto point4;
                    }
                    //   since you cannot go to the right
                    //   else if (dir4 == 'R') //point4 right
                    //   {
                    //   printf("Oops! Dead-end");
                    //   printf(" Returning to last Choice Point...");
                    //   Sleep(500);
                    //   goto point4;
                    // }
                    else if (dir4 == 'X') //exit
                    {
                        goto mallam_start;
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
                else if (dir3 == 'L') //point3 left
                {
                    printf("\nOops! Dead-end");
                    printf("\nReturning to last Choice Point...\n");
                    Sleep(500);
                    goto point3;
                }
                //Since you cannot go forward
                //else if (dir3 == 'F') //point3 forward
                //{
                //    printf("Oops! Dead-end");
                //    printf(" Returning to last Choice Point...");
                //    Sleep(500);
                //    goto point3;
                //}
                else if (dir3 == 'X') //exit
                {
                    goto mallam_start;
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
            //since you cannot go to the right
            //else if (dir2 == 'R') //point2 right
            //{
            //    printf("Oops! Dead-end");
            //    printf(" Returning to last Choice Point...");
            //    Sleep(500);
            //    goto point2;
            // }
            else if (dir2 == 'F') //point2 forward
            {
                system("cls");
                mallam_map();
                printf("--------------------------------------------------------------\n");
                printf("\nYou have come to the next Choice Point\n ");
                point2A:
                {
                printf("\nSelect a direction: \n"); //At point X
                printf("Forward(F), Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                scanf("%s", &dir2A);
                
                if (dir2A == 'F') //point2A forward
                {
                    system("cls");
                    mallam_map();
                    printf("--------------------------------------------------------------\n");
                    printf("\nYou have come to the next Choice Point\n ");
                    point2B:
                    {
                    printf("\nSelect a direction: \n"); //At point 2B
                    printf("Forward(F), Left(L), Right(R), go Back(B) or exit maze(X)\n\t\t==> ");
                    scanf("%s", &dir2B);
                    
                    if (dir2B == 'L') //point2B left
                    {
                        printf("\nOops! Dead-end");
                        printf("\nReturning to last Choice Point...\n");
                        Sleep(500);
                        goto point2B;
                    }
                    else if (dir2B == 'R') //point2B right
                    {
                        printf("\nOops! Dead-end");
                        printf("\nReturning to last Choice Point...\n");
                        Sleep(500);
                        goto point2B;
                    }
                    else if (dir2B == 'F') //point2B forward
                    {
                        printf("\nOops! Dead-end");
                        printf("\nReturning to last Choice Point...");
                        Sleep(500);
                        goto point2B;
                    }
                    else if (dir2B =='B') //Back
                    {
                        printf("\nReturning to last Choice Point...");
                        goto point2A;
                    }
                    else if (dir2B == 'X') //exit
                    {
                        goto mallam_start;
                    }
                    else //point2B else
                    {
                        printf("\nERROR! Invalid direction");
                        goto point2B;
                    }
                    }
                }
                else if (dir2A == 'R') //point2A right
                {
                    printf("\nOops! Dead-end");
                    printf("\nReturning to last Choice Point...\n");
                    Sleep(500);
                    goto point2A;
                }
                else if (dir2A == 'L') //point2A left
                {
                    printf("\nOops! Dead-end");
                    printf("\nReturning to last Choice Point...");
                    Sleep(500);
                    goto point2A;
                }
                else if (dir2A =='B') //Back
                {
                    printf("\nReturning to last Choice Point...");
                    goto point2;
                }
                else if (dir2A == 'X') //exit
                {
                    goto mallam_start;
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
                goto mallam_start;
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
        else if (dir1 == 'R') //point1 right
        {
            printf("\nOops! Dead-end");
            printf("\nReturning to last Choice Point...\n");
            Sleep(500);
            goto point1;
        }
        else if (dir1 =='B')
        {
            printf("\nReturning to last Choice Point...\n");
            goto point0;
        }
        else if (dir1 == 'X') //exit
        {
            goto mallam_start;
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
        printf("\nOops! Dead-end");
        printf("\nReturning to last Choice Point...\n");
        Sleep(500);
        goto point0;
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
        goto mallam_start;
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
    mallam_map();
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
        mallam_map();
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
        goto mallam_start;
    }
    else //pointX else
    {
        printf("\nERROR! Invalid direction");
        goto pointX;
    }
    }
*/