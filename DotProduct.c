#include <stdio.h>

float dotProduct(float coord1, float coord2, float coord3, float coord4, float coord5, float coord6)
{
    return (coord1 * coord4) + (coord2 * coord5) + (coord3 * coord6);
}

void crossProduct(float coord1, float coord2, float coord3, float coord4, float coord5, float coord6, float* crossProd1, float* crossProd2, float* crossPod3)
{
    *crossProd1 = ((coord2 * coord6) - (coord5 * coord3));
    *crossProd2 = ((coord3 * coord4)-(coord6 * coord1));
    *crossPod3 = ((coord1 * coord5)-(coord4 * coord2));
}

int main()
{
    float coord1, coord2, coord3, coord4, coord5, coord6, dotProd, crossProd1, crossProd2, crossProd3;
    char dotOrCross;
    printf("Enter the x coordinate of vector a: \n");
    scanf("%f", &coord1);
    printf("Enter the y coordinate of vector a: \n");
    scanf("%f", &coord2);
    printf("Enter the z coordinate of vector a: \n");
    scanf("%f", &coord3);

    printf("Enter the x coordinate of vector b: \n");
    scanf("%f", &coord4);
    printf("Enter the y coordinate of vector b: \n");
    scanf("%f", &coord5);
    printf("Enter the z coordinate of vector b: \n");
    scanf("%f", &coord6);

    getchar();
    printf("Enter D for Dot Product or C for Cross Product, or B for both: \n");
    scanf("%c", &dotOrCross);


    if (dotOrCross == 'D' || dotOrCross == 'd')
    {
        dotProd = dotProduct(coord1, coord2, coord3, coord4, coord5, coord6);
        printf("The dot product is %f \n", dotProd);

    } else if (dotOrCross == 'C' || dotOrCross == 'c')  
    {
        crossProduct(coord1, coord2, coord3, coord4, coord5, coord6, &crossProd1, &crossProd2, &crossProd3);
        printf("The vector perpendicular to vector a and b is: [%.1f , %.1f , %.1f] \n", crossProd1, crossProd2, crossProd3);

    } else if (dotOrCross == 'B' || dotOrCross == 'b')
    {
        dotProd = dotProduct(coord1, coord2, coord3, coord4, coord5, coord6);
        crossProduct(coord1, coord2, coord3, coord4, coord5, coord6, &crossProd1, &crossProd2, &crossProd3);
        printf("The dot product is %f \n", dotProd);
        printf("The vector perpendicular to vector a and b is: [%.1f , %.1f , %.1f] \n", crossProd1, crossProd2, crossProd3);

    } else
    {
        printf("Type in B, D or C (not case sensitive) please: \n");
    }
    

    printf("You can fuck off now!\n");
}