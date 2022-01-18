#pragma once 


template <class T> 
 
class MyVector { 
    private: 
        int capacity; 
        int size; 
        T* num; 

    public: 
        MyVector(); 
        int size(); 
        bool empty(); 
        int capacity();
        void push_back(T item);
        void pop_back(T n);
        void pop_back();
        void clear(); 
        T &operator[](int i); 

}

#include "MyVector.cxx"