/**
 * @file points.c
 * @author Suara Ayomide (aysuarex@gmail.com)
 * 
 * katanga_pointX - shows the postion of the player at any point within the katanga maze
 * 
 * @date 2022-06-27
 */

#include <stdio.h>
#include "main.h"

void katanga_point0()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START        X     888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point1()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88     X 88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point2()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888 X             888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point3()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888         X     888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point4()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888         X        88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point5()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888             X    88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point6()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888 X             88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point7()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888         X     88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point8()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88 X                 88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point9()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88             X     88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point10()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888 X     88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point11()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888 X     88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point12()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                     X 888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point13()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888     X      END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point12A()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888             X         888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point12B()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888     X 88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point12Bii()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888     X                 888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point4A()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888     X            88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point4B()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88         X 88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point4Cii()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88 X         88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point4C()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888     X                                 88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point4D()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                     X                 88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point4E()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                 X     88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888     # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}

void katanga_point4F()
{
    printf(
    "\n\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   \n"
    "\t\t\t   888888                                       88   \n"
    "\t\t\t   88aaa8aaaa   aaaaaaaaaaaaa   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   88           88888               88888 X   # 88   \n"
    "\t\t\t   88   aaaaa   8aaa8   aaaaa   aaaa8aaa8   aaaa88   \n"
    "\t\t\t   88   88888   88888   88888   888888888   888888   \n"
    "\t\t\t   88aaa8aaaa   aaaaa   aaaa8   8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888                  88                   88   \n"
    "\t\t\t   88aaa8aaaaaaaa   aaaaaaaa8   aaaaaaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   888888888   888888888   888888   \n"
    "\t\t\t   88aaa8   aaaaa   aaaa8aaa8aaa8aaa8aaa8   aaaa88   \n"
    "\t\t\t   888888               888888888   88888       88   \n"
    "\t\t\t   88aaaa   aaaaaaaaaaaa8aaa8aaaa   8aaa8   aaaa88   \n"
    "\t\t\t   88       88888888888888888       88888       88   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaa8aaa8aaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   888888888                       888888   \n"
    "\t\t\t   88aaaa   aaaa8aaa8aaaa   aaaaaaaaaaaaa   aaaa88   \n"
    "\t\t     START              888888888   888888888             END\n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaa8aaa8aaa8aaa8aaaaaaaaaaaaa   \n"
    );
    return;
}