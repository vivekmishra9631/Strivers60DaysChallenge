// Stack class.
class Stack {
  private:
    int* arr;   
    int peak;    
    int capacity;  
public:
    Stack(int _capacity) {
        capacity = _capacity;
        arr = new int[capacity];
        peak = -1;
    }

    void push(int num) {
        // Write your code here.
        if (peak < capacity - 1) {
            peak++;
            arr[peak] = num;
        } 
    }

    int pop() {
        // Write your code here.
        int a = -1; 

        if (peak != -1) {
            a = arr[peak];
            peak--;
        }
        return a;
    }
    
    int top() {
        // Write your code here.
        if (peak != -1) {
            return arr[peak];
        }
        else return -1;
    }
    
    int isEmpty() {
        // Write your code here.
         return peak == -1;
    }
    
    int isFull() {
        // Write your code here.
        return peak == capacity - 1;
    }

    ~Stack() {
        delete[] arr;
    }
    
};
