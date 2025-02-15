#include <stdio.h>
#include <stdlib.h>

int* my_range(int param_1, int param_2)
{
	int size = abs(param_2-param_1) + 1;
  	int *range= (int*) malloc(size* sizeof(int));
  	int i;
  	for(i=0; i<size; i++){
    	range[i] = (param_1 < param_2) ? param_1 +i : param_1 -i;
      }
	 return range;	
}
