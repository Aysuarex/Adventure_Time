#include <stdio.h>

void main()
{
    /*
    MAZE 1:
    printf(
    "                                          |          \n"
    "   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "   888888 X 888888888   88888888888888888 | 888888   \n"
    "   88aaa8   8aaa8aaa8   8aaa8aaa8aaa8aaa8   8aaa88   \n"
    "   88                          <         <      88   \n"
    "   88aaaaaaaaaaaaaaaaaaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "   888888   88888   88888 | 8888888888888   888888   \n"
    "   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "   88888888888888       <       888888888888888888   \n"
    "   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "   888888   888888888 | 88888   88888   8888888888   \n"
    "   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "   888888               88888           8888888888   \n"
    "   88aaa8   aaaa8aaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "   888888   88888aaaa | 88888   88888           88   \n"
    "   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "   88       88888          >       >    8888888888   \n"
    "   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "   888888   888888888   8888888888888 | 88888   88   \n"
    "   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "   888888       88888   888888888        >      88   \n"
    "   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "   888888   88888           88888888888888888 | 88   \n"
    "   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "                                              |      \n"
    );
    */
    /*
    MAZE2:
    printf(
    "   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "  <      <       <  8888888888888888888888888   88   \n"
    "   aaaaaaaaaaaaaa   aaaa8aaa8aaa8aaa8aaa8aaaa   88   \n"
    "   88                   <                       88   \n"
    "   88aaaa   aaaaaaaaaaaaaaaaa   aaaaaaaaaaaaa   88   \n"
    "   888888   88888888888888888 | 8888888888888 X 88   \n"
    "   88aaa8aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa88   \n"
    "   88888888888888                 <        8888888   \n"
    "   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa8aaa88   \n"
    "   88           88888   8888888888888 | 8888888888   \n"
    "   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaaa   aaaa8aaa88   \n"
    "   888888       88888888888888888           888888   \n"
    "   88aaaa   aaaaaaaaa   8aaa8aaa8aaaa   aaaa8aaa88   \n"
    "   88           >       88888   88888 | 8888888888   \n"
    "   88aaaa   aaaaaaaaa   aaaaa   aaaa8   aaaa8aaa88   \n"
    "   888888 | 888888888     >     88888       888888   \n"
    "   88aaaa   aaaa8aaa8   aaaaa   aaaaa   aaaa8aaa88   \n"
    "   88           88888   88888 | 88888 | 8888888888   \n"
    "   88aaaa | aaaa8aaa8aaa8aaaa   aaaaa   aaaa8aaa88   \n"
    "   888888   8888888888888         >         888888   \n"
    "   88aaa8   8aaa8aaa8aaa8aaaaaaaaaaaaaaaaaaa8aaa88   \n"
    "          |                                          \n"
    );
    */
    /*
    MAZE3:
    printf(
    "   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "   88                             X 88888888888888   \n"
    "   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "   888888   888888888   88888   88888           88   \n"
    "   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "   88           888888888   88888   88888   888888   \n"
    "   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "   888888   888888888               88888   888888   \n"
    "   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "  >     >        888888888888               888888   \n"
    "   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "   888888 | 888888888888888888888     >     >     >  \n"
    "   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "   88           >           888888888 | 8888888888   \n"
    "   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "   888888   88888           88888           888888   \n"
    "   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "   8888888888   88888 | 88888   88888 | 8888888888   \n"
    "   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "   888888                 >         >       888888   \n"
    "   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n"
    );
    */
    /*
    MAZE4:
    printf(
    "   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "   888888                                       88   \n"
    "   88aaa8aaa8   8aaa8aaa8aaa8   8aaa8aaa8   8aaa88   \n"
    "   88   88888   88888   88888   888888888   888888   \n"
    "   88   8aaa8   8aaa8   8aaa8aaa8aaa8aaa8   8aaa88   \n"
    "   88           88888       <       88888     X 88   \n"
    "   88   8aaa8   8aaa8   8aaa8   8aaa8aaa8   8aaa88   \n"
    "   88   88888   88888 | 88888 | 888888888   888888   \n"
    "   88aaa8aaa8   8aaa8   8aaa8   8aaa8aaa8aaa8aaa88   \n"
    "   888888         <        88    <       <      88   \n"
    "   88aaa8aaa8aaa8   8aaa8aaa8   8aaa8aaa8   8aaa88   \n"
    "   888888   88888 | 888888888   888888888   888888   \n"
    "   88aaa8   8aaa8   8aaa8aaa8aaa8aaa8aaa8   8aaa88   \n"
    "   888888      <        888888888   88888 |     88   \n"
    "   88aaa8   8aaa8aaa8aaa8aaa8aaaa   8aaa8   8aaa88   \n"
    "   88     | 88888888888888888       88888       88   \n"
    "   88aaa8   8aaa8aaa8aaa8aaa8aaaa   aaaaa   8aaa88   \n"
    "   888888 | 888888888                     | 888888   \n"
    "   88aaa8   8aaa8aaa8aaa8   8aaa8aaa8aaa8   8aaa88   \n"
    "  <     <      888888888   8aaa8aaa8      <     <    \n"
    "   aaaaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaaaa   \n"
    );
    */
    /*
    printf("\t\t\t88888888888888888888888888888888888888888888888888888888888888888888888\n");
    printf("\t\t\t88.._|      | '-.  | '.  -_-_ _-_  _-  _- -_ -  .'|   |.'|     |  _..88\n");
    printf("\t\t\t88   '-.._  |    |'!  |'.  -_ -__ -_ _- _-_-  .'  |.;'   |   _.!-'|  88\n");
    printf("\t\t\t88      | '-!._  |  ';!  ;. _______________ ,'| .-' |   _!.i'     |  88\n");
    printf("\t\t\t88..__  |     |'-!._ | '.| |_______________||.''|  _!.;'   |     _|..88\n");
    printf("\t\t\t88   |''..__ |    |'';.| i |_|MMMMMMMMMMM|_|| _!-|   |   _|..-  |    88\n");
    printf("\t\t\t88   |      |''--..|_ | ';!|l|MMoMMMMoMMM|l|.'j   |_..!-'|     |     88\n");
    printf("\t\t\t88   |      |    |   |'-,!_|_|MMMMP'YMMMM|_||.!-;'  |    |     |     88\n");
    printf("\t\t\t88___|______|____!.,.!,.!,!|d|MMMo * loMM|p|,!,.!.,.!..__|_____|_____88\n");
    printf("\t\t\t88      |     |    |  |  | |_|MMMMb,dMMMM|_|| |   |   |    |      |  88\n");
    printf("\t\t\t88      |     |    |..!-;'i|r|MPYMoMMMMoM|r| |'-..|   |    |      |  88\n");
    printf("\t\t\t88      |    _!.-j'  | _!,'|_|M<>MMMMoMMM|_||!.__|  i-!.._ |      |  88\n");
    printf("\t\t\t88     _!.-'|    | _.'|  !;|1|MbdMMoMMMMM|l|'.| '-._|    |''-.._  |  88\n");
    printf("\t\t\t88..-i'     |  _.''|  !-| !|_|MMMoMMMMoMM|_|.|'-. | ''._ |     |'''..88\n");
    printf("\t\t\t88   |      |.|    |.|  !| |u|MoMMMMoMMMM|n||'. |'!   | ''.    |     88\n");
    printf("\t\t\t88   |  _.-'  |  .'  |.' |/|_|MMMMoMMMMoM|_|! |'!  ',.|    |-._|     88\n");
    printf("\t\t\t88  _!''|     !.'|  .'| .'|[@]MMMMMMMMMMM[@] \\|  '. | '._  |   '-._' 88\n");
    printf("\t\t\t88-'    |   .'   |.|  |/| /                 \\|'.  |'!    |.|      |' 88\n");
    printf("\t\t\t88      |_.'|   .' | .' |/                   \\  \\ |  '.  | '._   |   88\n");
    printf("\t\t\t88     .'   | .'   |/|  /                     \\ |'!   |'.|    '.  |  88\n");
    printf("\t\t\t88  _.'     !'|   .' | /                       \\|  '  |  '.    |'.|  88\n");
    printf("\t\t\t888888888888888888888888888888888888888888888888888888888888888888888888\n");

    printf("\n\t\t---------------------------------------------------------------------------\n");
*/
/*
    printf("\t\t\taaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa | a\n");
    printf("\t\t\t8   8       <       8 <      <      8           8      <            8   8\n");
    printf("\t\t\t8   8 | aaaaaaaaa | 8   aaaaa   aaaa8aaaa   aaaa8 | aaaaa   aaaaa   8 | 8\n");
    printf("\t\t\t8        >      8     < 8   8  <      < 8           8   8 | 8       8   8\n");
    printf("\t\t\t8aaaaaaaa   a |  8aaaaaaa8   8aaaaaaaa   8aaaa   a   8   8   8aaaaaaa8   8\n");
    printf("\t\t\t8       8   8      >     >  8       >   8   8   8   8   8     <     8   8\n");
    printf("\t\t\t8   a   8aaa8aaaaaaaa   a   8 | aaaaaaaa8   8aaa8 | 8   8aaaaaaaa | 8 | 8\n");
    printf("\t\t\t8   8               8   8 | 8     < 8           8      >    8    >  8   8\n");
    printf("\t\t\t8   8aaaaaaaaaaaa   8aaa8   8aaaa   8   aaaaa   8aaaaaaaa   8 | aaaa8   8\n");
    printf("\t\t\t8           8       8   8  >    8   8       8     <     8 | 8   <    <  8\n");
    printf("\t\t\t8   aaaaa   8aaaa   8   8aaaa   8 | 8aaaaaaa8 | a   a | 8   8aaaaaaaaaaa8\n");
    printf("\t\t\t8       8       8   8   8       8     < 8  <    8   8   8   >   8       8\n");
    printf("\t\t\t8aaaaaaa8aaaa   8   8   8   aaaa8aaaa   8   aaaa8   8   8aaaa   8aaaa   8\n");
    printf("\t\t\t8           8   8           8       8   8  >    8   8 |     8  >     >   8\n");
    printf("\t\t\t8   aaaaa   8   8aaaaaaaa   8aaaa   8 | 8aaaa   8aaa8   aaaa8aaaaaaaa   8\n");
    printf("\t\t\t8   8       8           8           8     < 8 | 8   8   <     <     8 | 8\n");
    printf("\t\t\t8   8   aaaa8aaaa   a   8aaaa   aaaa8aaaa   8   8   8aaaaaaaaaaaa | 8   8\n");
    printf("\t\t\t8   8           8   8   8   8   8  >     >  8  >      >     8   8    <  8\n");
    printf("\t\t\t8   8aaaaaaaa   8   8   8   8aaa8   8aaaaaaa8   aaaaaaaaa   8   8aaaaaaa8\n");
    printf("\t\t\t8   8       8   8   8           8  <     <  8   8  <    8    >          8\n");
    printf("\t\t\t8   8   aaaa8   8aaa8   aaaaa   8aaaaaaaa   8aaa8   a | 8aaaaaaaa | a   8\n");
    printf("\t\t\t8   8                   8           8       <     < 8        <      8   8\n");
    printf("\t\t\t8   8aaaaaaaaaaaaaaaaaaa8aaaaaaaaaaa8aaaaaaaaaaaaaaa8aaaaaaaaaaaaaaa8aaa8\n");
    */
    /*
    printf(
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    "8   8   8   8   8   8   8   8   8   8   8   8   8   8   8   8   8   8   8
    "8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8aaa8
    );
    */
    /*
    printf(
    "\\                          /           \n"
    " \\                        /            \n"
    "  \\                      /             \n"
    "  ]                     [    ,`|       \n"
    "  ]                     [   /  |       \n"
    "  ]___               ___[ ,'   |       \n"
    "  ]  ]\\             /[  [ |:   |       \n"
    "  ]  ] \\           / [  [ |:   |       \n"
    "  ]  ]  ]         [  [  [ |:   |       \n"
    "  ]  ]  ]__     __[  [  [ |:   |       \n"
    "  ]  ]  ] ]\\ _ /[ [  [  [ |:   |       \n"
    "  ]  ]  ] ] (#) [ [  [  [ :===='        \n"
    "  ]  ]  ]_].nHn.[_[  [  [               \n"
    "  ]  ]  ]  HHHHH. [  [  [               \n"
    "  ]  ] /   `HH{'N  \\ [  [              \n"
    "  ]__]/     HHH  \"  \\[__[             \n"
    "  ]         NNN         [               \n"
    "  ]         N/\"         [               \n"
    "  ]         N H         [               \n"
    "  /         N            \\             \n"
    " /          q,            \\            \n"
    "/                          \\        \n"
    );
    */
}