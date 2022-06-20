
    /*Sleep(1000);
    printf("\nHere's a map of the Mallam's Palace,\n");
    //mallam_map();
    //timer(10);
    printf("You can also access it at any point of the maze\n");
    printf("but you can only use it three times. Use it wisely!\n\n");
    */
    // Remember when you're adding the inner navigations of the maze, 
    // that you also need to include M for Map at any point of the maze

    Sleep(5000);
    /*printf("\n\n\n\nFearless Adventurer, Select a difficulty!\n");
    printf("1: Walk in the Park\n");
    printf("2: Easy Peasy\n");
    printf("3: Normal Mode \n");
    printf("4: Legendary Adventurer!\n\t\t==> ");
    scanf("%d", &mode);

    switch (mode)
    {
    case 1:
        printf("\nAlright, taking it nice and slow, no timer.\n");
        //goto mallam_start;
        break;
    case 2:
        printf("\nEasy Mode Selected. You have 10 minutes!\n");
        Sleep(3000);
        timer_and_map(10);

        break;
    case 3:
        printf("\nNormal Mode Activated. You have 5 minutes!\n");
        Normal: //Reference Point
        Sleep(3000);
        timer_and_map(5);
        //printf("\nTESTING MICROPHONE\n");
        break;
    case 4:
        printf("\nHard Mode Selected. You have 3 minutes!\n");
        Sleep(3000);
        timer_and_map(3);
        break;
    default:
        printf("\nInput ERROR! Invalid choice!\n");
        printf("Normal Mode Automatically selected!\nYou have 5 minutes!\n\n");
        goto Normal;
        break;
    } */


    /*int timer(int m)
{
    int s=00;
    s--;
    time:
    if(s<=00)
        (s=59,m--);
        --s;
    if(m<= 00 && s<= 00)
        return 0;

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTime Left:\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%02d:%02d", m,s);
    Sleep(1000);
    system("cls");
    goto time;
}*/

    /*int mapCount(); //Counts the Number of times map has been used
    {
        int count = 0;

        if (count <=3)
        {
            printf("<<<<< THE MAP GOES HERE  >>>>>");
        }
        else
        {
            printf("You have exceeded your allowed number of Map views. Goodluck!")
        }
        return 0;
    }*/