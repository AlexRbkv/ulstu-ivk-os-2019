#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("Лабораторная работа №3 Рыбаков А.С. ИСТбд-21\n");
    int x;
    pid_t pid;
    pid = fork();
    if (pid>0)
        scanf(x);
    else
        exit(2);
    return 0;
}
