#include <stdio.h>
#include <stdlib.h>
#include "binary_search_array.h"

int main(int argc, char *argv[]) {
	
	// for test proporse
	int list[] = {0, 1, 4, 5, 7, 8, 9, 10, 21, 24, 28, 33, 34, 51, 70};	
	unsigned int find = 33;
	unsigned int result;
	
	result = binary_search_array(list, sizeof(list) / sizeof(int), find);
	
	if(result == -1){
		printf("Item not found.\n");
	}else{
		printf("Found %i at position %i\n", find, result);	
	}
	
	return 0;
	
}
