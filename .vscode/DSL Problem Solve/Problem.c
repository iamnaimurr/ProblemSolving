/*
find the misssing Numnber in an arrey 
problem , 

*/

#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arry[size];
    int a = 1;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arry[i]);
    }

    for (int j = 0; j < size; j++) 
    {
        if (arry[j] == a) 
        {
            a++;
            continue;
        }
         else
         {
            printf("%d",a);
            break;
        }
    }

return 0;
}