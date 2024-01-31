#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,a_count,a_shape,a_shape_star=0,a_shape_circle=0,a_shape_square=0,a_shape_triangle=0,b_count,b_shape,b_shape_star=0,b_shape_circle=0,b_shape_square=0,b_shape_triangle=0;
        scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &a_count);
        while (a_count--)
        {
            scanf("%d",&a_shape);
            if (a_shape == 4)
                a_shape_star += 1;
            else if (a_shape == 3)
                a_shape_circle += 1;
            else if (a_shape == 2)
                a_shape_square += 1;
            else if (a_shape == 1)
                a_shape_triangle += 1;

        }
        scanf("%d", &b_count);
        while (b_count--)
        {
            scanf("%d",&b_shape);
            if (b_shape == 4)
                b_shape_star += 1;
            else if (b_shape == 3)
                b_shape_circle += 1;
            else if (b_shape == 2)
                b_shape_square += 1;
            else if (b_shape == 1)
                b_shape_triangle += 1;
        }
        if (a_shape_star > b_shape_star)
            printf("A\n");
        else if (a_shape_star < b_shape_star)
            printf("B\n");
        else
        {
            if (a_shape_circle > b_shape_circle)
                printf("A\n");
            else if (a_shape_circle < b_shape_circle)
                printf("B\n");
            else
            {
                if (a_shape_square > b_shape_square)
                    printf("A\n");
                else if (a_shape_square < b_shape_square)
                    printf("B\n");
                else
                {
                    if (a_shape_triangle > b_shape_triangle)
                        printf("A\n");
                    else if (a_shape_triangle < b_shape_triangle)
                        printf("B\n");
                    else
                    {
                        printf("D\n");
                    }
                }
            }
        }
    	a_shape_circle=0;
        a_shape_square=0;
        a_shape_star=0;
        a_shape_triangle=0;
        b_shape_circle=0;
        b_shape_square=0;
        b_shape_star=0;
        b_shape_triangle=0;
    }

    return 0;
}
