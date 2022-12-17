/*
  Exercise 1: Malloc and Calloc

  1) Ask a user the size of an array of integer.
  2) Allocate the array with help of malloc/calloc.
  3) Initialize each element of the array to a random number between 1 and 100.
  4) Ask the user to enter a number to be searched in the array
  5) Define a function linearsearch that find a given number in the
  array and return its index.
  6) Print the index of the given number if it exists in the array.

 */
  
#include<stdio.h>
#include<stdlib.h>

int linearsearch(int,int *,int);

int linearsearch(int m,int *b,int k)
{
    int i=0;
    for(i=0;i<m;i++)
      if(b[i] == k)
	return i;
    
    return -1;  // If key was not found in array a
}

int main(){
    int i,*arr,n,key;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    //    arr=(int*)malloc(n*sizeof(int));
    arr=(int*)calloc(n,sizeof(int));
    
    // Initialize the array
    for(i=0;i<n;i++)
      arr[i]=rand()%100 + 1;

    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
    puts("");

    printf("Enter the number to be searched: ");
    scanf("%d",&key);

    if(linearsearch(n,arr,key) == -1)
      printf("The number %d is not present in the array\n",key);
    else
      printf("The number %d was found at index %d\n",key,linearsearch(n,arr,key));
    
    free(arr);
    
    return 0;
}

