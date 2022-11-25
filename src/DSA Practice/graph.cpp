#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        this->arr[0] = -1;
        this->size = 0;
    }

    void insert(int val)
    {
        this->size += 1;
        int index = size;
        this->arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (this->arr[parent] < this->arr[index])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
                return;
        }
    }

    void print()
    {
        for (int i = 1; i <= this->size; i++)
        {
            cout << this->arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete";
            return;
        }
        this->arr[1] = this->arr[size];
        this->size -= 1;
        int i = 1;
        while (i < size)
        {
            int left = i * 2;
            int right = i * 2 + 1;

            if (left < size && arr[i] < arr[left])
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else if (right < size && arr[i] < arr[right])
            {
                swap(arr[i], arr[right]);
                i = right;
            }
            else
                return;
        }
    }
};

void heapify(vector<int> &arr, int i, int n)
{
    int large = i;
    int left = i * 2;
    int right = i * 2 + 1;
    if (left < n && arr[large] < arr[left])
        large = left;
    if (right < n && arr[large] < arr[right])
        large = right;

    if (large != i)
    {
        swap(arr[i], arr[large]);
        heapify(arr, large, n);
    }
}

int main(int argc, char const *argv[])
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();

    vector<int> array = {-1, 54, 53, 55, 52, 50};
    for (int i = array.size() / 2; i > 0; i--)
    {
        heapify(array, i, array.size());
    }

    for (auto i : array)
        cout << i << " ";
    cout << endl;
    return 0;
}
