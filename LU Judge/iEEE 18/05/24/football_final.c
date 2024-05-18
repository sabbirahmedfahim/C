#include <stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char team1[101];
    char team2[101];
    int goal_of_team1 = 1;
    int goal_of_team2 = 0;
    scanf("%s", team1);
    for (int i = 0; i < n - 1; i++)
    {
        char teamName[101];
        scanf("%s", teamName);

        if (strcmp(teamName, team1) == 0)
        {
            goal_of_team1++;
        }
        else
        {
            goal_of_team2++;
            for (int j = 0; teamName[j]!='\0'; j++)
            {
                team2[j] = teamName[j];
            }
        }
    }
    if (goal_of_team1 > goal_of_team2)
    {
        for (int i = 0; team1[i] != '\0'; i++)
        {
            printf("%c", team1[i]);
        }
    }
    else
    {
        for (int i = 0; team2[i] != '\0'; i++)
        {
            printf("%c", team2[i]);
        }
    }

    return 0;
}