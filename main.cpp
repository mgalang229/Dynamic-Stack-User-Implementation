#include <bits/stdc++.h>
#include "DynIntStack.h"

using namespace std;

void DynIntStack::push(int num) {
	StackNode *newNode;
	newNode = new StackNode;
	newNode->value = num;
	if (isEmpty()) {
		top = newNode;
		newNode->next = NULL;
	} else {
		newNode->next = top;
		top = newNode;
	}
}

void DynIntStack::pop(int &num) {
	StackNode *temp;
	if (isEmpty()) {
		cout << "The stack is empty.\n";
	} else {
		num = top->value;
		temp = top->next;
		delete top;
		top = temp;
	}
}

bool DynIntStack::isEmpty() {
	bool status;
	if (!top) {
		status = true;
	} else {
		status = false;
	}
	return status;
}

int main() {
	DynIntStack stack;
	int catchVar;
	
	cout << "Pushing 5\n";
	stack.push(5);
	cout << "Pushing 10\n";
	stack.push(10);
	cout << "Pushing 15\n";
	stack.push(15);
	
	cout << "Popping...\n";
	stack.pop(catchVar);
	cout << catchVar << endl;
	stack.pop(catchVar);
	cout << catchVar << endl;
	stack.pop(catchVar);
	cout << catchVar << endl;
	cout << "Attempting to pop again... ";
	stack.pop(catchVar);
	return 0;
}
