static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class MyCircularQueue {
private:
    vector<int> q;
    int head;
    int tail;
    int capacity;
    int count;

public:
    MyCircularQueue(int k) : q(k), head(0), tail(0), capacity(k), count(0) {}

    bool enQueue(int value) {
        if (isFull()) return false;
        q[tail] = value;
        tail = (tail + 1) % capacity;
        count++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        head = (head + 1) % capacity;
        count--;
        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return q[head];
    }

    int Rear() {
        if (isEmpty()) return -1;
        int lastIdx = (tail == 0) ? capacity - 1 : tail - 1;
        return q[lastIdx];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }
};