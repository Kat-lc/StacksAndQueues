#include <iostream>

#define MAX 10  

int top = -1;
int myStack[MAX];

void push(int val)
{
	if(top >=MAX - 1)
		std::cout << "Stack overflow, too many values." << std::endl;
	else
	{
		top++;
		myStack[top] = val;
	}
}

void pop()
{
	if(top <= -1)
		std::cout << "Stack underflow, too little values." << std::endl;
	else
	{
		std::cout << "Popped element '" << myStack[top] << "'" << std::endl;
		top--;
	}
}

void display()
{
	if(top >= 0)
	{
		std::cout << "Stack elements are:";
		for(int i = top; i >= 0; i--)
			std::cout << myStack[i] << " ";
		std::cout << std::endl;
	} else
		std::cout << "Empty stack.";
}

int main()
{
	int choice, value;

	std::cout << "Exercise 3.7.2: Stacks" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "1. Push into stack" << std::endl;
	std::cout << "2. Pop from stack" << std::endl;
	std::cout << "3. Display stack" << std::endl;
	std::cout << "4. Exit" << std::endl;
	
	do
	{
		std::cout << "Enter choice: " << std::endl;
		std::cin >> choice;
		switch(choice)
		{
			case 1: 
			{
				std::cout << "Enter value to push:" << std::endl;
				std::cin >> value;
				push(value);
				break;
			}

			case 2:
			{
				std::cout << "Popping from stack." << std::endl;
				pop();
				break;
			}

			case 3:
			{
				std::cout << "Displaying the stack: " << std::endl;
				display();
				break;
			}
			case 4:
			{
				std::cout << "Exit" << std::endl;
				break;
			}

			default:
			{
				std::cout << "Option not available, try again." << std::endl;
			}

		}
		
	}while(choice != 4);

	return 0;
}
