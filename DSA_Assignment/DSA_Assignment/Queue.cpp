#include "Queue.h"

Queue::Queue()
{
	frontNode = NULL;
	backNode = NULL;
}

Queue::~Queue()
{
	Node* delNode;
	while (frontNode != NULL)
	{
		delNode = frontNode;
		frontNode = frontNode->next;
		delete delNode;
	}
}


bool Queue::enqueue(ItemType& item)
{
	Node* newNode = new Node;
	newNode->item = item;
	newNode->next = NULL;

	if (isEmpty())	
	{
		frontNode = newNode;
	}
	else
	{
		backNode->next = newNode;
	}
	backNode = newNode; 
	return true;
}

bool Queue::dequeue()
{
	Node* delNode;
	delNode = frontNode;
	if (frontNode == backNode)
	{
		frontNode = NULL;
		backNode = NULL;
	}
	else if (isEmpty())
	{
		return false;
	}
	else
	{
		frontNode = frontNode->next;
		delNode->next = NULL;
	}
	delete delNode;
	return true;
}

bool Queue::dequeue(ItemType& item)
{
	Node* delNode;
	delNode = frontNode;
	item = delNode->item;
	if (frontNode == backNode)
	{
		frontNode = NULL;
		backNode = NULL;
	}
	else if (isEmpty())
	{
		return false;
	}
	else
	{
		frontNode = frontNode->next;
		delNode->next = NULL;
	}
	delete delNode;
	return true;
}

void Queue::getFront(ItemType& item)
{
	item = frontNode->item;
}

bool Queue::isEmpty()
{
	return (frontNode == NULL && backNode == NULL);
}

void Queue::display()
{
	Node* printNode;
	printNode = frontNode;
	while (printNode != NULL)
	{
		printNode->item.display();
		if (printNode == backNode)
		{
			break;
		}
		printNode = printNode->next;
	}
}