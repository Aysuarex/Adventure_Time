/**
 * @file main.c
 * @author Suara Ayomide (aysuarex@gmail.com)
 * 
 * main -
 * 
 * @date 2022-06-17
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <sys/time.h>
#include "main.h"

char maze;
char name[15];
char choice;
int mode;

void main()
{   
    game_start();
    system("cls");
    system("color 07");
    printf("===================================\n");
    printf("WELCOME TO THE MAZE!\n");
    printf("Enter Adventurer's name: ");
    scanf("%s", &name);
    
    START: //Reference Point
    Sleep(500);
    printf("\n\nWelcome %s, to the Recte-Sapere-Fons Maze of Doom!!!\n", name);
    Sleep(500);
    printf("Select an option:\n");
    printf("1: Quick Play\n");
    printf("2: Story Mode\n\t\t==> ");
    scanf("%s", &mode);
    
    switch (mode)
    {
    case '1': //Quick Play
    {
        Quick_play:
        system("color 07");
        printf("\n\nSelect a location of choice:\n");
        printf("A: Katanga Nation\n");
        printf("B: Baluba Kingdom\n");
        printf("C: Kalakuta Republic\n");
        printf("D: Mallam's Palace\n");
        printf("E: Random\n");
        printf("-------------------------------------\n");
        printf("X: Return to Mode Select\n\t==> ");
        scanf("%s", &maze);

        switch (maze)
        {
        case 'A': //Katanga
        {
            katanga:
            Sleep(500);
            system("cls");
            system("color 0A");
            
            //printf("\n\t-------------------------------------------------------\n\n\n\n");
            katanga_pic();
            //printf("\n\n\n\n\n\t-------------------------------------------------------\n\n\n");
            printf("===============================================================\n");
            printf("\nWelcome %s, to the Mighty Independent Nation of Katanga.\n", name);
            printf("\n===============================================================\n");
            printf("\nA: Proceed (with Caution!)");
            printf("\nX: Get me out of here!\n\t==> ");
            katanga_proceed: //Reference point
            scanf("%s", &choice);

            switch (choice)
            {
            case 'A': //Proceed
                katanga();
                break;
            
            case 'X' : //Exit
                system("cls");
                goto Quick_play;
                break;

            default:
                printf("\n--------------------------------------\n");
                printf("\nERROR! Invalid Choice\n");
                printf("Press A to Proceed into the Palace\n");
                printf("Press X to Go Back\n\t==> ");
                goto katanga_proceed;
                break;
            }
        }        
        case 'B': //Baluba
{
            baluba:
            Sleep(500);
            system("cls");
            system("color 0D");
            
            //printf("\n\t-------------------------------------------------------\n\n\n\n");
            baluba_pic();
            //printf("\n\n\n\n\n\t-------------------------------------------------------\n\n\n");
            printf("\n\n\n===============================================================\n");
            printf("\nWelcome %s, to the Kingdom of Baluba.\n", name);
            printf("\n===============================================================\n");
            printf("\nA: Proceed (with Caution!)\n");
            printf("\nX: Get me out of here!\n\t==> ");
            baluba_proceed: //Reference point
            scanf("%s", &choice);

            switch (choice)
            {
            case 'A': //Proceed
                baluba();
                break;
            
            case 'X' : //Exit
                system("cls");
                goto Quick_play;
                break;

            default:
                printf("\n--------------------------------------\n");
                printf("\nERROR! Invalid Choice\n");
                printf("Press A to Proceed into the Palace\n");
                printf("Press X to Go Back\n\t==> ");
                goto baluba_proceed;
                break;
            }
        }        
        case 'C': //Kalakuta
        {
            kalakuta:
            Sleep(500);
            system("cls");
            system("color 0E");
            
            //printf("\n\t-------------------------------------------------------\n\n\n\n");
            kalakuta_pic();
            //printf("\n\n\n\n\n\t-------------------------------------------------------\n\n\n");
            printf("\n==================================================================\n");
            printf("\nWelcome %s, to the Prestigious Brotherhood: Kalakuta Republic\n", name);
            printf("\n==================================================================\n");
            printf("\nA: Proceed (with Caution!)\n");
            printf("\nX: Get me out of here!\n\t==> ");
            kalakuta_proceed: //Reference point
            scanf("%s", &choice);

            switch (choice)
            {
            case 'A': //Proceed
                kalakuta();
                break;
            
            case 'X' : //Exit
                system("cls");
                goto Quick_play;
                break;

            default:
                printf("\n--------------------------------------\n");
                printf("\nERROR! Invalid Choice\n");
                printf("Press A to Proceed into the Palace\n");
                printf("Press X to Go Back\n\t==> ");
                goto kalakuta_proceed;
                break;
            }
        }
        case 'D': // Mallam
        {
            mallam:
            Sleep(500);
            system("cls");
            system("color 0B");

            //printf("\n\t-------------------------------------------------------\n\n\n\n");
            mallam_pic();
            //printf("\n\n\n\n\n\t-------------------------------------------------------\n\n\n");
            printf("\n===============================================================\n");
            printf("\nWelcome %s, to the Magnificent Castle of the Great Mallam\n", name);
            printf("\n===============================================================\n");
            printf("\nA: Proceed (with Caution!)\n");
            printf("\nX: Get me out of here!\n\t==> ");
            mallam_proceed: //Reference point
            scanf("%s", &choice);

            switch (choice)
            {
            case 'A': //Proceed
                mallam();
                break;
            
            case 'X' : //Exit
                system("cls");
                goto Quick_play;
                break;

            default:
                printf("\n--------------------------------------\n");
                printf("\nERROR! Invalid Choice\n");
                printf("Press A to Proceed into the Palace\n");
                printf("Press X to Go Back\n\t==> ");
                goto mallam_proceed;
                break;
            }
        }

        case 'E':
            printf("\nSelecting Randomly...");
            Sleep(1000);
            srand(time(NULL));
            int n;
            n= rand() % 100;

            if (n >= 0 && n<25)
            {
                goto mallam;
            }
            else if (n >= 25 && n<50)
            {
                goto baluba;
            }
            else if (n >= 50 && n<75)
            {
                goto kalakuta;
            }
            else if (n >= 75 && n<100)
            {
                goto katanga;
            }
            else
            {
                baluba();
            }
            break;

        case 'X':
            system("cls");
            goto START;
            break;
        
        default: //Error
        {
            printf("\n------------------------------------------------------------------\n");
            printf("ERROR! Invalid Location\n");
            printf("Enter A to visit the Independent nation of Katanga in Asia\n");
            printf("Enter B to visit the Great Kingdom of Baluba in Africa\n");
            printf("Enter C to visit the Esteemed Kalakuta Republic in South America\n");
            printf("Enter D to visit The Mighty Mallam's Palace in Europe\n\n");
            Sleep(750);
            goto Quick_play;
            break;
        }
        
        }

    break;
    }


    case '2': //Story Mode
    {
        printf("\nYou chose Story mode.");
        break;
    }


    default: //Not Quick Play or Story Mode
    {
        printf("\nYou have to choose story mode or quick play\n");
        goto START;
        break;
    }
    }

    return;
}