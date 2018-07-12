#include <stdio.h>
#include <stdlib.h>
#ifndef INCLUDE_BIN_SEARCH_ARR_H
#include "binary_search_array.h"
#endif

/*
 * Binary Search With Array.
 * 
 * Will return the position of searched value.
 * Do not support search of negative numbers.
 * 
 * @param int list[]
 * @param size_t len
 * @param unsigned int find
 * @return unsigned int
*/
unsigned int binary_search_array(int list[], size_t len, int find){
	
	unsigned int start = 0;
	unsigned int end = len - 1;
	unsigned int pos = (start + end) / 2;
	
	while(start <= end && pos >= 0 && pos <= (len -1)){
		
		if(list[pos] == find){
			return pos;
		}else{
			if(list[pos] > find){
				end = pos - 1;		
			}else{
				start = pos + 1;
			}
		}
		pos = (start + end) / 2;
	}
	// if not found
	return -1;
}
