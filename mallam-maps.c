/**
 * @file maps.c
 * @author Suara Ayomide (aysuarex@gmail.com)
 * 
 * mallam_pointX - shows the postion of the player at any point within the mallam maze
 * 
 * @date 2022-06-21
 */

#include <stdio.h>
#include "main.h"

void mallam_point0()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                     X     88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point1()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                             X             88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point2()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                     X                     88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point3()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888         X     888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point4()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888     X         888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point5()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888             X 88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point6()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888     X                 8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point7()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                     X 8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point8()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888     X         88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point9()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888             X 88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point2A()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88             X                             88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point2B()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88     X                                     88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point5A()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888 X             88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point5B()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88     X 88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point5C()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888 X     88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point6A()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888     X     88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point7A()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888           8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888 X     888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point7B()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888         X 8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}

void mallam_point7C()
{
    printf(
    "\n\t\t\t                                        START        \n"
    "\t\t\t                                          |          \n"
    "\t\t\t   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   aaaaaa   \n"
    "\t\t\t   888888   88888   8888888888888   88888   888888   \n"
    "\t\t\t   88aaa8   8aaa8   8aaa8aaa8aaa8   8aaa8   8aaa88   \n"
    "\t\t\t   88                                           88   \n"
    "\t\t\t   88aaaa   aaaaa   aaaaa   aaaaa   aaaaa   aaaa88   \n"
    "\t\t\t   888888   88888   88888   88888   88888   888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaa8aaaa   aaaa8aaa8aaa8aaa8aaa88   \n"
    "\t\t\t   88888888888888               888888888888888888   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaa   aaaaaaaaaaaa8aaa8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   88888   88888   8888888888   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   8aaa8   aaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888               88888 X         8888888888   \n"
    "\t\t\t   88aaa8   aaaaaaaaa   8aaa8   aaaaa   aaaa8aaa88   \n"
    "\t\t\t   888888   88888aaaa   88888   88888       888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaa8aaa8aaaa   aaaaaaaa88   \n"
    "\t\t\t   88       88888                       8888888888   \n"
    "\t\t\t   88aaaa   8aaa8aaaa   aaaaaaaaaaaaa   8aaa8aaa88   \n"
    "\t\t\t   888888   888888888   8888888888888   88888   88   \n"
    "\t\t\t   88aaa8   aaaa8aaa8   8aaa8aaa8aaaa   aaaaa   88   \n"
    "\t\t\t   888888       88888   888888888               88   \n"
    "\t\t\t   88aaa8   aaaa8aaaa   aaaa8aaa8aaaaaaaaaaaa   88   \n"
    "\t\t\t   888888 # 88888           88888888888888888   88   \n"
    "\t\t\t   88aaa8aaa8aaa8aaaaaaaaaaa8aaa8aaa8aaa8aaa8   88   \n"
    "\t\t\t                                              |      \n"
    "\t\t\t                                             END     \n"
    );
    return;
}