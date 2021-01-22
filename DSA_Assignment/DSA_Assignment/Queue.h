#pragma once
#include <iostream>
#include "Zombie.h"
typedef Zombie ItemType;
class Queue
{
	private:
		struct Node
		{
			ItemType item;
			Node* next;
		};
		Node* frontNode;
		Node* backNode;

	public:
		Queue();
		~Queue();

		bool enqueue(ItemType& item);

		bool dequeue();
		bool dequeue(ItemType& item);

		
		void getFront(ItemType& item);

		bool isEmpty();

		void display();

};

