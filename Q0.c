/* CS261- Assignment 1 - Q. 0*/
/* Name:
 * Date:
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>

int fooB(int* a, int* b, int c) {

}


void fooA(int* iptr){
	printf("Value = %u \n", *iptr);
	printf("Address of Int = %p \n", iptr);
	printf("Address of iptr = &p \n", &iptr);
}

int main(){
    
  /* declare an integer x */
	int x = 5;
	int* y = &x;
  
  /* print the address of x */
	printf("%p \n", (void*) &x);
    
  /* Call fooA() with the address of x */
	fooA(y);

  /* print the value of x */
	printf("%u \n", (int*) x);

  return 0;
}
