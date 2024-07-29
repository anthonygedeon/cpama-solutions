#include <assert.h>
#include <stdbool.h> /* C99 only */
#include <stdlib.h>

#define STACK_SIZE 5

/* external variables */ 
int contents[STACK_SIZE]; 
int* top_ptr = contents;

void stack_overflow(void) {
	abort();
}

void stack_underflow(void) {
	abort();
}

void make_empty(void) {
	top_ptr = &contents[0];
}

bool is_empty(void) {
	return top_ptr <= &contents[0];
}

bool is_full(void) {
	return top_ptr == &contents[STACK_SIZE];
}

void push(int i) {
	if (is_full())
		stack_overflow(); 
	else
		*top_ptr++ = i;
}

int pop(void) {
	if (is_empty())
		stack_underflow(); 
	else
		return *--top_ptr;

	return -1;
}

int main(void) {
	push(1);
	assert(contents[0] == 1);

	int value = pop();
	assert(value == 1);
	
	push(111);
	push(222);
	push(333);
	assert(is_empty() == false);

	pop();
	pop();
	pop();

	assert(is_empty());

	return 0;
}
