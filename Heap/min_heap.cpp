#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
    int *arr;
    int size; // total elements in heap
    int total_size; // total size of array

public:
    MinHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    // Insert into the heap
    void insert(int value)
    {
        if(size == total_size)
        {
            cout << "Heap Overflow\n";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        // Compare with parent, and move up if smaller
        while(index > 0 && arr[(index - 1) / 2] > arr[index])
        {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }

        cout << value << " is inserted into the heap\n";
    }

    // Print heap
    void print()
    {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Heapify to maintain min heap property
    void Heapify(int index)
    {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if(left < size && arr[left] < arr[smallest])
            smallest = left;

        if(right < size && arr[right] < arr[smallest])
            smallest = right;

        if(smallest != index)
        {
            swap(arr[index], arr[smallest]);
            Heapify(smallest);
        }
    }

    // Delete the minimum element (root)
    void Delete()
    {
        if(size == 0)
        {
            cout << "Heap UnderFlow\n";
            return;
        }

        cout << arr[0] << " deleted from the heap\n";
        arr[0] = arr[size - 1];
        size--;

        if(size == 0)
            return;

        Heapify(0);
    }

};

int main()
{
    MinHeap h(10);
    h.insert(20);
    h.insert(10);
    h.insert(30);
    h.insert(5);
    h.insert(15);

    cout << "Min Heap: ";
    h.print();

    h.Delete();

    cout << "After deletion: ";
    h.print();

    return 0;
}
