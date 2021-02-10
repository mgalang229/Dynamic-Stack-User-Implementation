#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H

class DynIntStack {
	private:
		struct StackNode {
			int value;
			StackNode *next;
		};
		StackNode *top;
	public:
		DynIntStack() {
			top = NULL;
		}
		void push(int num);
		void pop(int &num);
		bool isEmpty();
};

#endif
