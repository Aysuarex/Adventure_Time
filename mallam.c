#include <stdio.h>
#include <windows.h>
#include "main.h"

void mallam_map(); //fuction to draw the map for the mallam maze

void mallam()
{
    char map;
    int mode;
    char direction;

    //mallam_proceed: //Reference point
    printf("\n\t\t\t--------------------------------------------------------------\n");
    printf("\n\n\t\t\tOh NO! The evil Mallam has caught you on the restricted halls\n");
    printf("\t\t\tof his grand Palace and has sent his dogs after you!\n");
    printf("\t\t\tThe halls of his palace are intertwined and confusing.\n");
    printf("\t\t\tOne block always unfortunately leads to another and \n");
    printf("\t\t\teven the residents sometimes don't know their way around.\n");
    printf("\t\t\t Use your adventuring expertise to escape this maze quickly\n");
    printf("\t\t\tbefore the guard dogs sniff you out and strike!\n");
    printf("\n\n\t\t\t--------------------------------------------------------------\n");

    Sleep(1000);
    printf("\nHere's a map of the Mallam's Palace,\n");
    mallam_map();
    printf("You can also access it at any point of the maze\n");
    printf("but you can only use it three times. Use it wisely!\n\n");

    // Remember when you're adding the inner navigations of the maze, 
    // that you also need to include M for Map at any point of the maze

    Sleep(5000);
    printf("Fearless Adventurer, Select a difficulty!\n");
    printf("1: Walk in the Park\n");
    printf("2: Easy Peasy\n");
    printf("3: Normal Mode \n");
    printf("4: Legendary Adventurer\n\t\t==> ");
    scanf("%d", &mode);

    switch (mode)
    {
    case 1:
        printf("\nAlright, taking it nice and slow, no timer.\n");
        //goto mallam_start;
        break;
    case 2:
        printf("\nEasy Mode Selected. You have 10 minutes!\n");
        timer(10);

        break;
    case 3:
        printf("\nNormal Mode Activated. You have 5 minutes!\n");
        timer(5);
        Normal: //Reference Point
        //printf("\nTESTING MICROPHONE\n");
        break;
    case 4:
        printf("\nEasy Mode Selected. You have 3 minutes!\n");
        timer(3);
        break;
    default:
        printf("\nInput ERROR! Invalid choice!\n");
        printf("Normal Mode Automatically selected!\n\n");
        goto Normal;
        break;
    }

    //mallam_start:
    printf("\nGood Luck!");
    /*Sleep(1000);
    system("cls");
    //system("color: 0b");
    printf("Select a direction: \n");
    printf("Forward(F), Left(L) or Right(R)\n");
    scanf("%c", &direction);*/

    
    return;
}


void mallam_map() 
{
    int count = 0;

    if (count <=3)
    {
        printf("\n<< THE MAP DRAWING GOES HERE>>\n\n");
    }
    else
    {
        printf("You have exceeded your allowed number of Map views. Goodluck!\n");
    }
    return;
}