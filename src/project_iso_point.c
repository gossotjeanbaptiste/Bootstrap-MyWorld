/*
** EPITECH PROJECT, 2025
** Bootstrap-MyWorld
** File description:
** project_iso_point
*/

#include "../include/csfml_include.h"
#include <math.h>

sfVector2f project_iso_point(int x, int y, int z)
{
    sfVector2f two_d_point;
    float angle_x = M_PI / 4;
    float angle_y = (7 * M_PI) / 36;

    two_d_point.x = cos(angle_x) * x - cos(angle_x) * y;
    two_d_point.y = sin(angle_y) * y + sin(angle_y) * x - z;
    return two_d_point;
}