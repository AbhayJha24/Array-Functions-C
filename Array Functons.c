#include <stdio.h>

#define MAX 100

int mark[MAX] = {86,57,72,83,81,93,69,98};

int choice;

void main(){

    while (1)
    {    

        printf("Enter your choice\n");
        printf("1. Display no. of Students\n");
        printf("2. Read the marks of n students\n");
        printf("3. Compute the class average\n");
        printf("4. Find minimum and maximum marks\n");
        printf("5. Try to insert a new marks of a new student at position p\n\n");

        scanf("%d", &choice);

        printf("\n");
        
        if (choice == 1)
        {
            char x = 'a';
            int i = 0;

            while (x != '\0')
            {
                x = mark[i];
                i++;
            }

            printf("%d\n\n", (i-1));
            
        }

        else if (choice == 2)
        {
            char x = 'a';
            int i = 0;

            while (x != '\0')
            {
                x = mark[i];
                i++;
            }

            for (int j = 0; j < i-1; j++)
            {
                printf("%d ", mark[j]);
            }

            printf("\n\n");
            
        }

        else if (choice == 3)
        {
            char x = 'a';
            int i = 0;
            int sum = 0;
            float avg;

            while (x != '\0')
            {
                x = mark[i];
                i++;
            }

            for (int j = 0; j < i-1; j++)
            {
                sum += mark[j];
            }

            avg = (sum/(i-1));

            printf("%f", avg);

            printf("\n\n");
        }

        else if (choice == 4)
        {
            
            char x = 'a';
            int i = 0;

            while (x != '\0')
            {
                x = mark[i];
                i++;
            }
            
            for (int k = 0; k < (i-2); k++)
            {
                for (int j = 0; j < ((i-1)-k-1); j++)
                {
                    if (mark[j] > mark[j+1])
                    {
                        int temp;
                        temp = mark[j];
                        mark[j] = mark[j+1];
                        mark[j+1] = temp;
                    }
                    
                }
                
            }

            printf("%d\n", mark[0]);
            printf("%d\n\n", mark[i-2]);
            
        }

        else if (choice == 5)
        {
            char x = 'a';
            int i = 0;

            while (x != '\0')
            {
                x = mark[i];
                i++;
            }

            int num;
            scanf("%d", &num);
            printf("\n");
            mark[i-1] = num;

        }
        
        else
        {
            printf("Invalid Choice Entered\n");
        }
        
    }
    
}