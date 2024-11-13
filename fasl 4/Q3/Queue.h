//
// Created by pro on 11/13/2024.
//

#ifndef Q3_QUEUE_H
#define Q3_QUEUE_H


class Queue {
private:
    int size;
public:
    int f1;
    int f2;
    int r1;
    int r2;
    int *Q;
    Queue() {
        size = 11;
        f1 = f2 = r1 = r2 = -1;
        Q = new int[size];
    }

    explicit Queue(int n){
        size = n;
        f1 = f2 = r1 = r2 = -1;
        Q = new int[size];}

    void push(int k, int num);

    void pop(int num);

    void print(int num) const;

};


#endif //Q3_QUEUE_H
