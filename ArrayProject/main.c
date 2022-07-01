#include<stdio.h>
#include<stdlib.h>

#define MAX_LENGTH 100
// - User can take input as many times as they want
// - The application will terminate when user enter 0
// - Users can see a list of menu item and select from it
// - Users can store integer numbers inside a list
// - Users can perform CRUD (Creat, Read, Update and Delete) operations
// - Users can able to clear the list

int main(){
    system("clear"); 
    int data[MAX_LENGTH];
    int length = 0;
    int input, value, index;
    do{ printf("Menu: \n");
        printf("-------------\n");
        printf("1. Add \n");
        printf("2. Instert \n");
        printf("3. Edit\n");
        printf("4. Delete \n");
        printf("5. Display\n");
        printf("6. Clear\n");
        printf("0. Exit\n");
        printf("--------------\n");

        printf("Enter a menu: ");
        scanf("%d", &input);

        system("clear");
        printf("------- Result -------\n");


        switch (input)
        {
        
        case 1:
        // ADD Operation
        printf("Please Enter a Integer value: ");
        scanf("%d", &value);

        data[length] = value;
        printf("%d instered at index %d\n", value, length);

        length++;

            break;

        case 2:
	    // insert operation
	    printf("Please enter an integer value: ");
	    scanf("%d", &value);
	    printf("Please enter an idex between 0 - %d: ",length);
	    scanf("%d", &index);
	if (index > length || index < 0){
		printf("!Pleae enter an index between 0 - %d\n", length);
	
	}else{

	    for(int i = length; i > index;i--){
		    data[i] = data[i -1];
	    }
	    data[index] = value;
	    length++;
	    printf("Your data has been insterted\n");
	}
            break;

        case 3: 
            break;
        
        case 4: 
            break;

        case 5:
	 // Display data      
        if (length == 0) {
            printf("There is no data\n");
        }
        else{
            printf("DATA : ");
        for (int i = 0; i < length; i++)
        {
            printf("%d\t",data[i]);
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
        case 0:
        //Do noting
            break;
          
        default:
           printf("Invalid Input\n");
           break;
        }
        //printf("You have selected menu no: %d\n",input);
        //printf("------ Result End -----\n");
    }while(input != 0);
    system("clear");

    return 0;
}
