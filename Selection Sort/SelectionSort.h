/*
 * SelectionSort.h
 *
 *  Created on: Jul 22, 2019
 *      Author: alex
 */

#ifndef SELECTIONSORT_H_
#define SELECTIONSORT_H_

#include "ArrayOperations.h"

template <typename E>
void SelectionSort(E array[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		int lowValIndex = i;
		for (int j = size - 1; j > i; --j) {
			if (array[j] < array[lowValIndex]) {
				lowValIndex = j;
			}
		}
		swap(array, i, lowValIndex);
	}
}

#endif /* SELECTIONSORT_H_ */
