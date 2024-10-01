// C program to find the size of pointer to pointer
#include <stdio.h>

int main()
{
	// defining single and double pointers
	int a = 5;
	int* ptr = &a;
	int** d_ptr = &ptr;

	// size of single pointer
	printf(" Size of normal Pointer: %d \n", sizeof(ptr));

	// size of double pointer
	printf(" Size of Double Pointer: %d \n", sizeof(d_ptr));

    int c = 11;
    int* p, **q;
    p = &c;
    q = &p;

    printf("%p\n",q);
    printf("q double pointer'inin degeri: %d\n",**q);

    

	return 0;
}
