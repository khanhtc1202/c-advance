//
// Created by khanh.tran on 2017/12/16.
//

#ifndef LEARN_LIBSORT_H
#define LEARN_LIBSORT_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_LENGHT 2000000

void swap(int *a, int *b);

void mergeSort(int *a, int left, int right);
void selectionSort(int *a, int n);
void bubbleSort(int *a, int n);
void quickSort(int *a, int low, int high);

#endif //LEARN_LIBSORT_H
