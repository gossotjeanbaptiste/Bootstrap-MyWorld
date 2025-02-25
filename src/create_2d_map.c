/*
** EPITECH PROJECT, 2025
** Bootstrap-MyWorld
** File description:
** create_2d_map
*/
#include "../include/csfml_include.h"

sfVector2f project_iso_point(int x, int y, int z)
{
    float angle_x = 45.0 * M_PI / 180.0;
    float angle_y = 35.0 * M_PI / 180.0;
    sfVector2f point_2d;

    point_2d.x = cos(angle_x) * x - cos(angle_x) * y;
    point_2d.y = sin(angle_y) * y + sin(angle_y) * x - z;

    return point_2d;
}

int main(void)
{
    int x = 1653;
    int y = 453;
    int z = 873;
    sfVector2f projected = project_iso_point(x, y, z);

    printf("Projected point: (%.2f, %.2f)\n", projected.x, projected.y);
    return 0;
}
