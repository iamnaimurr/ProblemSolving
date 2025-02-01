#include <stdio.h>

int main()
{
     int q[100], start = -1, end = -1, option, num, addValue, i;

     while (1)
     {
          printf("\n1)Enqueue 2)Dequeue 3)Display 4)Add K to Even Nodes 5)Exit\nEnter Option:");
          scanf("%d", &option);

          if (option == 1)
          {
               if (end == 99)
               {
                    printf("Queue Overflow");
                    continue;
               }
               printf("Enter Number:");
               scanf("%d", &num);
               if (start == -1)
                    start = 0;
               q[++end] = num;
          }
          else if (option == 2)
          {
               if (start == -1 || start > end)
               {
                    printf("Queue Underflow");
                    continue;
               }
               start++;
          }
          else if (option == 3)
          {
               if (start == -1 || start > end)
               {
                    printf("Queue is Empty");
                    continue;
               }
               for (i = start; i <= end; i++)
                    printf("%d ", q[i]);
               printf("\n");
          }
          else if (option == 4)
          {
               printf("Enter Value of K:");
               scanf("%d", &addValue);
               for (i = start; i <= end; i++)
                    if (q[i] % 2 == 0)
                         q[i] += addValue;
          }
          else if (option == 5)
               break;
          else
               printf("Invalid Option");
     }
     return 0;
}
