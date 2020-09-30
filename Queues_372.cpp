#include <iostream>
#include <type_traits>

#define MAX 10  

int front, back = -1;
int currentSize = 0;
int myQueue[MAX];

void enqueue(int x)
{
	if(back >= MAX - 1)
		std::cout << "Queue Overflow, too many values" << std::endl;
	else
	{
		if(front <= -1)
			front = 0;
		currentSize++;
		back++;

		myQueue[back] = x;
	}
}

void dequeue()
{
	if(front <= -1)
		std::cout << "Queue underflow, too little values." << std::endl;
	else
	{	
		std::cout << myQueue[front] << std::endl;
		currentSize--;
		front++;
	}
}

void display()
{
	if(front == -1)
		std::cout << "Queue is empty" << std::endl;
	else
       	{
		for(int i = front; i <= back; i++)
			std::cout << myQueue[i] << " ";
		std::cout << std::endl;
	}
}

int main()
{
	int choice, value;

	std::cout << "Exercise 3.7.2: Queues" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "1. Enqueue" << std::endl;
	std::cout << "2. Dequeue" << std::endl;
	std::cout << "3. Display queue" << std::endl;
	std::cout << "4. Exit" << std::endl;
	
	do
	{
		std::cout << "Enter choice: " << std::endl;
		std::cin >> choice;
		switch(choice)
		{
			case 1: 
			{
				std::cout << "Enter value to enqueue: " << std::endl;
				std::cin >> value;
				enqueue(value);
				break;
			}

			case 2:
			{
				std::cout << "Dequeued from array: " << std::endl;
				dequeue();
				break;
			}

			case 3:
			{
				std::cout << "Displaying the queue: " << std::endl;
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
