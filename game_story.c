/**
 * @file game_story.c
 * @author Suara Ayomide (aysuarex@gmail.com)
 * 
 * game_start - function for start of game options
 * katanga_story - storyline for the katanga location
 * baluba_story - Storyline for the baluba location
 * kalakuta_story - Storyline for the kalakuta location
 * mallam_story - Storyline for the mallam location
 * 
 * @date 2022-06-29
 * 
 */

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include "main.h"

char button;

void game_start()
{
    char option;
    char choice;

    Beginning:
    system("cls");
    printf("\n      -------------------------------------------------------------------\n");
    printf(
    "        __  __   _   _  ___ __  _ _____ _  _ ___ ___   _____ _ __ __ ___   \n"
    "       /  \\| _\\ | \\ / || __|  \\| |_   _| || | _ \\ __| |_   _| |  V  | __|  \n"
    "      | /\\ | v |`\\ V /'| _|| | ' | | | | \\/ | v / _|    | | | | \\_/ | _|   \n" 
    "      |_||_|__/   \\_/  |___|_|\\__| |_|  \\__/|_|_\\___|   |_| |_|_| |_|___|  \n" 
    );
    printf("\n      -------------------------------------------------------------------\n");
    
    printf("\n\n1: START GAME \n");
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
        printf("\n\t\t-----------------------------------------------------\n");
        printf("\n\t\t            <<<< INSTRUCTIONS >>>>\n");
        printf("\n\t\t-----------------------------------------------------\n");
        printf("\n\n1. It helps to have your <caps_lock> on at all times during the game.");
        printf("\n\n2. Maximize the window for a full screen view and better experience.");
        printf("\n\n3. Within the maze, enter F, R, and L to go Forward, Right and Left\n   respectively.");
        printf("\n\n4. You can also enter B to go back to last choice-point within the maze. ");
        printf("\n\n5. The map provided is a satellite view of the maze as seen from the top;");
        printf("\n   it is not projected from a front point of view. ");

        printf("\n\n\n\nEnter any button to continue: ");
        scanf("%s", &button);
        if (button != '~')
            goto Beginning;
        else
            goto Beginning;

    }
    else if (option == '3')
    {
        system("cls");
        printf("\n\t============================================================\n");
        printf("\n\t                  <<<< ABOUT GAME >>>>\n");
        printf("\n\t------------------------------------------------------------\n");
        printf("\n\n\t  ADVENTURE TIME is a maze-based Adventure Game written");
        printf("\n\n\t  and developed in C programming language in June 2022 by");
        printf("\n\n\t  Ayomide Suara (Aysuarex), just for the fun of it ;)");
        printf("\n\n\n\t============================================================\n");

        printf("\n\n\n\n\nEnter any button to continue: ");
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
    system("cls");
    printf("\n\n--------------------------------------------------------------------------------");
    printf("\n\n      Our first stop is Asia, where we would be visiting dozens of tourist");
    printf("\n  attractions, including but not limited to: the Borobudor Temple, the");
    printf("\n  forbidden city in Beijing, Mount Fuji in Japan, Bangkok, Hoi An in Vietnam,");
    printf("\n  and most importantly, the unpopular Independent nation of Katanga, which");
    printf("\n  is the major highlight of our trip to this beautiful continent.");
    printf("\n\n  Shall we? ");
    printf("\n\n--------------------------------------------------------------------------------");
    
    printf("\n\nEnter any button to continue: ");
    scanf("%s", &button);
    if (button != '~')
    {
        katanga:
        Sleep(500);
        system("cls");
        system("color 0A");
        
        katanga_pic();
        printf("===============================================================\n");
        printf("\n   Welcome, to the Mighty Independent Nation of Katanga.\n");
        printf("\n===============================================================\n");
        printf("\n\nEnter any button to continue: ");
        scanf("%s", &button);
        if (button != '~')
        {
            katanga();
        }
        else
        {
            katanga();
        }
    }
    else
    {
        katanga();
    }
    baluba_story();
    return;
}

