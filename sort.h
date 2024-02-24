#ifndef SORT_H
#define SORT_H

#include <stddef.h>

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
int main(void);
void insertion_sort_list(listint_t **list);
void change_nodes(listint_t **k, listint_t **m1, listint_t *m2);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quickSort(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap(listint_t *a, listint_t *b);
void counting_sort(int *array, size_t size);
int integer_count(int *array, size_t size, int range);
void merge_sort(int *array, size_t size);
void merge_compare(int *array, size_t start, size_t stop, int *new);

#endif
