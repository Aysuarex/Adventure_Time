/**
 * @file maps.c
 * @author Suara Ayomide (aysuarex@gmail.com)
 * 
 * kalakuta_pointX - shows the postion of the player at any point within the kalakuta maze
 * 
 * @date 2022-06-27
 */

#include <stdio.h>
#include "main.h"

void kalakuta_point0()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START       X     8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}

void kalakuta_point1()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88     X                 888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point2()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                 X     888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point3()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888     X     88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point4()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888             X                     888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point5()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                     X             888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point6()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                             X     888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point7()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888     X     888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point8()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888     X           END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point9()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888         X       END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point9A()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888             X 888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point9B()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888     X         888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point9C()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888             X 88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point9D()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888     X         88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point0A()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88     X     888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point0B()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88     X                       # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point0C()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                 X           # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point0D()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                         X   # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point9Bii()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888     X     88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888                                   888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}


void kalakuta_point4A()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   88                             # 88888888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaaa   aaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888           88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaa8aaa8aaaa   aaaa88   \n"
    "\t\t\t   88           888888888   88888   88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaa   8aaa8   8aaa88   \n"
    "\t\t\t   888888   888888888               88888   888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaaaaaaaaaa   aaaaa   8aaa88   \n"
    "\t\t      START             8888888888888               888888   \n"
    "\t\t\t   aaaaaa   aaaa8aaa8aaa8aaa8aaaaaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888   888888888                 END\n"
    "\t\t\t   88aaaa   aaaa8aaa8   8aaa8aaa8aaaa   aaaaaaaaaa   \n"
    "\t\t\t   88                       888888888   8888888888   \n"
    "\t\t\t   88aaaa   aaaaaaaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888           88888           888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaa8aaa8aaaa   aaaa8aaa88   \n"
    "\t\t\t   8888888888   88888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaaa   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888     X                             888888   \n"
    "\t\t\t   88aaa8aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa8aaa88   \n\n"
    );
    return;
}