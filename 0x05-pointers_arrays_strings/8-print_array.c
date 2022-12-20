    #include "main.h"

    /**
    * print_array - prints array of intergers
    *
    * @a: pointer parameter
    * @n: Calling parameter
    *
    * Return: no value
    */
    void print_array(int *a, int n)
    {
    int x;

    for (; x < n; x++)
    {
    if (x <= n - 2)
    printf("%d, ", a[x]);
    else if (x == n - 1)
    printf("%d", a[x]);

    }

    printf("\n");
    }
