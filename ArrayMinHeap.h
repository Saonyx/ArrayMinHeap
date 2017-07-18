#pragma once

#include <iostream>

using namespace std;

template <class T>
class ArrayMinHeap
{
	private:
		T data;
		int heapCount;
		ArrayMinHeap *Heap;
			
	
	public:
		int dynamicallyAllocatedArray(int length);
		void insertData(T item);
		int removeData();
		void printHeapCount();
};
//constructor that takes number (initial size of the dynamically created array storage)


//insert data and remove data, and count number of items in the heapcheck

//void insert(T item)

//array copy of some sort if the array is full

//throw exception if new array cannot be allocated

//remove()
//return item;

template <class T>
T ArrayMinHeap<T>::dynamicallyAllocatedArray(int length)
{
	int * array = new int[length];
}

template <class T>
T ArrayMinHeap<T>::insertData(T item)
{
	int parentComp;
	temp = array[length];
	
	
	//Is this "heapifying" the Binary Heap????
	parentComp = 2 * length;
	while (parentComp <= item)
    {
        if (parentComp < item && array[parentComp+1] < array[parentComp])
            parentComp = parentComp + 1;
        if (temp < array[parentComp])
            break;
        else if (temp >= array[parentComp])
        {
            a[(parentComp - 1)/2] = a[parentComp];
            parentComp = 2 * parentComp;
        }
    }
    array[(parentComp -1)/2] = temp;
    return;
}

template <class T>
T ArrayMinHeap<T>::removeData()
{
	
	return item;
}
