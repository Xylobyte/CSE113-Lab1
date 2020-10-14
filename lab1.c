/**
 * @file lab1.c
 * @brief A simple geomtry calculator
 * @details Can calculate area of a rectangle, perimeter of a rectangle, diagonal of a rectangle, area of a cricle, circumference of a circle,
 * area of a triangle, hypotenuse of a triangle, perimeter of a triangle, exterior angle of a polygon, interior angle of a polygon, and area 
 * of a polygon.
 *
 * @author Donovan Griego
 * @date Fall 2020
 * @bug None
 */
#include <stdio.h>
#include <math.h>

/**
 * Calculates the area of a rectangle
 * @param height the height of the rectangle
 * @param width the width of the rectangle
 * @return the area of the rectangle
 **/
int area_rectangle(int height, int width)
{
    return height * width;
}

/**
 * Calculates the perimeter of a rectangle
 * @param height the height of the rectangle
 * @param width the width of the rectangle
 * @return the perimeter of the rectangle
 **/
int perimeter_rectangle(int height, int width)
{
    return (2 * height) + (2 * width);
}

/**
 * Calculates the diagonal of a rectangle
 * @param height the height of the rectangle
 * @param width the width of the rectangle
 * @return the diagonal of the rectangle
 **/
double diagonal_rectangle(int height, int width)
{
    return sqrt(pow(height, 2) + pow(width, 2));
}

/**
 * Calculates the area of a circle
 * @param radius the radius of the circle
 * @return the area of the circle
 **/
double area_circle(float radius)
{
    return (M_PI * pow(radius, 2));
}

/**
 * Calculates the circumference of a circle
 * @param radius the radius of the circle
 * @return the circumference of the circle
 **/
double circumference(float radius)
{
    return (2 * M_PI * radius);
}

/**
 * Calculates the area of a triangle
 * @param height the height of the triangle
 * @param base the width of the base of the triangle
 * @return the area of the triangle
 **/
double area_triangle(float height, float base)
{
    return ((height * base) / 2);
}

/**
 * Calculates the hypotenuse of a triangle
 * @param height the height of the triangle
 * @param base the width of the base of the triangle
 * @return the hypotenuse of the triangle
 **/
double hypotenuse(float height, float base)
{
    return sqrt(pow(height, 2) + pow(base, 2));
}

/**
 * Calculates the perimeter of a triangle
 * @param height the height of the triangle
 * @param base the width of the base of the triangle
 * @return the perimeter of the triangle
 **/
double perimeter_triangle(float height, float base)
{
    return (height + base + hypotenuse(height, base));
}

/**
 * Calculates the exterior angle of a polygon
 * @param sides the number of sides of the polygon
 * @return the exterior angle of the polygon
 **/
double exterior_angle(int sides)
{
    return (360 / sides);
}

/**
 * Calculates the interior angle of a polygon
 * @param sides the number of sides of the polygon
 * @return the interior angle of the polygon
 **/
double interior_angle(int sides)
{
    return (((sides - 2) * 180) / sides);
}

/**
 * Calculates the area of a polygon
 * @param sides the number of sides of the polygon
 * @param length the length of a side of the polygon
 * @return the area of the polygon
 **/
double area_regular_polygon(int sides, float length)
{
    return ((pow(length, 2) * sides) / (4 * tan(M_PI / sides)));
}

int main()
{
    int width_rect;
    int height_rect;
    float radius;
    float height_tri;
    float base;
    int sides = 8;
    float side_length = 5;

    printf("Enter the height of a rectangle as a whole (integer) number: ");
    scanf("%d", &height_rect);
    printf("Enter the width of a rectangle as a whole (integer) number: ");
    scanf("%d", &width_rect);

    printf("\n--- Rectangle Calculations ---\n");
    printf("The area of a rectangle with height %d and width %d is %d\n", height_rect, width_rect, area_rectangle(height_rect, width_rect));
    printf("The perimeter of a rectangle with height %d and width %d is %d\n", height_rect, width_rect, perimeter_rectangle(height_rect, width_rect));
    printf("The length of the diagonal of a rectangle with height %d and width %d is %lf\n\n", height_rect, width_rect, diagonal_rectangle(height_rect, width_rect));

    printf("Enter the radius of a circle as a floating point number: ");
    scanf("%f", &radius);

    printf("\n--- Circle Calculations ---\n");
    printf("The area of a circle with radius %f is %lf\n", radius, area_circle(radius));
    printf("The circumference of a circle with radius %f is %lf\n\n", radius, circumference(radius));

    printf("Enter the height of a right triangle as a floating point number: ");
    scanf("%f", &height_tri);
    printf("Enter the base of a right triangle as a floating point number: ");
    scanf("%f", &base);

    printf("\n--- Triangle Calculations ---\n");
    printf("The area of a triangle with height %f and base %f is %lf\n", height_tri, base, area_triangle(height_tri, base));
    printf("The perimeter of a triangle with height %f and base %f is %lf\n\n", height_tri, base, perimeter_triangle(height_tri, base));

    printf("Enter the number of sides of a regular polygon as an integer: ");
    scanf("%d", &sides);
    printf("Enter the length of a the side of a regular polygon as a floating point number: ");
    scanf("%f", &side_length);

    printf("\n--- Regular Polygons ---\n");
    printf("The exterior angle of a regular polygon with %d sides is %lf degrees.\n", sides, exterior_angle(sides));
    printf("The interior angles of a regular polygon with %d sides sums to %lf degrees.\n", sides, sides * exterior_angle(sides));
    printf("The interior angle of a regular polygon with %d sides is %lf degrees.\n", sides, interior_angle(sides));
    printf("The area of a regular polygon with %d sides, each %f long is %lf\n", sides, side_length, area_regular_polygon(sides, side_length));
}