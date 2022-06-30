#include<stdio.h>
//call by value  
// https://www.youtube.com/watch?v=HEiPxjVR8CU&list=PLBlnK6fEyqRi0Va6znG73P52rFfXD5fhs&index=4
//http://cpbook.subeen.com/2011/09/function-programming-book.html 
 int test_function(int x)   
 {  
     int y = x;  //these are local variable so if we change there value the will only be assigned in the function not in the main function
     x = 5 + y;  
     return (x * y);  
 }  
 int main()   
 {  
     int x = 10, y = 20, z = 30;
     //z = test_function(x);
    //printf("%d %d %d\n", x, y, z);  // ! here you may think printf will print 20 10 150
    test_function(x);
    printf("%d %d %d\n", x, y, z);  // ! here you may think printf will print 20 10 30
    return 0;
 }  

 // in call by value you are passing the value of the variable not the variable 
 // the value of the variable will get passed but not change