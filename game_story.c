/**
 * @file game_story.c
 * @author Suara Ayomide (aysuarex@gmail.com)
 * 
 * @brief 
 * 
 * @date 2022-06-29
 * 
 */

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include "main.h"


void game_start()
{
    char option;
    char button;

    Beginning:
    system("cls");

    printf("\n\t\t-----------------------------------------------------\n");
    printf("\n\t\t  <<<<<  ADVENTURE TIME ASCII ART GOES HERE  >>>>>>");
    printf("\n\t\t-----------------------------------------------------\n");
    
    printf("\n1: START GAME \n");
    printf("\n2: INSTRUCTIONS \n");
    printf("\n3: ABOUT GAME \n");
    printf("\n4: EXIT \n\t\t==> ");
    option:
    scanf("%s", &option);

    if(option == '1')
    {
        return;
    }
    else if (option == '2')
    {
        system("cls");
        printf("\n\t\tINSTRUCTIONS:");
        printf("\n1. It helps to have your <caps_lock> on at all times during the game");
        printf("\n2. Maximaixe the window for a full screen view and better experience");
        printf("\n3. Within the maze, enter F, R, and L to go Forward,\n    Right and Left respectively");
        printf("\n4. You can also enter B to go back to last choice-point within the maze ");
        printf("\n5. The map provided is a satellite view of the maze as seen from the top,");
        printf("\nit is not projected from a front point of view ");

        printf("\n\nEnter any button to continue: ");
        scanf("%s", &button);
        if (button != '~')
            goto Beginning;
        else
            goto Beginning;

    }
    else if (option == '3')
    {
        system("cls");
        printf("\n\t\tABOUT GAME:");
        printf("\nADVENTURE TIME is a maze-based adventure game written and ");
        printf("\ndeveloped in C programming language in June 2022,");
        printf("\nAyomide Suara (Aysuarex), just for the fun of it.");

        printf("\n\nEnter any button to continue: ");
        scanf("%s", &button);
        if (button != '~')
            goto Beginning;
        else
            goto Beginning;

    }
    else if (option == '4')
    {
        exit(0);
    }
    else
    {
        printf("\nYou need to choose 1, 2, 3 or 4\n\t\t==> ");
        goto option;
    }

    return;
}

void katanga_story()
{

    return;
}

void baluba_story()
{

    return;
}

void kalakuta_story()
{

    return;
}

void mallam_story()
{

    return;
}