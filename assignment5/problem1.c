/**
 * @file problem1.c
 * @author Jesus Cristian Gil Galindo (jgilgalindo1@toromail.csudh.edu)
 * @brief This program prints the Union, Intersection, and Complements of a given set A and B from 
 * the user.
 * @version 0.1
 * @date 2022-12-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

// use this structure to denote the results of set union, intersection and complement
// as you will see, result of the set operations in this problem will contain 10 elements
// at most, n denotes length of the result elements in result array.
struct ResultSet
{
	int n;
	int result[10];
};
// print out the elements in an array in set format within the index range [0, n).
// Note that when we call this function, n usually is length of array.
void printArray(int array[], int n);

// check if array contains element num within the index range [0, n)
int checkElementIn(int array[], int n, int num);

// return the result of the union of array1 elements within the index range [0, n1)
// and array2 elements within the index range [0, n2). Note that when we call this function,
// n1 and n2 usually are the length of array1 and array2, respectively.
struct ResultSet returnUnion(int array1[], int n1, int array2[], int n2);

// return the result of the intersection of array1 elements within the index range [0, n1)
// and array2 elements within the index range [0, n2). Note that when we call this function,
// n1 and n2 usually are the length of array1 and array2, respectively.
struct ResultSet returnIntersection(int array1[], int n1, int array2[], int n2);

// return the result of the complement of array1 elements within the index range [0, n1)
// while n denotes that this function is considering elements in the universal set within
// the range of [0, n). Note that when we call this function, n and n1 usually are the
// length of universal and array1, respectively.
struct ResultSet returnComplement(int universal[], int n, int array1[], int n1);

int main()
{
	// declare variables for size of setA and setB
	int size1, size2, *ip, *iq;
	// intitialize the universal set to integer elements ranging from 0-9 inclusive
	int setU[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int sizeU = sizeof(setU) / sizeof(int);

	// prompt user to enter size of setA
	printf("Enter size of set A: ");
	scanf("%d", &size1);
	// prompt user to enter size of setB
	printf("Enter size of set B: ");
	scanf("%d", &size2);

	// declare setA & setB
	int setA[size1], setB[size2];

	// prompt user to enter elements for set A
	printf("Enter elements for set A: ");
	// traverse through the set to insert integer elements to set A
	for (ip = setA; ip < setA + size1; ip++)
	{
		scanf("%d", ip);
	}
	// prompt user to enter elements for set B
	printf("Enter elements for set B: ");
	// traverse through the set to insert integer elements to set A
	for (iq = setB; iq < setB + size2; iq++)
	{
		scanf("%d", iq);
	}
	// initialize structs
	struct ResultSet
		setUnion = returnUnion(setA, size1, setB, size2),
		setIntersection = returnIntersection(setA, size1, setB, size2),
		setCompOfA = returnComplement(setU, sizeU, setA, size1),
		setCompOfB = returnComplement(setU, sizeU, setB, size2)
;

	// print results for all sets
	printf("Set A: ");
	printArray(setA, size1);
	printf("\nSet B: ");
	printArray(setB, size2);
	printf("\nUnion: ");
	printArray(setUnion.result, setUnion.n);
	printf("\nIntersection: ");
	printArray(setIntersection.result, setIntersection.n);
	printf("\nComplement of A: ");
	printArray(setCompOfA.result, setCompOfA.n);
	printf("\nComplement of B: ");
	printArray(setCompOfB.result, setCompOfB.n);

	return 0;
}
/**
 * @brief returnUnion
 *
 * @param array1
 * @param n1
 * @param array2
 * @param n2
 * @return struct ResultSet
 */
struct ResultSet returnUnion(int array1[], int n1, int array2[], int n2)
{
	struct ResultSet newSet;
	newSet.n = 0;

	// traverse through setA
	for (int i = 0; i < n1; i++)
	{
		// add elements of setA to newSet if they are non-repeating
		if (!checkElementIn(newSet.result, newSet.n, array1[i]))
		{
			newSet.result[newSet.n] = array1[i];
			newSet.n++;
		}
	}
	//traverse through setB
	for (int i = 0; i < n2; i++)
	{
		// add elements of setB to newSet if they are non-repeating
		if (!checkElementIn(newSet.result, newSet.n, array2[i]))
		{
			newSet.result[newSet.n] = array2[i];
			newSet.n++;
		}
	}

	return newSet;
}
/**
 * @brief returnIntersection
 *
 * @param array1
 * @param n1
 * @param array2
 * @param n2
 * @return struct ResultSet
 */
struct ResultSet returnIntersection(int array1[], int n1, int array2[], int n2)
{
	struct ResultSet newSet;
	newSet.n = 0;
	for (int i = 0; i < n1; i++)
	{
		if (checkElementIn(array2, n2, array1[i]))
		{
			newSet.result[newSet.n] = array1[i];
			newSet.n++;
		}
	}

	return newSet;
}
/**
 * @brief returnComplement
 *
 * @param universal
 * @param n
 * @param array1
 * @param n1
 * @return struct ResultSet
 */
struct ResultSet returnComplement(int universal[], int n, int array1[], int n1)
{
	struct ResultSet newSet;
	newSet.n = 0;

	for (int i = 0; i < n; i++)
	{
		if (!checkElementIn(array1, n1, universal[i]))
		{
			newSet.result[newSet.n] = universal[i];
			newSet.n++;
		}
	}
	return newSet;
}

/**
 * @brief checkElementIn
 *
 * @param array
 * @param n
 * @param num
 * @return int
 */
int checkElementIn(int array[], int n, int num)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] == num)
			return 1;
	}
	return 0;
}

/**
 * @brief printArray
 *
 * @param array
 * @param n
 */
void printArray(int array[], int n)
{
	printf("{");
	for (int i = 0; i < n; i++)
	{
		printf("%d", array[i]);
		if (i != n - 1)
			printf(",");
	}
	printf("}");
}