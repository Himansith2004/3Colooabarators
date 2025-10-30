#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxLetter 50


void gatheringData(char dataArr[4][maxLetter]);
void gatheringSubName(char subNameArr[3][maxLetter]);
void gatheringSubjects(int *subCountOne,int *subCountTwo,int *subCountThree,char subNameArr[3][maxLetter]);
void takingModuleName(char subOneArr[][maxLetter],char subTwoeArr[][maxLetter],char subThreeArr[][maxLetter],char subNameArr[3][maxLetter],int subCountOne,int subCountTwo,int subCountThree);


int main()
{
    char dataArr[4][maxLetter],subNameArr[3][maxLetter];
    gatheringData(dataArr);
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
