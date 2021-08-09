#include <stdio.h>
#include <math.h>
int main()
{

    float A[6][3] = {1.00, 0.00, 0.00,
                     4.00, 6.00, 7.00,
                     3.00, 4.00, 7.00,
                     4.70, 9.80, 6.00,
                     -0.90, 6.30, -9.00,
                     0.00, 0.00, 0.00};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%.3f ", A[i][j]);
        printf("\n");
    }
    float P[3];
    float Dis[6];

    printf("Enter the coordinates of point P :  \n");
    scanf("%f %f %f", &P[0], &P[1], &P[2]);

    printf("The distance of point P from the other points are : \n");

    for (int i = 0; i < 6; i++)
    {
        float x = 0;
        x += ((A[i][0] - P[0]) * (A[i][0] - P[0])) + ((A[i][1] - P[1]) * (A[i][1] - P[1])) + ((A[i][2] - P[2]) * (A[i][2] - P[2]));

        Dis[i] = sqrt(x);
    }
    for (int i = 0; i < 6; i++)
        printf("%.3f\n", Dis[i]);
    float m = 99999999999999.0;
    int y;
    for (int i = 0; i < 6; i++)
    {
        if (Dis[i] < m)
        {
            y = i;
            m = Dis[i];
        }
    }
    printf("Point no. %d is the nearest point to P.", (y + 1));
    return 0;
}