#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

char contents[STACK_SIZE]; 
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

void push(char item) {
	if (is_full())  {
		stack_overflow(); 
	} else {
		contents[top++] = item;
	}
}

char peek(void) {
	return contents[top-1];
}

char pop(void) {
	if (is_empty()) {
		stack_underflow(); 
	} else {
		return contents[--top];
	}

	return 0;
}

bool is_balanced(void) {
	int c;
	while ((c = getchar()) != '\n') {
	   switch(c) {
		   case '[':
		   case '(':
		   case '{':
			   push(c);
			   break;
		   case ']':
		   case ')':
		   case '}':
			   if (!is_empty()) {
				   if (
					   ((c == ']') && '[' == peek()) || 
					   ((c == ')') && '(' == peek()) || 
					   ((c == '}') && '{' == peek()))
				   {
					   pop();
				   } else {
						return false;   
				   }
			   }
			   break;
	   }
	}

	return is_empty();
}

int main(void) {
	printf("Enter parentheses and/or braces: ");

	if (is_balanced()) {
		printf("Parentheses/braces are nested properly\n");
	} else {
		printf("Parentheses/braces are not nested properly\n");
	}

	return 0;
}
