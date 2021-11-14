#ifndef _Queue_h
#define _Queue_h

/*
    Queue.h

    class definition for the Queue class.

    assignment: CSCI 262 Lab - Queues, part 1

    author:

    last modified: 9/7/2017
*/

#include <cstdlib>

class Queue {
public:
	// max elements in queue
	static const size_t ARRAY_SZ = 5;

	Queue() { _f = 0; _b = 0; _size = 0;}

	bool enqueue(char c) {
        if(_size == ARRAY_SZ){
            return false;
        }
        _data[_b] = c;
        _b = (_b + 1) % 6;
        _size++;
        return true;
    }
	bool dequeue()  {
        if(is_empty()) return false;
        _f = (_f + 1) % 6;
        _size--;
        return true;
    }
    char front() const { return _data[_f];}
	bool is_empty() const { if(_size == 0) { return true; } return false;}
    int size() const { return _size; }

private:
	char _data[ARRAY_SZ]{};
    int _f;
    int _b;
    int _size;
};

#endif
