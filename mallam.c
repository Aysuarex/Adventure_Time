#include <stdio.h>
#include <windows.h>
#include "main.h"
//#include <conio.h>

void mallam_map(); //fuction to draw the map for the mallam maze

char dir0, dir1, dir2, dir3, dir4, dir5, dir6, dir7, dir8, dir9;
char dir2A, dir2B, dir5A, dir6A, dir7A, dir7B;
char dir5Ai, dir5Aii, dir7Bi;


void mallam()
{
    char map;
    int mode;
    char proceed;
    char direction;

    //mallam_proceed: //Reference point
    system("cls");
    printf("\n\t\t\t--------------------------------------------------------------\n");
    printf("\n\n\t\t\tOh NO! The evil Mallam has caught you on the restricted halls\n");
    printf("\t\t\tof his grand Palace and has sent his dogs after you!\n");
    printf("\t\t\tThe halls of his palace are intertwined and confusing.\n");
    printf("\t\t\tOne block always unfortunately leads to another and \n");
    printf("\t\t\teven the residents sometimes don't know their way around.\n");
    printf("\t\t\t Use your adventuring expertise to escape this maze quickly\n");
    printf("\t\t\tbefore the guard dogs sniff you out and strike!\n");
    printf("\n\n\t\t\t--------------------------------------------------------------\n");

    //mallam_start:
    Sleep(1000);
    printf("\n\n\n\n\t==> Good Luck!");
    printf("\n\n\n\nPress Any Button to Proceed: ");
    scanf("%s", &proceed);
    if (proceed != '~')
        goto mallam_maze;
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
888888 5A          5 88888  7Bi   7B 8888888888
88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88
888888   88888aaaa   88888   88888 7A    888888
88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88
88   5Ai 88888     6               7 8888888888
88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88
888888   888888888   8888888888888   88888   88
88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88
888888 5Aii   8888   888888888     8       9 88
88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88
888888 X 88888    6A     88888888888888888   88
88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88
                                           |   
                                          END
*/
    system("cls");
    mallam_map();
    printf("\n--------------------------------------------------------------\n");
    printf("\nYou are now inside the Maze\n");
    //printf("Use the Map!");

    point0:
    {
    printf("Select a direction: \n"); //At point 0
    printf("Forward(F), Left(L) or Right(R) or exit maze(X)\n\t\t==>");
    scanf("%s", &dir0);
    
    if (dir0 == 'R') //point0 right
    {   
        system("cls");
        mallam_map();
        printf("\nYou have come to the next Choice Point\n ");
        point1:
        {
        printf("\nSelect a direction: \n"); //At point 0
        printf("Forward(F), Left(L) or Right(R) or exit maze(X)\n\t\t==>");
        scanf("%s", &dir1);
        
        if (dir1 == 'F') //point1 forward
        {
            system("cls");
            mallam_map();
            printf("\nYou have come to the next Choice Point\n ");
            point2:
            {
            printf("\nSelect a direction: \n"); //At point 0
            printf("Forward(F) or Left(L) or exit maze(X)\n\t\t==>");
            scanf("%s", &dir2);
                        
            if (dir2 == 'L') //point2 left
            {
                printf("\nYou have come to the next Choice Point \n");
                point3:
                {
                printf("Select a direction: \n"); //At point 3
                printf("Left(L) or Right(R) or exit maze(X)\n\t\t==>");
                scanf("%s", &dir3);
                
                if (dir3 == 'R') //point3 right
                {
                    printf("You have come to the next Choice Point ");
                    point4:
                    {
                    printf("Select a direction: \n"); //At point 4
                    printf("Forward(F), Left(L) or exit maze(X)\n\t\t==>");
                    scanf("%s", &dir4);
                    
                    if (dir4 == 'L') //point4 left
                    {
                        printf("You have come to the next Choice Point ");
                        point5:
                        {
                        printf("\nSelect a direction: \n"); //At point 5
                        printf("\nForward(F), Right(R) or exit maze(X)\n\t\t==>");
                        scanf("%s", &dir5);
                        
                        if (dir5 == 'F') //point5 forward
                        {
                            printf("\nYou have come to the next Choice Point ");
                            point6:
                            {
                            printf("\nSelect a direction: \n"); //At point 6
                            printf("\nForward(F), Left(L) or Right(R) or exit maze(X)\n\t\t==>");
                            scanf("%s", &dir6);
                            
                            if (dir6 == 'L') //point6 left
                            {
                                printf("\nYou have come to the next Choice Point ");
                                point7:
                                {
                                printf("\nSelect a direction: \n"); //At point 7
                                printf("\nLeft(L) or Right(R) or exit maze(X)\n\t\t==>");
                                scanf("%s", &dir7);
                                
                                if (dir7 == 'R') //point7 right
                                {
                                    printf("\nYou have come to the next Choice Point ");
                                    point8:
                                    {
                                    printf("\nSelect a direction: \n"); //At point 8
                                    printf("\nLeft(L), Right(R) or exit maze(X)\n\t\t==>");
                                    scanf("%s", &dir8);
                                    
                                    if (dir8 == 'L') //point8 left
                                    {
                                        printf("\nYou have come to the next Choice Point ");
                                        point9:
                                        {
                                        printf("\nSelect a direction: \n"); //At point 9
                                        printf("\nLeft(L) or Right(R) or exit maze(X)\n\t\t==>");
                                        scanf("%s", &dir9);
                                        
                                        if (dir9 == 'R') //point9 right
                                        {
                                            printf("\nCongratulations! You have made it out of the maze!!!");
                                            printf("\n\n\n\nPress Any Button to Proceed: ");
                                            scanf("%s", &proceed);
                                            if (proceed != '~')
                                                main();
                                        }
                                        else if (dir9 == 'L') //point9 left
                                        {
                                            printf("\nOops! Dead-end");
                                            printf("\nReturning to last Choice Point...");
                                            Sleep(500);
                                            goto point9;
                                        }
                                        //Since you cannot go forward
                                        //else if (dir9 == 'F') //point9 forward
                                        //{
                                        //    printf("\nOops! Dead-end");
                                        //    printf("\nReturning to last Choice Point...");
                                        //    Sleep(500);
                                        //    goto point9;
                                        //}
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
                                        printf("\nReturning to last Choice Point...");
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
                                    else //point8 else
                                    {
                                        printf("\nERROR! Invalid direction");
                                        goto point8;
                                    }
                                    }
                                }
                                else if (dir7 == 'L') //point7 left
                                {
                                    printf("\nLeading you astray to point 7A");
                                    //printf("\nReturning to last Choice Point...");
                                    //Sleep(500);
                                    //goto point7;
                                }
                                //Since you cannot go forward
                                //else if (dir7 == 'F') //point7 forward
                                //{
                                //    printf("\nOops! Dead-end");
                                //    printf("\nReturning to last Choice Point...");
                                //    Sleep(500);
                                //    goto point7;
                                //}
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
                                printf("\nReturning to last Choice Point...");
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
                            else //point6 else
                            {
                                printf("\nERROR! Invalid direction");
                                goto point6;
                            }
                            }
                        }
                        else if (dir5 == 'R') //point5 right
                        {
                            printf("\nLeading you astray to point 5A from here");
                            //printf("\nReturning to last Choice Point...");
                            //Sleep(500);
                            //goto point5;
                        }
                        //  Since you cannot go left
                        //else if (dir5 == 'L') //point5 left
                        //{
                        //    printf("\nOops! Dead-end");
                        //    printf("\nReturning to last Choice Point...");
                        //    Sleep(500);
                        //    goto point5;
                        //}
                        else //point0 else
                        {
                            printf("\nERROR! Invalid direction");
                            goto point5;
                        }
                        }
                    }
                    else if (dir4 == 'F') //point4 forward
                    {
                        printf("Oops! Dead-end");
                        printf(" Returning to last Choice Point...");
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
                    else //point4 else
                    {
                        printf("ERROR! Invalid direction");
                        goto point4;
                    }
                    }
                }
                else if (dir3 == 'L') //point3 left
                {
                    printf("Oops! Dead-end");
                    printf(" Returning to last Choice Point...");
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
                else //point0 else
                {
                    printf("ERROR! Invalid direction");
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
                printf("\nTaking you to wrong point 2A, which leads to 2B\n");
                //printf(" Returning to last Choice Point...");
                //Sleep(500);
                //goto point2;
            }
            else //point2 else
            {
                printf("ERROR! Invalid direction");
                goto point2;
            }
            }
        }
        else if (dir1 == 'L') //point1 left
        {
            printf("Oops! Dead-end");
            printf(" Returning to last Choice Point...");
            Sleep(500);
            goto point1;
        }
        else if (dir1 == 'R') //point1 right
        {
            printf("Oops! Dead-end");
            printf(" Returning to last Choice Point...");
            Sleep(500);
            goto point1;
        }
        else //point1 else
        {
            printf("ERROR! Invalid direction");
            goto point1;
        }
        }
    }
    else if (dir0 == 'L') //point0 left
    {
        printf("Oops! Dead-end");
        printf(" Returning to last Choice Point...");
        Sleep(500);
        goto point0;
    }
    else if (dir0 == 'F') //point0 forward
    {
        printf("Oops! Dead-end");
        printf(" Returning to last Choice Point...");
        Sleep(500);
        goto point0;
    }
    else //point0 else
    {
        printf("ERROR! Invalid direction");
        goto point0;
    }
    }


    return;
}



/*
point0:
    {
    printf("\nSelect a direction: \n"); //At point 0
    printf("\nForward(F), Left(L) or Right(R) or exit maze(X)\n\t\t==>");
    scanf("%c", &dir0);
    
    if (dir0 == 'R') //point0 right
    {
        printf("\nYou have come to the next Choice Point ");
        
    }
    else if (dir0 == 'L') //point0 left
    {
        printf("\nOops! Dead-end");
        printf("\nReturning to last Choice Point...");
        Sleep(500);
        goto point0;
    }
    else if (dir0 == 'F') //point0 forward
    {
        printf("\nOops! Dead-end");
        printf("\nReturning to last Choice Point...");
        Sleep(500);
        goto point0;
    }
    else //point0 else
    {
        printf("\nERROR! Invalid direction");
        goto point0;
    }
    }
    */








void mallam_map() 
{
    printf(
        "\n\t\t\t\t\t\t\t\t\t\t\t                                        START        \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t                                          |          \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   888888   88888   8888888888888   88888   888888   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88                                           88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   888888   88888   88888   88888   88888   888888   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88888888888888               888888888888888888   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   888888   888888888   88888   88888   8888888888   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   888888               88888           8888888888   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88       88888                       8888888888   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   888888   888888888   8888888888888   88888   88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   888888       88888   888888888               88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   888888 X 88888           88888888888888888   88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t                                              |      \n"
        "\t\t\t\t\t\t\t\t\t\t\t\t                                             END     \n");
    return;
}