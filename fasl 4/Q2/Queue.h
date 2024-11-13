//
// Created by pro on 11/13/2024.
//

#ifndef Q2_QUEUE_H
#define Q2_QUEUE_H


class Queue {
private:
    int *Q{nullptr};
    int f;
    int r;
    int size;
public:
    Queue() {
        size = 1;
        Q = new int[size];
        f = -1;
        r = -1;
    }

    explicit Queue(int n){
        size = n;
        Q = new int[size];
        f = -1;
        r = -1;
    }

    void push(int k);

    void pop();

    void print();
};


#endif //Q2_QUEUE_H
