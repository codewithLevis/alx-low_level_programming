#include "op.h"

/**
 * add - finds sum
 * @a: int1
 * @b: int2
 * Return: sum 
*/
int add(int a, int b)
{
        return (a + b);
}
/**
 * sub - finds dif
 * @a: int1
 * @b: int2
 * Return: dif 
*/
int sub(int a, int b)
{
        return (a - b);
}
/**
 * mul - finds product
 * @a: int1
 * @b: int2
 * Return: product
*/
int mul(int a, int b)
{
        return (a * b);
}

/**
 * div - finds quotient
 * @a: int1
 * @b: int2
 * Return: quotient 
*/
int div(int a, int b)
{
        if (b == 0)
                return (0);
        return (a / b);
}

/**
 * mod - finds rem
 * @a: int1
 * @b: int2
 * Return: rem
*/
int mod(int a, int b)
{
        if (b == 0)
                return (0);
        return (a % b);
}
