
#include <stdio.h>

void part1(int[], int);
void part2(int[], int);
void part3(int[], int);
void part4(int[], int);
void part5(int[], int);
void part6(int[], int);
void part7(int[], int);

int main()
{   
    
    int array[] = { 12,63,44,89,3,55,73,27,37,18 };
    printf("Array size: %u bytes\n", (int)sizeof array); //prints the size of array
    
    int length = (int)(sizeof array/ sizeof array[0]);
    printf("Array length : %u elements\n", length); //prints the length of array
    
    printf("\n");
    part1(array, length);
    printf("\n");
    part2(array, length);
    printf("\n");
    part3(array, length);
    printf("\n");
    part4(array, length);
    printf("\n");
    part5(array, length);
    printf("\n");
    part6(array, length);
    printf("\n");
    part7(array, length);
    
}

void part1(int array[], int length){ // print out the array
    printf("Part 1: \n");
    printf("The values store into the array are: \n");
    for (int i = 0; i<length; i++){
        printf("%u     ", array[i]);
    }
}

void part2(int array[], int length){ //print out the array in reverse order
    printf("\nPart 2: \n");
    printf("The values store into the array in reverse are: \n");
    for (int i = length-1; i>=0; i--){
        printf("%u     ", array[i]);
    }
}

void part3(int array[], int length){ //find the smallest value of the array
    printf("\nPart 3: \n");
    printf("The smallest value stored in the array is: \n");
    int smallestVal = array[0]; // sets the smallest value as the first array value
    int valuePos = 0; // records the position of the smallest value
    for (int i = 0; i<length; i++){ // goes through each value and compares if there is a smaller value
        if(array[i] < smallestVal){
            smallestVal= array[i]; // if there is a smaller value then store that as the new smallest value and continue
            valuePos = i;
        }
    }
    printf("value: %u at the %uth position from the left", smallestVal, valuePos+1);
}

void part4(int array[], int length){ //print the total sum of the array
    printf("\nPart 4: \n");
    printf("The sum (total) value of the array is: \n");
    int sum = 0;
    for (int i = 0; i<length; i++){
        if (i == length-1) printf("%u   ", array[i]); //if its the last element of the array then dont include equals sign
        else printf("%u + ", array[i]);
        sum += array[i]; //add the amount to the total sum
    }
    printf("equals: %u", sum);
}

void part5(int array[], int length){ //copy original array into a new array but reverse order
    printf("\nPart 5: \n");
    printf("Copy the array into a new array, but in reverse order: \n");
    printf("Original Array: \n");
    for (int i = 0; i<length; i++){
        printf("%u     ", array[i]);
    }
    //storing the values into a new array but reverse order
    int array2[length];
    for (int i = length-1; i>=0; i--){
        array2[length-1-i] = array[i]; //stores in the array reverse order
    }
    //printing the values of the new array
    printf("\nNew (reversed) array: \n");
    for (int i = 0; i<length; i++){
        printf("%u     ", array2[i]);
    }
    
}

void part6(int array[], int length){ //switch the first and last element of the array
    printf("\nPart 6: \n");
    printf("Switch the first value in the array with the last value in the array: \n");
    printf("Original Array: \n");
    for (int i = 0; i<length; i++){
        printf("%u     ", array[i]);
    }
    // switching the first and last values 
    int firstVal = array[0];
    int lastVal = array[length-1];
    array[0] = lastVal;
    array[length-1] = firstVal;
    
    printf("\nChanged Array: \n"); //printing out the new array
    for (int i = 0; i<length; i++){
        printf("%u     ", array[i]);
    }
}

void part7(int array[], int length){ //ordering the array from lowest to highest order
    printf("\nPart 7: \n");
    printf("Sort the array in ascending order: \n");
    printf("Original Array: \n");
    for (int i = 0; i<length; i++){
        printf("%u     ", array[i]);
    }
    
    // sorting the array
    for (int i = 0; i<length; i++){ // goes through every cell
        int storeVal = array[i]; //original value of the cell
        int smallestVal = storeVal; //smallest value
        int smallestValLocation = i; //location of the smallest value
        for(int j = i+1; j<length; j++){ //for every value after i, find the smallest value
            if(array[j]<smallestVal) {
                smallestVal = array[j];
                smallestValLocation =j;
            }
        }
        array[i] = smallestVal; //swap the original cell with the new smallest value
        array[smallestValLocation] = storeVal;
        
    }
    printf("\nChanged Array: \n"); //print the new sorted array
    for (int i = 0; i<length; i++){
        printf("%u     ", array[i]);
    }
    
}
