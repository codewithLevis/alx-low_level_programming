#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * is_palindrome - checks for palindrome
 * @num: interger
 * Return: 1 of 0
*/
int is_palindrome(int num)
{
        int reversed = 0;
        int original = num;

        while (num > 0)
        {
                reversed = reversed * 10 + num % 10;
                num /= 10;
        }

        return (original == reversed);
}

/**
 * main - program
 * Return: 0
*/
int main(void)
{
        int i, j, valid, mult, largest = 0;
        int fd = open("102-result", O_WRONLY | O_CREAT | O_TRUNC, 0666);

        if (fd == -1)
        {
                perror("open");
                exit(1);
        }


        for (i = 100; i < 1000; i++)
        {
                for (j = 100; j < 1000; j++)
                {
                        mult = j * i;
                        valid = is_palindrome(mult);
                        if (valid == 1 && mult > largest)
                                largest = mult;
                }
        }

        dprintf(fd, "%d", largest);
        if (close(fd) == -1)
        {
                perror("close");
                exit(1);
        }
        return 0;
}

