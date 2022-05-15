#pragma once 


template <class T> 
 
class MyVector { 
    private: 
        int capacity_i; 
        int length; 
        T* num; 

    public: 
        MyVector(); 
        int size(); 
        bool empty(); 
        int capacity();
        void push_back(T item);
        void pop_back(int n);
        void pop_back();
        void clear(); 
        T &operator[](int i); 

};

#include "MyVector.cxx"