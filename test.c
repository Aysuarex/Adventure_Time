#include <stdio.h>

void main()
{

    /*
    MAZE 1: mallam
    printf(
    "                                          |          \n"
    "   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "   888888   88888   8888888888888   88888   888888   \n"
    "   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "   88                          <         <      88   \n"
    "   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "   888888   88888   88888 | 88888   88888   888888   \n"
    "   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "   88888888888888       <       888888888888888888   \n"
    "   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "   888888   888888888 | 88888   88888   8888888888   \n"
    "   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "   888888               88888           8888888888   \n"
    "   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "   888888   88888aaaa | 88888   88888       888888   \n"
    "   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "   88       88888          >       >    8888888888   \n"
    "   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "   888888   888888888   8888888888888 | 88888   88   \n"
    "   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "   888888       88888   888888888        >      88   \n"
    "   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "   888888 X 88888           88888888888888888 | 88   \n"
    "   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "                                              |      \n"
    );
    */
    /*
    MAZE2: kalakuta
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
    MAZE3: baluba
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
    MAZE4: katanga
    printf(
    "   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "   888888                                       88   \n"
    "   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "   88   88888   88888   88888   888888888   888888   \n"
    "   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "   88           88888       <       88888     X 88   \n"
    "   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "   88   88888   88888 | 88888 | 888888888   888888   \n"
    "   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "   888888         <        88    <       <      88   \n"
    "   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "   888888   88888 | 888888888   888888888   888888   \n"
    "   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "   888888      <        888888888   88888 |     88   \n"
    "   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "   88     | 88888888888888888       88888       88   \n"
    "   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "   888888 | 888888888                     | 888888   \n"
    "   88aaaa   aaaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa88   \n"
    "  <      <      888888888   8aaa8aaa8      <     <    \n"
    "   aaaaaaaaaaaaa8aaa8aaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
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
    printf("\t\t\t8  <    8   8      >     >  8       >   8   8   8   8   8     <     8   8\n");
    printf("\t\t\t8   a | 8aaa8aaaaaaaa   a   8 | aaaaaaaa8   8aaa8 | 8   8aaaaaaaa | 8 | 8\n");
    printf("\t\t\t8 | 8      <        8   8 | 8     < 8           8      >    8    >  8   8\n");
    printf("\t\t\t8   8aaaaaaaaaaaa | 8aaa8   8aaaa   8   aaaaa   8aaaaaaaa   8 | aaaa8   8\n");
    printf("\t\t\t8 >      >  8       8   8  >    8   8       8     <     8 | 8   <    <  8\n");
    printf("\t\t\t8   aaaaa   8aaaa   8   8aaaa   8 | 8aaaaaaa8 | a   a | 8   8aaaaaaaaaaa8\n");
    printf("\t\t\t8       8  >    8   8   8    <  8     < 8  <    8   8   8   >   8       8\n");
    printf("\t\t\t8aaaaaaa8aaaa   8 | 8   8 | aaaa8aaaa   8   aaaa8   8   8aaaa   8aaaa   8\n");
    printf("\t\t\t8           8 | 8    <      8       8   8  >    8   8 |     8  >     >   8\n");
    printf("\t\t\t8   aaaaa   8   8aaaaaaaa   8aaaa   8 | 8aaaa   8aaa8   aaaa8aaaaaaaa   8\n");
    printf("\t\t\t8   8       8  >     >  8           8     < 8 | 8   8   <     <     8 | 8\n");
    printf("\t\t\t8   8   aaaa8aaaa   a   8aaaa   aaaa8aaaa   8   8   8aaaaaaaaaaaa | 8   8\n");
    printf("\t\t\t8   8           8   8 | 8   8   8  >     >  8  >      >     8   8    <  8\n");
    printf("\t\t\t8   8aaaaaaaa   8   8   8   8aaa8   8aaaaaaa8   aaaaaaaaa   8   8aaaaaaa8\n");
    printf("\t\t\t8   8       8   8   8          8  <     <  8   8  <    8    >          8\n");
    printf("\t\t\t8   8   aaaa8 | 8aaa8 |  aaaaa   8aaaaaaaa   8aaa8   a | 8aaaaaaaa | a   8\n");
    printf("\t\t\t8   8              <    8           8       <     < 8        <      8   8\n");
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

    /*

                           !
                          /^\
                        /     \
     |               | (       ) |               |
    /^\  |          /^\ \     / /^\          |  /^\
    |O| /^\        (   )|-----|(   )        /^\ |O|
    |_| |-|    |^-^|---||-----||---|^-^|    |-| |_|
    |O| |O|    |/^\|/^\||  |  ||/^\|/^\|    |O| |O|
    |-| |-|    ||_|||_||| /^\ |||_|||_||    |-| |-|
    |O| |O|    |/^\|/^\||(   )||/^\|/^\|    |O| |O|
    |-| |-|    ||_|||_||||   ||||_|||_||    |-| |-|
    |O| |_|----|___|___|||___|||___|_|_|    |O| |O|
    |_|                                         |_|
       /_______________________________________\
    __|_______________________________________|___|



                  _________
              |MMMMMMMMM|                _
  ________    |MMMMMMMMM|              _|l|_
 |!!!!!!!_|___|MMMMMMMMM|             |lllll|
 |!!!!!!|=========|MMMMM|             |lllll|_______
 |!!!!!!|=========|MMMMM|            _|lllll|HHHHHHH|
 |!!!!!!|=========|MMMMM|   ________|lllllllll|HHHHH|
 |!!!!!!|=========|MMMMM|  |unununun|lllllllll|HHHHH|______
 |!!!!!!|=========|MMMMM|  |nunununu|lllllllll|HH|:::::::::|
 |!!!!!!|=========|MMM__|..|un__unun|lllllllll|HH|:::::::::|
 |!!!!!!|=======_=|M_( ')' );' .)unu|lllllllll|HH|:::::::::|
 |!!!_!!|======( )|(. ` ,) (_ ', )un|lllllllll|HH|:::::::::| ~~~
 |!!(.)!|===__(`.')_(_ ')_,)(. _)unu|lllllllll|HH|:__::::::|~~  ~~
 |!(.`')|==( .)' .)MMM|M|| |un|nunun|lllllllll|``|( ,)_::::| ~~~~ ~
  -(: _)|=(`. ')_)|---|- '  ``|`````|lll____ll|  (_; `'):::|~~~  ~~~
     |  |==(_'_)|=|    ______        ''/\   \'   |(_'_)::::|\~~~~__|)__
     |   ''''|''o/`.-``~~~~~ ``-.     /--\___\    ``|`````` /____\____/
 jrei        |  h ( `; ~~~ ~~  ~ )    |M_|#_#|      ' --   __________|~
       --   *      '-.._~~__~..-'   --           -* -     /  ~~~~ ~~~~~~
 *   -   -      --           ----         ---         _.-'~~~~~     ~ ~~
__--_________............-------------'''''''''''''''` ~~~~~    ~~~ ~~~~
~~    ~~~~~~~~     ~~~~~~~   ~~~~~~~~~   ~~~~~~~~~~      ~~~~~~~     ~~~
~~~~~~~~~  ~~~~  ~~~~~ ~~~~~~~~~ ~ ~      ~~~~~~ ~~~~~~     ~~~~    ~~~~
~~~~~~~~     ~~~~~~~~~~~~~~~        ~~~~~~~~~~~~ ~~~~~~  ~~~ ~~~~~~  ~~~


                                _._
                               .-~ | ~-.
                               |   |   |
                               |  _:_  |                    .-:~--.._
                             .-"~~ | ~~"-.                .~  |      |
            _.-~:.           |     |     |                |   |      |
           |    | `.         |     |     |                |   |      |
  _..--~:-.|    |  |         |     |     |                |   |      |
 |      |  ~.   |  |         |  __.:.__  |                |   |      |
 |      |   |   |  |       .-"~~   |   ~~"-.              |   |      |
 |      |   |  _|.--~:-.   |       |       |         .:~-.|   |      |
 |      A   | |      |  ~. |       |   _.-:~--._   .' |   |   |      |
 |      M   | |      |   | |       |  |   |     |  |  |   |   |      |
 |      C   | |      |   | |       |  |   |     |  |  |   |   |      |
 |      |   | |      |   | |       |  |   |     |  |  |   |   |      |
 |      9   | |      |   | |       |  |   |     |  |  |   |   |      |
 |      9   | |      |   | |       |  |   |     |  |  |   |   |      |
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



                           ,.=,,==. ,,_
                      _ ,====, _    |I|`` ||  `|I `|
                     |`I|    || `==,|``   ^^   ``  |
                     | ``    ^^    ||_,===TT`==,,_ |
                     |,==Y``Y==,,__| \L=_-`'   +J/`
                      \|=_  ' -=#J/..-|=_-     =|
                       |=_   -;-='`. .|=_-     =|----T--,
                       |=/\  -|=_-. . |=_-/^\  =||-|-|::|____
                       |=||  -|=_-. . |=_-| |  =|-|-||::\____
                       |=LJ  -|=_-. . |=_-|_| =||-|-|:::::::
                       |=_   -|=_-_.  |=_-     =|-|-||:::::::
                       |=_   -|=//^\. |=_-     =||-|-|:::::::
                   ,   |/&_,_-|=||  | |=_-     =|-|-||:::::::
                ,--``8%,/    ',%||  | |=_-     =||-|-|%::::::
            ,---`_,888`  ,.'''''`-.,|,|/!,--,.&\|&\-,|&#:::::
           |;:;K`__,...;=\_____,=``           %%%&     %#,---
           |;::::::::::::|       `'.________+-------\   ``
          /8M%;:::;;:::::|                  |        `-------




                   <|
           A             
          /.\       
     <|  [""M#      
      A   | #              Avendar: The Crucible of Legends
     /.\ [""M#             [avendar.com 9999]
    [""M# | #  U"U#U                 
     | #  | #  \ .:/    
     | #  | #___| #     
     | "--'     .-"     
   |"-"-"-"-"-#-#-##    
   |     # ## ######     
    \       .::::'/     
     \      ::::'/      
   :8a|    # # ##      
   ::88a      ###       
  ::::888a  8a ##::.    
  ::::::888a88a[]::::
 :::::::::SUNDOGa8a::::. ..              
 :::::8::::888:Y8888:::::::::...      
::':::88::::888::Y88a______________________________________________________
:: ::::88a::::88a:Y88a                                  __---__-- __
' .: ::Y88a:::::8a:Y88a                            __----_-- -------_-__
  :' ::::8P::::::::::88aa.                   _ _- --  --_ --- __  --- __--
.::  :::::::::::::::::::Y88as88a...s88aa.


                              ____                                         
                              .-"    `-.      ,                               
                            .'          '.   /j\                              
                           /              \,/:/#\                /\           
                          ;              ,//' '/#\              //#\          
                          |             /' :   '/#\            /  /#\         
                          :         ,  /' /'    '/#\__..--""""/    /#\__      
                           \       /'\'-._:__    '/#\        ;      /#, """---
                            `-.   / ;#\']" ; """--./#J       ':____...!       
                               `-/   /#\  J  [;[;[;Y]         |      ;        
""""""---....             __.--"/    '/#\ ;   " "  |     !    |   #! |        
             ""--.. _.--""     /      ,/#\'-..____.;_,   |    |   '  |        
                   "-.        :_....___,/#} "####" | '_.-",   | #['  |        
                      '-._      |[;[;[;[;|         |.;'  /;\  |      |        
                      ,   `-.   |        :     _   .;'    /;\ |   #" |        
                      !      `._:      _  ;   ##' .;'      /;\|  _,  |        
                     .#\"""---..._    ';, |      .;{___     /;\  ]#' |__....--
          .--.      ;'/#\         \    ]! |       "| , """--./_J    /         
         /  '%;    /  '/#\         \   !' :        |!# #! #! #|    :`.__      
        i__..'%] _:_   ;##J         \      :"#...._!   '  "  "|__  |    `--.._
         | .--""" !|""""  |"""----...J     | '##"" `-._       |  """---.._    
     ____: |      #|      |         #|     |          "]      ;   ___...-"T,  
    /   :  :      !|      |   _______!_    |           |__..--;"""     ,;MM;  
   :____| :    .-.#|      |  /\      /#\   |          /'               ''MM;  
    |""": |   /   \|   .----+  ;      /#\  :___..--"";                  ,'MM; 
   _Y--:  |  ;     ;.-'      ;  \______/#: /         ;                  ''MM; 
  /    |  | ;_______;     ____!  |"##"""MM!         ;                    ,'MM;
 !_____|  |  |"#"#"|____.'""##"  |       :         ;                     ''MM  
  | """"--!._|     |##""         !       !         :____.....-------"""""" |'
  |          :     |______                        ___!_ "#""#""#"""#"""#"""|  
__|          ;     |MM"MM"""""---..._______...--""MM"MM]                   |   
  "\-.      :      |#                                  :                   |  
    /#'.    |      /##,                                !                   |  
   .',/'\   |       #:#,                                ;       .==.       |  
  /"\'#"\',.|       ##;#,                               !     ,'||||',     |  
        /;/`:       ######,          ____             _ :     M||||||M     |  
       ###          /;"\.__"-._   """                   |===..M!!!!!!M_____|  
                           `--..`--.._____             _!_                    
                                          `--...____,="_.'`-.____        fsc



                          ____                       ____
                          |####|_   _   _   _   _   _|####|
 _    __    __    _       |####| '-' '-' '-' '-' '-' |####|
|#|__|##|__|##|__|#|      |====|=====================|====|       O
|__|__|__[]__|__|__|      `.###|'._.'._.'._.'._.'._.'|###.'      /#\
|_|__|__|__|__|__|_|        `.#|OoOOooOoOOoOoOOooOoOO|#.'       /###\
 \================/ _   _   _ \=======================/ _   _  /_####\
  \'._.'.__.'._.'/_| |_| |_| |_|     _               |_| |_| |_| |####\
   |    .--.    |==============|   .'|'.       _     |===========/#####\
   |    |  |    |OOoOOOooOooOoo|   |-+-|     .'|'.   |OOoOOOOoO||=====|
   |    |__|    |oOoooOoOOOoOoO|   |_|_|     |-+-|   |oOooOooOo|| .-. |
   |    ====    |==============|   =====     |_|_|   |=========|| | | |
   |            |'._.'.__.'._.'|             =====   |'._.'._.'|| | | |
  [==============]         .--[=======================]--.     || |_| |
   |._.'.__.'._.|      _    `.[=======================].' .-.  || === |
   |            |    .'|'.     ||.-.    _.o._    .-.||    | |  ||     |
   |            |    |-+-|     ||| |  _)  =  (_  | |||    | |  ||======]
   |    .--.    |    |_|_|     ||| |  )  ~@~  (  | |||    |_|  ||####.`
   |    |  |    |    =====     |||_|   \  =  /   |_|||    ===  ||##.'
   |    |__|    |              ||===    '._.'    ===||         ||.'
   |    ====    |==============|| _________________ ||=========||
   |            |'._.'.__.'._.'||[_________________]||'._.'._.'||
  [==============]   _    _    || ]| /    |    \ |[ ||    _    ||
   \============|  .'|'..'|'.  || ]|/     |     \|[ ||  .'|'.  ||
    \___________|  |-+-||-+-|  || ]|      |      |[ ||  |-+-|  ||
       ||          |_|_||_|_|  || ]|      |      |[ ||  |_|_|  ||
       ||          ==========  || ]|     ~|~     |[ ||  =====  ||
   ,,  ||                      || ]|      |      |[ ||         ||  ,,
  ,;;,[======================,,|| ]|      |      |[ ||,,=========],;;,
 ,;;;;,||OooOOOooOoOoooOooOO,;;,|_]|______|______|[_|,;;,OoOoOo||,;;;;,
 .----.||OooOoOooOooOoOoOOo,;;;;,/_________________\,;;;;,OOolc||.----.
 '.__.'====================.----.[_________________].----.======='.__.'
 [_________________________'.__.'/                 \'.__.'____________]
                           [____]                   [____]



                  .
                          |~~
                          |~~
                         /L\
                  ,.---./LLL\. _.--.
                .'(|~~`/LLLLL\` )  )`.,
              .(`  |~~/LLLLLLL\   )  )-. .
             (  ( /L\/LLLLLLLLL\ )  )   `|~~
            ((`_./LLL\LLLLLLLLLL\`.)_),.)|~~
                /LLLLL\.=.=.=.=|        /L\
                 |.=.| .-._.-. |       /LLL\   ~'~
                 |  [| | | | | |      /LLLLL\
                 |   | | | | | | _   _|] _=.|
        ~'~      |  [| |_|_|_| || |_| |_| | |
                 |  |~~        |=.=.=.=.=.| |       .
                 |  |~~        |    |~~   | |       |~~
                 | /L\ .-._.-. |    |~~   | |       |~~
                 |/LLL\| | | | |   /L\    |/       /L\
                 |].=.|_ | _ | _  /LLL\   |       /LLL\
           ,- _--|]] [| |_| |_| |/LLLLL\  |      /LLLLL\
          (|_| |_|]---|.=.=.=.=./LLLLLLL\ _   _ /LLLLLLL\
           \.=.=.=|\_/           |.=.=.|_| |_| |_|.=.=.|
           /|[]   |              | []  |.=.=.=.=.|  [] |
           ||     |    .-._.-.   |     | .-----. |     |
           \|     |    | | | |   |     |/|||||||\|     |
            |  [] |    | | | |   |     ]|||||||||[     |
            |  __ |    |_|_|_|   |  [] ]|||| ||||[ []  |
            | /<_\_    ____      |     ]|||| ||||[     |
            |/ |  "\__/  ) \.-.  |     ]|?=||||||[     |_
           /"  )\_ >  ) >\__ ")`\_     ]|||||||||[ ,_./`.\
        __/ _/ _ ,| \  __  "|_  ) |_   ]|||||||||[/("_ -">\_
       /> )"__/ \___  "  \__  _) \_ -\_.==___===/.<  \__(\_ \
      /  __/ )___   > \_ ) \  \_ "  ).==_____==( <."/ (_<  \)|
     lc_/>.=__.._\"__\_  >_)___\-_/.=________=/___/.__>__"(__/          



                               |--__
                                 |
                                 X
                        |-___   / \       |--__
                        |      =====      |
                        X      | .:|      X
                       / \     | O |     / \
                      =====   |:  . |   =====
                      |.: |__| .   : |__| :.|
                      |  :|. :  ...   : |.  |
              __   __W| .    .  ||| .      :|W__  --
            -- __  W  WWWW______"""______WWWW   W -----  --
        -  -     ___  ---    ____     ____----       --__  -
            --__    --    --__     -___        __-   _



                                                (aka Rick)

                         |        l~~~~~~~l      |
                        /\   l^^^^^^^^^^^^^^^l  /\
                       /__\ _l O  O  O  O  O l_/__\
                       l   l l               l     l
                       l   l l               l     l
        [^^^]          l  [^^^]             [^^^]  l          [^^^]
        [ o ]-------------[ o ]-------------[ o ]-------------[ o ]
        [   ]             [   ]     ___     [   ]             [   ]
        [   ]             [   ]    /   \    [   ]             [   ]
        [   ]             [   ]   |     |   [   ]   o         [   ]
        [   ]             [   ]   |     |   [   ]~\_|_        [   ]
________[___]_____________[___]___|_____|___[___]_/\_/\_______[___]__


The Gnome Castle                  |>>>                                 Owners:
----------------                  |                               Christopher &
                    |>>>      _  _|_  _         |>>>              The Contessa
                    |        |;| |;| |;|        |
                _  _|_  _    \\.    .  /    _  _|_  _
               |;|_|;|_|;|    \\:. ,  /    |;|_|;|_|;|
               \\..      /    ||;   . |    \\.    .  /
                \\.  ,  /     ||:  .  |     \\:  .  /
                 ||:   |_   _ ||_ . _ | _   _||:   |
                 ||:  .|||_|;|_|;|_|;|_|;|_|;||:.  |
                 ||:   ||.    .     .      . ||:  .|
                 ||: . || .     . .   .  ,   ||:   |       \,/
                 ||:   ||:  ,  _______   .   ||: , |            /`\
                 ||:   || .   /+++++++\    . ||:   |
                 ||:   ||.    |+++++++| .    ||: . |
              __ ||: . ||: ,  |+++++++|.  . _||_   |
     ____--`~    '--~~__|.    |+++++__|----~    ~`---,              ___
-~--~                   ~---__|,--~'                  ~~----_____-~'   `~----~~


                      _----|         _ _ _ _ _
                        ----|_----|   ]-I-I-I-[
    _ _ _ _ _ _ _----|      | ----|   \ `  ' /
    ]-I-I-I-I-[  ----|      |     |    |. ` |
     \ `   '_/       |     / \    |    | /^\|
      []  `__|       ^    / ^ \   ^    | |*||
      |__   ,|      / \  / ^ ^`\ / \   | ===|
   ___| ___ ,|__   / ^  /=_=_=_=\ ^ \  |, `_|
   I_I__I_I__I_I  (====(_________)_^___|____|____
   \-\--|-|--/-/  |     I  [ ]__I I_I__|____I_I_|
    |[] `    '|_  |_   _|`__  ._[  _-\--|-|--/-/
   / \  [] ` .| |-| |-| |_| |_| |_| | []   [] |
  <===>      .|-=-=-=-=-=-=-=-=-=-=-|        / \
  ] []|` ` [] | .   _________   .   |-      <===>
  <===>  `  ' ||||  |       |  |||  |  []   <===>
   \_/     -- ||||  |       |  |||  | .  '   \_/
  ./|' . . . .|||||/|_______|\|||| /|. . . . .|\_
- ---------------------------------------------------


                               ]=I==II==I=[
                                    \\__||__//                 ]=I==II==I=[
               ]=I==II==I=[          |.. ` *|                   \\__||__//
                \\__||__//           |. /\ #|                    |-_ []#|
                 | []   |            |  ## *|                    |      |
                 |    ..|            | . , #|                  ]=I==II==I=[
 ___   ____  ___ |   .. |         __ |..__.*| __                \\__||__//
 ] I---I  I--I [ |..    |        |  ||_|  |_|| |                 |    _*|
 ]_____________[ | .. []|         \--\-|-|--/-//                 |   _ #|
  \_\| |_| |/_/  |_   _ | _   _   _|      ' *|                   |`    *|
   |  .     |'-'-` '-` '-` '-` '-` | []     #|-|--|-_-_-_-_ _ _ _|_'   #|
   |     '  |=-=-=-=-=-=-=-=-=-=-=-|      []*|-----________` ` `   ]   *|
   |  ` ` []|      _-_-_-_-_  '    |-       #|      ,    ' ```````['  _#|
   | '  `  '|   [] | | | | |  []`  |  []    *|   `          . `   |'  I*|
   |      - |    ` | | | | | `     | ;  '   #|     .  |        '  |    #|
  /_'_-_-___-\__,__|_|_|_|_|_______|   `  , *|    _______+___,__,-/._.._.\
              _,--'    __,-'      /,_,_v_Y_,_v\\-'   - Artist Unknown



                                                !_
                                                    |*~=-.,
                                                    |_,-'`
                                                    |
                                                    |
                                                   /^\
                     !_                           /   \
                     |*`~-.,                     /,    \
                     |.-~^`                     /#"     \
                     |                        _/##_   _  \_
                _   _|  _   _   _            [ ]_[ ]_[ ]_[ ]
               [ ]_[ ]_[ ]_[ ]_[ ]            |_=_-=_ - =_|
             !_ |_=_ =-_-_  = =_|           !_ |=_= -    |
             |*`--,_- _        |            |*`~-.,= []  |
             |.-'|=     []     |   !_       |_.-"`_-     |
             |   |_=- -        |   |*`~-.,  |  |=_-      |
            /^\  |=_= -        |   |_,-~`  /^\ |_ - =[]  |
        _  /   \_|_=- _   _   _|  _|  _   /   \|=_-      |
       [ ]/,    \[ ]_[ ]_[ ]_[ ]_[ ]_[ ]_/,    \[ ]=-    |
        |/#"     \_=-___=__=__- =-_ -=_ /#"     \| _ []  |
       _/##_   _  \_-_ =  _____       _/##_   _  \_ -    |\
      [ ]_[ ]_[ ]_[ ]=_0~{_ _ _}~0   [ ]_[ ]_[ ]_[ ]=-   | \
      |_=__-_=-_  =_|-=_ |  ,  |     |_=-___-_ =-__|_    |  \
       | _- =-     |-_   | ((* |      |= _=       | -    |___\
       |= -_=      |=  _ |  `  |      |_-=_       |=_    |/+\|
       | =_  -     |_ = _ `-.-`       | =_ = =    |=_-   ||+||
       |-_=- _     |=_   =            |=_= -_     |  =   ||+||
       |=_- /+\    | -=               |_=- /+\    |=_    |^^^|
       |=_ |+|+|   |= -  -_,--,_      |_= |+|+|   |  -_  |=  |
       |  -|+|+|   |-_=  / |  | \     |=_ |+|+|   |-=_   |_-/
       |=_=|+|+|   | =_= | |  | |     |_- |+|+|   |_ =   |=/
       | _ ^^^^^   |= -  | |  <&>     |=_=^^^^^   |_=-   |/
       |=_ =       | =_-_| |  | |     |   =_      | -_   |
   jgs |_=-_       |=_=  | |  | |     |=_=        |=-    |
 `^^^^^^^^^^`^`^^`^`^`^^^""""""""^`^^``^^`^^`^^`^`^``^`^``^``^^



                                  o
                                                 _---|         _ _ _ _ _
                                              o   ---|     o   ]-I-I-I-[
                             _ _ _ _ _ _  _---|      | _---|    \ ` ' /
                             ]-I-I-I-I-[   ---|      |  ---|    |.   |
                              \ `   '_/       |     / \    |    | /^\|
                               [*]  __|       ^    / ^ \   ^    | |*||
                               |__   ,|      / \  /    `\ / \   | ===|
                            ___| ___ ,|__   /    /=_=_=_=\   \  |,  _|
                            I_I__I_I__I_I  (====(_________)___|_|____|____
                            \-\--|-|--/-/  |     I  [ ]__I I_I__|____I_I_|
                             |[]      '|   | []  |`__  . [  \-\--|-|--/-/
                             |.   | |' |___|_____I___|___I___|---------|
                            / \| []   .|_|-|_|-|-|_|-|_|-|_|-| []   [] |
                           <===>  |   .|-=-=-=-=-=-=-=-=-=-=-|   |    / \
                           ] []|`   [] ||.|.|.|.|.|.|.|.|.|.||-      <===>
                           ] []| ` |   |/////////\\\\\\\\\\.||__.  | |[] [
                           <===>     ' ||||| |   |   | ||||.||  []   <===>
                            \T/  | |-- ||||| | O | O | ||||.|| . |'   \T/
                             |      . _||||| |   |   | ||||.|| |     | |
                          ../|' v . | .|||||/____|____\|||| /|. . | . ./
                           |//\............/...........\........../../\\\



         |\
   \`-. _.._| \
    |_,'  __`. \
    (.\ _/.| _  |
   ,'      __ \ |
 ,'     __/||\  |
(Y8P  ,/|||||/  |
   `-'_----    /
      /`-._.-'/
      `-.__.-' jg


      
                                ,._ 
                       ,--.    |   `-. 
                    ,-'    \   :      `-. 
                   /__,.    \  ;  `--.___) 
                  ,'    \    \/   /       ,-"`. 
                     __,-' - /   '\      '   ,' 
                  ,-'              `-._ ,---^. 
                  \   ,                `-|    | 
                   \,(o                  ;    | 
               _,-'   `-'                |    | 
            ,-'                          |    | 
        Y8PYF                            ;    ; 
        `"" `           ,         ,--   /    : 
         \      .   ___/|       ,'\   ,' ,'  ; 
          `.     ;-' ___|     ,'  |\   ,'   / 
            `---'  __\ /    ,'    | `-'   ,' 
      ,-           \ ,'   ,'      `--.__,' 
    ,'     ,-'     ,'    / 
         ,'  ,     `----'    -hrr- 
           ,' 
          ( 
           ` 


                        .
         .             /"\  .           .
 (      /"\           /~"~\/"\         /"\    ____ __    
  ) /\ /"^"\          /"~"\~"~\  (    /"^"\  /\_\_\||           )
 ()/__\/~"~_________[]_~"~"\~"\  _)   /~"~\ /_\_\_\\|          (_
 |/|__|\"~|    THE     | _______|_|______~"/\_\_\_\_\          |Z|
 / |__| \"| RED ~ SLED || ___        ___ |/_\_\_\_\_\\ ________|Z|_      .
/________\|============|||) (|      |) (||| .-.  .-. ||.--..--..--.|    /"\
| __  __ ||            |||\_/|      |\_/||| |_|  |_| |||%%||%%||%%|| . /"~"\  *
||__||__|||.-. {}{} .-.||===== .;;, =====||==========|||__||__||__||/"\/~"~\ /o\  .
||__||__||||#|  /\  |#||| ___ ;;{};; ___ || .-.  .-. ||.--..--..--.|"~"\"~"~/"o"\/"\
| __  __ |||_|      |_||||) (| <><> |) (||| |#|  |#| |||%%||%%||%%||~"~\~"~"/o"o\"~"\
||__||__|||.-. {}{} .-.|||\_/|  /\  |\_/||| |_|  |_| |||__||__||__||"~"~\"~/o"o"o\"~\
||__||__||||#|  /\  |#|_!_====      =====||==========_!_o^~o^~o~^o~|~_!_"\"/"o"o"\~"~_!_
|========|||_|      |_|\O/===============||GOLDSMITHS\O/~^o~^o~^o~^|"\O/"~/"o"o"o"\"~\O/
|   <>   ||===______==._|_._____________ ||   FINE  ._|_.---------.|._|_."/o"o"o"o\~._|_.
|  GIFT  || (/______)_ ||/     PIZZA    \|| JEWELRY  |||APOTHECARY||~"|"~/."o"o"o".\_-| 
| SHOPPE ||(_/\___/\__ ||UUUUUUUUUUUUUUUU||~^o~oo~o^~||'----------'|- |_- |zzzzzzz|   |
|.--. .-.|% .----. .--.||.----..--..----.%|.-..--..-.||.--..--..--.|_-|   /"""""""\_ -|
||[]| | |%%%|TOYS| |/\||||~~~~||<>||~~~~%%%|_||[]||_||||^^||<>||^^||  |_ -|^^^^^^^|_ -|
|| ;| |_%%%%%____| |- ||||____|| ;||___%%%%%_|| o||_||||__||; ||__|| -|_- /_______\   |
||__|__%%%%%%%_____|__|||______|__|___%%%%%%%_|__|___||____|__|____|_[#]_/_________\_[#]
~`  `"%%%%%%%%%~"^"`  `~|~"^"~"`  `~"%%%%%%%%%`  `~"^~|~"^~`  `~"^~"^"~"^           ~"~/
lc_____________________[#]___________________________[#]______________________________/
^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^"~"^~

*/

}