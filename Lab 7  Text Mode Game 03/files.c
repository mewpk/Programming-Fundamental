#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1

struct player
{
    char name[20];
    int level;
    int score;
};

int main()
{
    struct player p[10], *ptr;
    for (size_t i = 0; i < 10; i++)
    {
        printf("Player %d \n", i + 1);
        printf("Name :");
        scanf("%s", &p[i].name);
        printf("Level :");
        scanf("%d", &p[i].level);
        printf("Score :");
        scanf("%d", &p[i].score);
    }
    ptr = p;

    FILE *fp;

    fp = fopen("testfile.txt", "w");
    for (size_t i = 0; i < 10; i++)
    {
        fprintf(fp, "%s %d %d \n", ptr->name, ptr->level, ptr->score);
        ptr++;
    }

    fclose(fp);


    return 0;
}