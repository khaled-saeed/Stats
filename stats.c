/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <a simple application that performs statistical analytics on a dataset>
 *
 * < write a couple of functions that can analyze an array of unsigned char data items
 *and report analytics on the maximum, minimum, mean, and median of the data set. In addition,
 *you will need to reorder this data set from large to small. All statistics should be rounded down to
 *the nearest integer. After analysis and sorting is done, you will need to print that data to the screen
 *in nicely formatted presentation>
 *
 * @author <Khaled Saeed>
 * @date <28/1/2021 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main()
{

  unsigned char test[40] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
printf("The array in original form : \n\n");
print_array(test,SIZE);
sort_array(test,SIZE);
printf("The array sorted in ascending order :\n\n");
print_array(test,SIZE);
printf("The array statistics:\n\n");
print_statistics(test,SIZE);

}

/* Add other Implementation File Code Here */

