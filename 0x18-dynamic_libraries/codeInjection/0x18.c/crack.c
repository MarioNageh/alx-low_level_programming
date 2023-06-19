#include <stdlib.h>
int rand(){

	int values[] = { 8, 8, 7, 9, 23, 74};
	static int current_index = 0;
	return values[current_index++];
}
