#include "linkedList.h"
//Simple Generic linked List (Suported Data Types are Declared at the end of this file)
//Notes:  Still looking for a better way to seperate template declarations from implimentation
//For now I will use explicit decleration to prevent linkage errors

//FUNCTION SUMMARY: Constructor that creates and empy linked list
template<typename ElementType>
LinkedList<ElementType>::LinkedList()
{
	root = NULL;
	size = 0;
}

//FUNCTION SUMMARY: Deconstructor that deletes all of the LinkedList memory from the heap
template<typename ElementType>
LinkedList<ElementType>::~LinkedList()
{
	while(root != NULL)
	{
		PopFront();
	}
}

//FUNCTION SUMMARY: Adds a element to the back of the linked list.
//RUNTIME: O(n)
//NOTE: [Could be O(1) if I add another pointer to the back]
template<typename ElementType>
void LinkedList<ElementType>::PushBack(ElementType element)
{
	if(root==NULL)
	{
		root = new Node<ElementType>(element);
		size++;
	}else
	{
		Node<ElementType>* current = root;
		while(current->next != NULL)
		{
			current = current->next;
		}
		current->next = new Node<ElementType>(element);
		size++;
	}
}

//FUNCTION SUMMARY: Removes first element from the list.  Does nothing if List is empty
//RUNTIME: O(n)
template<typename ElementType>
void LinkedList<ElementType>::PopFront()
{
	if(root != NULL)
	{
	Node<ElementType>* temp = root;
	root = root->next;
	delete temp;
	size--;
	}

}


//FUNCTION SUMMARY: Prints the entire LinkedList.
//RUNTIME: O(n)
template<typename ElementType>
void LinkedList<ElementType>::PrintList()
{
	Node<ElementType>* current = root;
	int count = size;
	while(current != NULL)
	{
		if(count <= 1)
		{
		cout << current->data<<endl;
		}else
		{
		cout << current->data<< ", ";
		}
		current = current->next;
		count--;
	}

}

//Current Supported Elements
template class LinkedList<int>; 
template class LinkedList<float>;
template class LinkedList<double>;
template class LinkedList<long>;
