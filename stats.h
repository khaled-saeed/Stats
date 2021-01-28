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
 * @file <stats.h>
 * @brief <Add Brief Description Here >
 *
 * <
 *	print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *	print_array() -  Given an array of data and a length, prints the array to the screen
 *	find_median() - Given an array of data and a length, returns the median value
 *	find_mean() -  Given an array of data and a length, returns the mean
 *  find_maximum() -  Given an array of data and a length, returns the maximum
 *	find_minimum() -  Given an array of data and a length, returns the minimum
 *	sort_array() - Given an array of data and a length, sorts the array from largest to smallest.
 *	(The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )>
 *
 * @author <khaled saeed>
 * @date <28/1/2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/****************************************************************************************
 * @brief < Given an array of data and a length, prints the array to the screen>
 * @param <arr[]> <the array of data to be printed >
 * @param <len> <the length of the array>
 ****************************************************************************************/
void print_array(unsigned char arr[], int len)
{
	int i ;
	for (i = 1 ; i < len ; i++)
	{
		printf("%-5d ",arr[i-1]);
		if(i%10==0)
			printf("\n");
	}
	printf("\n\n");
}

/****************************************************************************************
 * @brief < Given an array of data and a length, returns the median value >
 * @param <arr[]> <the array of data to be printed >
 * @param <len> <the length of the array>
 * @return < the median of the given array rounded to the closest integer = the middle element(s) of a sorted array >
 ****************************************************************************************/

 int find_median(unsigned char arr[] , int len )
 {
 	float median ;
 	int round ;
 	if(len%2==0)
	{
		median =(float)(arr[len/2]+arr[(len/2)-1])/2;

		/* Rounding the median value to closest integer */
		round =(int) (median*10)%10;
		if(round>=1 && round<5)
			median = (int)median;
		else if(round>=5 && round<9)
			median = (int)median+1;
		else
			median =(int)median ;
	}
	else
		median = arr[len/2];
	return(int) median;
 }

/****************************************************************************************
 * @brief < Given an array of data and a length, returns the mean  >
 * @param <arr[]> <the array of data to be printed >
 * @param <len> <the length of the array>
 * @return < the mean of the given array = the sum of the array elements divided by array length >
 ****************************************************************************************/

int find_mean(unsigned char arr[], int len)
{
	int i ,round  ;
	float mean , sum = 0 ;
	for ( i = 0 ; i <len ; i++)
	{
		sum+= arr[i];
	}
	mean =(float) sum / len ;

	/* Rounding the mean value to closest integer */
	round =(int) (mean*10)%10;
	if(round>=1 && round<5)
		mean = (int)mean;
	else if(round>=5 && round<9)
		mean = (int)mean+1;
	else
		mean =(int)mean ;
	return(int)mean ;
}

/****************************************************************************************
 * @brief <  Given an array of data and a length, returns the maximum  >
 * @param <arr[]> <the array of data to be printed >
 * @param <len> <the length of the array>
 * @return < returns the maximum value in the array >
 ****************************************************************************************/

 int find_maximum(unsigned char arr[],int len)
 {
 	int i ;
 	int max = arr[0] ;
 	for ( i = 1 ; i < len ; i++)
	{
		if(arr[i]>max)
			max = arr[i];
	}
	return max ;
 }

 /****************************************************************************************
 * @brief <  Given an array of data and a length, returns the minimum   >
 * @param <arr[]> <the array of data to be printed >
 * @param <len> <the length of the array>
 * @return < returns the minimum value in the array >
 ****************************************************************************************/

 int find_minimum(unsigned char arr[],int len)
 {
 	int i ;
 	int min = arr[0] ;
 	for ( i = 1 ; i < len ; i++)
	{
		if(arr[i]< min)
			min = arr[i];
	}
	return min ;
 }

/****************************************************************************************
 * @brief <  Given an array of data and a length, sorts the array from largest to smallest using selection sort algorithm >
 * @param <arr[]> <the array of data to be printed >
 * @param <len> <the length of the array>
 * @return < N/A >
 ****************************************************************************************/
void sort_array(unsigned char arr[], int len)
{
	int j, i ;
	char temp ;
	for ( i = 0 ; i<len ; i++)
	{
		for ( j = i+1 ; j<len ; j++)
		{
			if(arr[j]>arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp ;

			}
		}
	}
}
/****************************************************************************************
 * @brief <A function that prints the statistics of an array including minimum, maximum, mean, and median >
 * @param <arr[]> <the array of data to be printed >
 * @param <len> <the length of the array>
 * @return < N/A >
 ****************************************************************************************/

void print_statistics(unsigned char arr[], int len)
{
	printf("The minimum value in the list is %d\n",find_minimum(arr,len));
	printf("The maximum number in the list is %d\n",find_maximum(arr,len));
	printf("The mean of the list values rounded to the nearest integer = %d\n",find_mean(arr,len));
	printf("The median of the list values rounded to the closest integer = %d\n",find_median(arr,len));

}










#endif /* __STATS_H__ */
