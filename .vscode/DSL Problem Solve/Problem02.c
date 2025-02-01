#include <stdio.h>

int main() {
    int queue[100],front= -1,rear= -1,choice,value,k,i;
    
    while (1) {
        printf("\n1) Enqueue\n2) Dequeue\n3) Display\n4) Add Value K to Even Nodes\n5) Exit\nEnter Choice: ");
        scanf("%d",&choice);

        if (choice==1) {
            if (rear==99) {
               printf("Queue Overflow");
               continue;
            }
            printf("Enter Value: ");
            scanf("%d", &value);
            if (front == -1) front = 0;
            rear++;
            queue[rear] = value;
        } 
        else if (choice == 2) {
            if(front == -1 || front > rear) {
               printf("Queue Underflow");
               continue;
            }
            front++;
        } 
        else if (choice == 3) {
            if (front == -1 || front > rear){
            printf("Queue is Empty");
            continue;
            }
            for (i = front; i <= rear; i++){
                printf("%d",queue[i]);
            }
            printf("\n");
        } 
        else if (choice == 4) {
            printf("Enter Value of K: ");
            scanf("%d", &k);
            for (i = front;i<=rear;i++) {
                if (queue[i]%2==0)queue[i]+= k;
            }
        } 
        else if(choice == 5){
            break;
        } 
        else{
            printf("Invalid Choice");
        }
    }
    return 0;
}
