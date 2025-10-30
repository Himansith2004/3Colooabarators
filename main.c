#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxLetter 20
#define SUBJECTS 3

char subNameArr[SUBJECTS][maxLetter];
char subSubNameArr[SUBJECTS][SUBJECTS][maxLetter];
int marks[SUBJECTS][SUBJECTS];

void gatheringData(char dataArr[4][maxLetter]);
void gatheringSubName();
void gatheringSubjects(int *subCountOne,int *subCountTwo,int *subCountThree,char subNameArr[SUBJECTS][maxLetter]);
void takingModuleName(char subOneArr[][maxLetter],char subTwoeArr[][maxLetter],char subThreeArr[][maxLetter],char subNameArr[SUBJECTS][maxLetter],int subCountOne,int subCountTwo,int subCountThree);


int main()
{
    char dataArr[4][maxLetter],subNameArr[3][maxLetter];
    gatheringData(dataArr);
    printf("Nicer");

    return 0;
}

void gatheringData(char dataArr[4][maxLetter])
{
    printf("Enter the Name of the student: ");
    fgets(dataArr[0],maxLetter,stdin);

    printf("Enter the Name of the University: ");
    fgets(dataArr[1],maxLetter,stdin);

    printf("Enter the Index number: ");
    fgets(dataArr[2],maxLetter,stdin);

    printf("Enter the Faculty: ");
    fgets(dataArr[3],maxLetter,stdin);
}



//get subject names from user
void gatheringSubName()
{
    int tempMarks=0;
    for(int i=0; i<SUBJECTS; i++)
    {
        printf("Enter %d subject name : ", i+1);
        fgets(subNameArr[i], sizeof(subNameArr[i]), stdin);
        subNameArr[i][strcspn(subNameArr[i], "\n")] = 0;
    }

    printf("\nEnter sub subject names ");
    for(int i = 0; i < SUBJECTS; i++)
    {
        printf("\n");
        for(int j = 0; j < SUBJECTS; j++)
        {
            printf("Enter %s %d sub subject names : ", subNameArr[i], j+1);
            fgets(subSubNameArr[i][j], sizeof(subSubNameArr[i][j]), stdin);
            subSubNameArr[i][j][strcspn(subSubNameArr[i][j], "\n")] = 0;
        }
    }

    printf("\n");
    for(int i = 0; i < SUBJECTS; i++)
    {
        for(int j=0; j<SUBJECTS; j++)
        {
            do
            {
                printf("Enter marks of %-20s: ", subSubNameArr[i][j]);
                if (scanf("%d", &tempMarks) != 1)
                {
                    printf("Invalid input. Please enter a number.\n");
                    while (getchar() != '\n');
                    continue;
                }

                if (tempMarks < 0 || tempMarks > 100)
                {
                    printf("Invalid marks. Enter between 0 and 100.\n");
                }

            }
            while (tempMarks < 0 || tempMarks > 100);

            marks[i][j] = tempMarks;
            while (getchar() != '\n');
        }
    }
}


