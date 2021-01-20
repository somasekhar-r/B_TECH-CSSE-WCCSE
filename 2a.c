#include <stdio.h>
int main()
{
    int classNum,failedSub;
    printf("enter class:\n");
    scanf("%d",&classNum);
    printf("enter no.of subjects failed:\n");
    scanf("%d",&failedSub);
    switch(classNum)
    {
        case 1:
            if(failedSub<=3)
            { printf(" grace marks per subject is 5"); }
            else
            { printf("no grace marks"); }
            break;
        case 2:
            if(failedSub<=2)
            { printf(" grace marks per subject is 4"); }
            else
            { printf("no grace marks"); }
            break;
        case 3:
            if(failedSub<=1)
            { printf(" grace marks per subject is 5"); }
            else
            { printf("no grace marks"); }
            break;
        default :
            printf("there is no grace marks for class %d",classNum);
    }
    return 0;
}