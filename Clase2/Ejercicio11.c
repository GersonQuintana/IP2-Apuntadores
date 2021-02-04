#include <studio.h>

int main(){
	int v = 18, w = 21;
	const int *ptr = &v;
	ptr = &w;
	*ptr = 16
	return 0;
}