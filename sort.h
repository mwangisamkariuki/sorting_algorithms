#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void _qsort(int *a, int low, int high, int size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge_partition(size_t lo, size_t hi, int *array, int *base);
void swap_root(int *array, size_t root, size_t hi, size_t size);
void heap_sort(int *array, size_t size);

#endif /*sorting*/