void baluba_story()
{
    system("cls");
    printf("\n\n--------------------------------------------------------------------------------");
    printf("\n\n      Welcome Doc, we could see that you ran into a bit of a hiccup with");
    printf("\n  the soldiers of Katanga Nation; but that's fine. We still have");
    printf("\n  quite the journey ahead of us.");
    printf("\n  Shall we proceed with our expedition?");
    printf("\n      Next up, we shall be taking a trip to Africa, where we would be");
    printf("\n  opportuned to visit prominent cities such as Lagos in Nigera, Cairo in Egypt");
    printf("\n  and some great monarchies such as the Kingdom of Morocco, the Kingdom of");
    printf("\n  Eswatini, the Kingdom of Lesotho and Baluba Kingdom.");
    printf("\n      I'm sure you're just as stoked as I am for what lies ahead.");
    printf("\n\n  Are you Ready? ");
    printf("\n\n--------------------------------------------------------------------------------");

    printf("\n\nEnter any button to continue: ");
    scanf("%s", &button);
    if (button != '~')
    {
        baluba:
        Sleep(500);
        system("cls");
        system("color 0D");
        
        baluba_pic();
        printf("\n\n\n===============================================================\n");
        printf("\nWelcome, to the Kingdom of Baluba.\n");
        printf("\n===============================================================\n");
        printf("\n\nEnter any button to continue: ");
        scanf("%s", &button);
        if (button != '~')
        {
            baluba();
        }
        else
        {
            baluba();
        }
    }
    else
    {
        baluba();
    }
    kalakuta_story();
    return;
}

void kalakuta_story()
{
    system("cls");
    printf("\n\n--------------------------------------------------------------------------------");
    printf("\n\n      WOW, we're so sorry and beyond embarrased that you had to experience");
    printf("\n  something like that a second time. We were not aware that the Baluba citizens");
    printf("\n  had a taste for human meat! I'm glad you escaped them unhurt. Rest assured");
    printf("\n  that the appropriate authorities will be informed of these acts of ");
    printf("\n  carnibalism. Once again, we're very sorry about that.");
    printf("\n      Nevertheless, we won't let this ruin the rest of our tour. We still have");
    printf("\n  so much planned for you in two more continents. We shall be heading to South");
    printf("\n  America now, where we'd have the chance to explore different landmarks, the");
    printf("\n  people, their foods, ways of life, and societies");
    printf("\n      This will start from Machu Piccu in Peru, through the Iguazu Falls in");
    printf("\n  Argentina and several other tourist attractions in South America to the");
    printf("\n  Galapagos Islands in Ecuador and conclude finally with a close-up view of the");
    printf("\n  Prestigious Kalakuta Republic (However, we won't be going in there since they");
    printf("\n  don't seem to like visitors).");
    printf("\n\n  Alright, 'No rest for the wicked'. Let's go!\n");
    printf("\n\n--------------------------------------------------------------------------------");

    printf("\n\nEnter any button to continue: ");
    scanf("%s", &button);
    if (button != '~')
    {
        Sleep(500);
        system("cls");
        system("color 0E");
        
        kalakuta_pic();
        printf("\n==================================================================\n");
        printf("\nWelcome, to the Prestigious Brotherhood: Kalakuta Republic\n");
        printf("\n==================================================================\n");
        printf("\n\nEnter any button to continue: ");
        scanf("%s", &button);
        if (button != '~')
        {
            kalakuta();
        }
        else
        {
            kalakuta();
        }
    }
    else
    {
        kalakuta();
    }
    mallam_story();
    return;
}

void mallam_story()
{
    system("cls");
    printf("\n\n--------------------------------------------------------------------------------");
    printf("\n\n      Doctor, I still don't understand how we lost you. We were petrified");
    printf("\n  when we learnt that you had wandered off into the Kalakuta Republic! I'm so");
    printf("\n  glad that you are fine");
    printf("\n      Don't worry, our adventure is coming to an end soon. The last continent");
    printf("\n  on the list now is Europe. We're going home! We shall be seeing some major");
    printf("\n  landmarks here as well, such as the Eiffel Tower in France, the Colosseum");
    printf("\n  in Rome, La Sagrada Familia in Barcelona, the Acropolis of Athens, the ");
    printf("\n  leaning Tower of Pisa, the Vatican Museums and we are also privileged to");
    printf("\n  to visit two Royal Castles: The Buckingham Palace in England, and lastly the");
    printf("\n  Grand Castle of the Prestigious Mallam.");
    printf("\n     I honestly don't see how you could possibly get into any form of trouble");
    printf("\n  in these places. I know you must be very traumatised after everything that");
    printf("\n  just happened, but be assured there is no cause for alarm here. ");
    printf("\n\n  Will you be joining us?");
    printf("\n\n--------------------------------------------------------------------------------");

    printf("\n\n\nEnter any button to continue: ");
    scanf("%s", &button);
    if (button != '~')
    {
        mallam:
        Sleep(500);
        system("cls");
        system("color 0B");

        mallam_pic();
        printf("\n===============================================================\n");
        printf("\nWelcome, to the Magnificent Castle of the Great Mallam\n");
        printf("\n===============================================================\n");
        printf("\n\nEnter any button to continue: ");
        scanf("%s", &button);
        if (button != '~')
        {
            mallam();
        }
        else
        {
            mallam();
        }
    }
    else
    {
        mallam();
    }

    return;
}