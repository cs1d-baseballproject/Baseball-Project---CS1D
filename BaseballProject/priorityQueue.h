#ifndef PRIORITYQUEUE_H_
#define PRIORITYQUEUE_H_

#include <iostream>

using namespace std;

template<class T, class U>
class priorityQueue
{
private:
	struct node{
		node(T& _elem, U& _key): elem{_elem}, key{_key}{}
		T elem;
		U key;
	};

	// Variable Declarations
	int count;			// size of the heap
	int current;		// current element
	int capacity;		// capacity of the allocated array
	node** array;		// dynamic array of T elements

	/******************************************************************************
	 * resize
	 * 	Description: This function creates a new array of the size specified and
	 * 				 transfers the data stored in the current array to the new
	 * 				 array.
	 ******************************************************************************/
	void resize(int n){	// new capacity
		// Variable Declarations
		node** temp = new node*[n];		// new array with capacity of size n

		// PROCESSING - copy elements from the original array to the new array,
		//				delete the original and update all variables
		for(int i = 0; i < n; i++)	// run for the capacity of the new array
		{
			*(temp + i) = (i < capacity)? *(array + i): nullptr;
		}

		// delete array
		delete[] array;

		// update all variables
		array = temp;
		capacity = n;
	}

	/******************************************************************************
	 * root
	 * 	Description: This function sets the current node to the root node
	 ******************************************************************************/
	int root(){
		return 1;
	}

	/******************************************************************************
	 * parent
	 * 	Description: This function sets the current node to the parent of the
	 * 				 current node.
	 ******************************************************************************/
	int parent(){
		return current/2;
	}

	/******************************************************************************
	 * left
	 * 	Description: This function sets the current node to the left child
	 ******************************************************************************/
	int left(){
		return (hasLeft())? current*2: 0;
	}

	/******************************************************************************
	 * right
	 * 	Description: This function sets the current node to the right child
	 ******************************************************************************/
	int right(){
		return (hasRight())? current*2 + 1: 0;
	}

	/******************************************************************************
	 * hasLeft
	 * 	Description: This function returns true if the current node has a left child
	 ******************************************************************************/
	bool hasLeft(){
		return (current*2) <= count;
	}

	/******************************************************************************
	 * hasRight
	 * 	Description: This function returns true if the current node has a right child
	 ******************************************************************************/
	bool hasRight(){
		return (current*2 + 1) <= count;
	}

	/******************************************************************************
	 * isExternal
	 * 	Description: This function returns true if the current node is external
	 ******************************************************************************/
	bool isExternal(){
		return !hasRight() && !hasLeft();
	}

	/******************************************************************************
	 * isRoot
	 * 	Description: This function returns true if the current node is the root
	 ******************************************************************************/
	bool isRoot(){
		return current == 1;
	}

public:
    enum sort {ASCENDING, DESCENDING};

	// Constructor
	priorityQueue(): count{0}, current{1}, capacity{8}, array{new node*[capacity]}
	{
		for(int i = 0; i < capacity; i++)
			*(array + i) = nullptr;
	}

	/******************************************************************************
	 * insert
	 * 	Description: This function inserts the element into the tree using the
	 * 				 properties of a binary search tree.
	 ******************************************************************************/
	void insert(T& element, U& key){
		// PROCESSING - insert element into the heap
		current = ++count;

		if(!(current < capacity))						//	increase capacity
			resize(2*capacity);

		*(array + current) = new node(element, key);	//	insert node at last
														//	element of the tree

		// PROCESSING - up heap bubbling
		while(!isRoot())
		{
			if(array[parent()]->key < array[current]->key)
			{
				node* temp = array[parent()];
				array[parent()] = array[current];
				array[current] = temp;
			}
			current = parent();
		}
	}

	/******************************************************************************
	 * top
	 * 	Description: This function returns the top element
	 ******************************************************************************/
	T& top(){
		return array[root()]->elem;
	}

	/******************************************************************************
	 * removeTop
	 * 	Description: This function deletes the top and organizes the heap
	 ******************************************************************************/
	void removeTop(){
		// Variable Declarations
		bool flag = true;		// flag to terminate down heap bubbling

		// PROCESSING - delete root and set last element as the new root
		if(count == 1)							// if there is one element
		{
			delete *(array + 1);				// delete root
			*(array + count) = nullptr;
			count--;							// decrement count
		}
		else
		{
			delete *(array + 1);				// delete root
			*(array + 1) = *(array + count);	// set root to last element
			*(array + count) = nullptr;
			count--;							// decrement count

			// PROCESSING - down heap bubbling
			current = root();
			while(flag && current != 0)
			{
				if(hasLeft() && array[current]->key < array[left()]->key)
				{
					node* temp = array[left()];
					array[left()] = array[current];
					array[current] = temp;
					current = left();
				}
				else if(hasRight() && array[current]->key < array[right()]->key)
				{
					node* temp = array[right()];
					array[right()] = array[current];
					array[current] = temp;
					current = right();
				}
				else
					flag = false;
			}
		}
	}

	/******************************************************************************
	 * breadth_first
	 * 	Description: This function traverses the tree breadth-first and outputs the
	 * 				 elements of the tree.
	 ******************************************************************************/
	void breadth_first(){
		for(int i = 0; i < capacity; i++)
		{
			if(*(array + i) != nullptr)
				cout << array[i]->elem << " ";
		}
		cout << endl;
	}

	/******************************************************************************
	 * getSize
	 * 	Description: This function returns the number of elements in the tree
	 ******************************************************************************/
	int size(){
		return count;
	}

	/******************************************************************************
	 * empty
	 * 	Description: This function returns true if the tree is empty
	 ******************************************************************************/
	bool empty(){
		return count == 0;
	}

	// Destructor
	~priorityQueue(){
		for(int i = 0; i < capacity; i++)
			delete *(array + i);

		delete[] array;
		array = nullptr;
	}

    void begin()
    {
        current = root();
    }

    T& operator*()
    {
        return (*(array + current) == nullptr)? T(): array[current]->elem;
    }

    void operator++()
    {
        while(current < count - 1 && *(array + ++current) == nullptr);
    }

    void operator--()
    {
        while(current > 1 && *(array + --current) == nullptr);
    }


};

#endif /* PRIORITYQUEUE_H_ */
