#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100 // length of the array

// - User can take input as many times as they want
// - The application will terminate when user enter 0
// - Users can see a list of menu item and select from it
// - Users can store integer numbers inside a list
// - Users can perform CRUD (Creat, Read, Update and Delete) operations
// - Users can able to clear the list
int main()
{
    system("clear");      // clearing the terminal; Linux/Mac = clear; windows = cls
    int data[MAX_LENGTH]; // array to store the data
    int length = 0;       // array length
    int input, value, index, max, min, sum;
    float avg;
    do
    { // Menu and options
        printf("Menu: \n");
        printf("-------------\n");
        printf("1. Add \n");
        printf("2. Insert \n");
        printf("3. Edit\n");
        printf("4. Delete \n");
        printf("5. Display\n");
        printf("6. Clear\n");
        printf("7. Max\n");
        printf("8. Min\n");
        printf("9. Sum\n");
        // printf("10. Average\n");
        printf("0. Exit\n");
        printf("--------------\n");

        printf("Enter a menu: ");
        scanf("%d", &input); // input user's option

        system("clear");
        printf("------- Result -------\n");

        switch (input)
        {

        case 1:
            // ADD Operation
            printf("Please Enter a Integer value: ");
            scanf("%d", &value);

            data[length] = value;
            printf("%d inserted at index %d\n", value, length);

            length++;

            break;

        case 2:
            // insert operation
            printf("Please enter an integer value: ");
            scanf("%d", &value);
            printf("Please enter an idex between 0 - %d: ", length - 1);
            scanf("%d", &index);

            if (index > (length - 1) || index < 0)
            {
                printf("!Please enter an index between 0 - %d\n", length - 1);
            }
            else
            {

                for (int i = length; i > index; i--)
                {
                    data[i] = data[i - 1];
                }
                data[index] = value;
                length++;
                printf("Your data has been inserted\n");
            }

            break;

        case 3:
            // Edit operations
            printf("Please enter an idex between 0 - %d: ", length - 1);
            scanf("%d", &index);
            printf("Please enter an integer value: ");
            scanf("%d", &value);

            data[index] = value;
            printf("%d edited at index %d\n", value, index);

            break;

        case 4:
            // Delete operation
            printf("Please enter an index between 0 - %d: ", length - 1);
            scanf("%d", &index);
            if (index > (length - 1) || index < 0)
            {
                printf("!Please enter an index between 0 - %d", length - 1);
            }
            else
            {
                int del = data[index];
                for (int i = index; i < length; i++)
                {
                    data[i] = data[i + 1];
                }
                data[length] = 0;
                length--;
                printf("Deleted value %d from index %d\n", del, index);
            }

            break;

        case 5:
            // Display data
            if (length == 0)
            {
                printf("There is no data\n");
            }
            else
            {
                printf("DATA : ");
                for (int i = 0; i < length; i++)
                {
                    printf("%d\t", data[i]);
                }

                printf("\n");
                printf("------Result End------\n");
                break;
            }

        case 6:
            for (int i = 0; i < length; i++)
            {
                data[i] = 0;
            }
            length = 0;
            printf("Data cleared\n");

            break;
        case 7:
            max = data[0];
            for (int i = 0; i < length; i++)
            {
                if (max < data[i])
                {
                    max = data[i];
                }
            }
            printf("Maximum value is %d\n", max);

            break;
        case 8:
            min = data[0];
            for (int i = 0; i < length; i++)
            {
                if (min > data[i])
                {
                    min = data[i];
                }
            }
            printf("Minimum value is %d\n", min);
            break;
        case 9:
            sum = 0;
            for (int i = 0; i < length; i++)
            {
                sum += data[i];
            }
            printf("Sum = %d\n", sum);
            break;
        /**case 10:
            sum = 0;
            for (int i = 0; i < length; i++)
            {
                sum += data[i];
            }
            avg = sum / (length + 1);
            printf("Average = %f\n", avg);

            break;
            **/
        case 0:
            // Do noting
            break;
        default:
            printf("Invalid Input\n");
            break;
        }

    } while (input != 0);
    system("clear");
    return 0;
}
/**
 *
 * Min
 * Max
 * Sum
 * Average
 * Search
 * Sort
 *
 **/
