#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
  private:
    vector<int> heap;

    void heapify(int index){
      // calc left child
      int leftChild = index * 2 + 1;
      // calc right child
      int rightChild = index * 2 + 2;

      // assume the given value as maximum
      int largest = index;

      // if left child is larger, store its index
      if(leftChild < heap.size()  && heap[leftChild] > heap[largest]){
        largest = leftChild;
      }

      // if right child is larger, store its index
      if(rightChild < heap.size() && heap[rightChild] > heap[largest]){
        largest = rightChild;
      }

      // if largest index is not equal to node provided
      // swap values of both of them
      // then again apply heapify reciursively
      if(largest != index){
        int temp = heap[largest];
        heap[largest] = heap[index];
        heap[index] = temp;

        heapify(largest);
      }
    }

  public:
    void insert(int value){
      // push value into heap
      heap.push_back(value);

      // get the index of the value pushed
      int index = heap.size() - 1; 

      // get index of parent
      int parent = (index - 1) / 2;
      
      // keep swapping the new value with its parent until
      // parent is smaller the new value and the new value isnt at root
      while(index > 0 && heap[parent] < heap[index]){
        int temp = heap[parent];
        heap[parent] = heap[index];
        heap[index] = temp;

        index = parent;
        parent = (index - 1) / 2;
      }

    }

    int extractMax(){
      int heapSize = heap.size();
      
      // return -1 if heap is empty
      if(!(heapSize > 0)){
        return -1;
      }
      
      // swap root (largest number) with last index
      int max = heap[0];
      heap[0] = heap[heapSize - 1];
      heap[heapSize - 1] = max;

      // pop the last element which is now the max
      heap.pop_back();

      // heapify the root again
      heapify(0);

      return max;
    }

    // display the heap array
    void display(){
      for(int i=0;i<heap.size();i++){
        cout << heap[i] << " ";
      }
      cout << endl;
    }
};

int main(){
  MaxHeap maxHeap;

  maxHeap.insert(5);
  maxHeap.insert(10);
  maxHeap.insert(7);
  maxHeap.insert(1);
  maxHeap.insert(98);
  maxHeap.insert(85);
  maxHeap.insert(34);
  maxHeap.insert(97);
  maxHeap.insert(18);
  maxHeap.insert(6);

  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;
  cout << maxHeap.extractMax() << endl;

  return 0;
}