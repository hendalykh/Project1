#ifndef __STACK__H__
#define __STACK__H__

#include <iostream>
#include <string>
using namespace std;

const int maximum = 500;

class stack
{
	private:
		int array[maximum];
		int top;
	public:
		stack();
		void push(char insert);
		char pop();
		bool isEmpty();
		string toString();		
};
#endif 
