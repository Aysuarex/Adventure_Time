#include <stdio.h>
#include <windows.h>
#include <string.h>
#include "main.h"

char maze;
char name[15];
char choice;


//int timer(); //Timer for timed mode


void main()
{   
    system("cls");
    printf("===================================\n");
    printf("WELCOME TO THE MAZE!\n");
    printf("Enter Adventurer's name: ");
    scanf("%s", &name);
    
    START:
    Sleep(500);
    printf("\n\nWelcome, %s to the Recte-Sapere-Fons Maze of Doom!!!\n", name);
    Sleep(500);
    printf("Select a location of choice:\n");
    printf("A: Katanga Nation\n");
    printf("B: Baluba Kingdom\n");
    printf("C: Kalakuta Republic\n");
    printf("D: Mallam's Palace\n\t==> ");
    scanf("%s", &maze);

    switch (maze)
    {
    case 'A':
        goto Mallam;
        //katanga();
        break;
    case 'B':
        goto Mallam; 
        //baluba();
        break;
    case 'C':
        goto Mallam;
        //kalakuta();
        break;
    case 'D':
        Mallam:
        Sleep(500);
        system("cls");

        printf("\n=========================================================\n");
        printf("Welcome to the Magnificent Palace of the great Mallam\n");
        printf("A: Proceed (with Caution!)\n");
        printf("X: Get me out of here!\n\t==> ");
        
        
        mallam_proceed: //Reference point
        scanf("%s", &choice);

        switch (choice)
        {
        case 'A':
            mallam();
            break;
        
        case 'X' :
            goto START;
            break;

        default:
            printf("\nERROR! Invalid Choice\n");
            printf("Press A to Proceed into the Palace\n");
            printf("Press X to Go Back\n\t==> ");
            goto mallam_proceed;
            break;
        }

            //Move that part of the mallam function
            //Move it here
            //The part that says A to proceed and X to leave 
            break;
        default:
            printf("ERROR! Invalid Location\n");
            printf("Enter A to visit the Independent nation of Kalakuta in Asia\n");
            printf("Enter B to visit the Great Kingdom of Baluba in Africa\n");
            printf("Enter C to visit the Esteemed Kalakuta Republic in South Ameica\n");
            printf("Enter D to visit The Mighty Mallam's Palace in Europe\n\n");
            Sleep(750);
            goto START;
            break;
    }

    return;
}

int timer(int m)
{
    int s=00;
    s--;
    time:
    if(s<=00)
        (s=59,m--);
    if(m<= 00 && s<= 00)
        return 0;

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTime Left:\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%02d:%02d", m,s);
    Sleep(1000);
    goto time;
}

    /*int mapCount(); //Counts the Number of times map has been used
    {
        int count = 0;

        if (count <=3)
        {
            printf("// THE MAP GOES HERE");
        }
        else
        {
            printf("You have exceeded your allowed number of Map views. Goodluck!")
        }
        return 0;
    }*/