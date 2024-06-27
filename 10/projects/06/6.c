#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE]; 
int top = 0;

void make_empty(void) {
	top = 0;
}

void stack_overflow() {
	printf("stack overflow");
	exit(-1);
}

void stack_underflow() {
	printf("stack underflow");
	exit(-1);
}

bool is_empty(void) {
	return top == 0;
}

bool is_full(void) {
	return top == STACK_SIZE;
}

void push(int item) {
	if (is_full())  {
		stack_overflow(); 
	} else {
		contents[top++] = item;
	}
}

int peek(void) {
	return contents[top-1];
}

int pop(void) {
	if (is_empty()) {
		stack_underflow(); 
	} else {
		return contents[--top];
	}

	return 0;
}

int main(void) {
	char ch;
	bool is_done = true;
	while (is_done) {
		printf("Enter an RPN expression: ");

		while (true) {
			scanf(" %c", &ch);
			if (ch == 'q') return 0;
			if (ch == '=') break;
			if (isdigit(ch)) {
				push(ch - '0');
			}

			int op1, op2;
			switch(ch) {
				case '+': 
					op1 = pop();
					op2 = pop();
					push(op1 + op2);
					break;
				case '-':
					op1 = pop();
					op2 = pop();
					push(op2 - op1);
					break;
				case '*':
					op1 = pop();
					op2 = pop();
					push(op1 * op2);
					break;
				case '/':
					op1 = pop();
					op2 = pop();
					if (op2 == 0) {
						printf("Can't divide by zero\n");
						exit(-1);
					}
					push(op2 / op1);
					break;
			}
		}

		printf("Value of expression: %d\n", pop());
	}
	
	return 0;
}
