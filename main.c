#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxLetter 50

char subNameArr[3][maxLetter];

void gatheringData(char dataArr[4][maxLetter]);
void gatheringSubName();
void gatheringSubjects(int *subCountOne,int *subCountTwo,int *subCountThree,char subNameArr[3][maxLetter]);
void takingModuleName(char subOneArr[][maxLetter],char subTwoeArr[][maxLetter],char subThreeArr[][maxLetter],char subNameArr[3][maxLetter],int subCountOne,int subCountTwo,int subCountThree);


int main()
{
    char dataArr[4][maxLetter],subNameArr[3][maxLetter];
    gatheringData(dataArr);
    gatheringSubName();
    return 0;
}

void gatheringData(char dataArr[4][maxLetter])//that function allows to enter the data of user  (Next update:This part would be optional)
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
    for(int i=0; i<3; i++)
    {
        printf("Enter %d subject name : ", i+1);
        fgets(subNameArr[i], sizeof(subNameArr[i]), stdin);
        subNameArr[i][strcspn(subNameArr[i], "\n")] = 0;
    }
    printf("\nSubjects entered:\n"); // for check correctly gathered subject name
    for(int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, subNameArr[i]);
    }
}


