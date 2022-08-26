/*  Student Name: Devangini Singh
    Student Id: 2010993042
    Set Number:  
    Question: 1*/     

#include <iostream>
#include <stdint.h>
using namespace std;

void MaximumLengthSubarray(int nums[], int x, int A)
{
    // Intialising the starting element
    int start_index = 0;
 
    // Intialising the last element
    int last_index = -1;
 
    //Applying for loop.
    /*Syntax for "For Looop"
    for(initialisation;updation;counter){
        //do something
    }
    */

    // Checking all subarray as start with i.
    for (int y = 0; y < x; y++)
    {
        int target = 0;

    //Checking all subarray as start with j.
        for (int z = y; z < x; z++)
        {
            
            // Sum of the element
            target += nums[z];
            if (target == A)
            {
                // Apply comditional statement to checking the subarray
                if (start_index < z - y + 1)
                {
                    start_index = z - y + 1;
                    last_index = z;
                }
            }
        }
    }
    // Implementing the sub array
    printf("[%d, %d]", last_index - start_index + 1, last_index);
}
 
// Executing main void function for display the length of subarrray.
int main(void)
{
    int nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    int target = 8;
 
    int x = sizeof(nums)/sizeof(nums[4]);
 
    MaximumLengthSubarray(nums, x, target);
 
    return 0;
}
