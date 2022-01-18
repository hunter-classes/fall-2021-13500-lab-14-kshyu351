#include <iostream> 
#include <array>
#include "MyVector.h"

template <class T>
MyVector<T> :: MyVector() { 
    capacity = 10; 
    size = 0; 
    T num[10]; 
}

template <class T>
int MyVector<T> :: size() { 
    return size;
}

template <class T>
int MyVector<T> :: capacity() { 
    return capacity; 
}

template <class T>
void MyVector<T> :: push_back(T item) { 
    T* p = new T[capacity+1];
    for (int i = 0; i < capacity; i++) { 
        p[i] = num[i]; 
    }
    delete[] num; 
    p[capacity] = item; 
    num = p; 
    
}

template <class T>
void MyVector<T> :: pop_back() { 
    T* p2 = new T[capacity-1]; 
     for (int i = 0; i <= capacity-2; i++) { 
        p2[i] = num[i]; 
    }
    delete[] num; 
    num = p2; 
}

template <class T>
void MyVector<T> :: pop_back(int n) { 
    T* p3 = new T[capacity-1]; 
     for (int i = 0; i < capacity; i++) { 
         if (i == n) { 
             p3[i] = num[i+1]; 
         }
         else { 
            p3[i] = num[i]; 
         }

     }
    delete[] num; 
    num = p3; 
}

template <class T>
void MyVector<T> :: clear() { 
    delete[] num; 
    //is that all ? 
}

template <class T>
bool MyVector<T> :: empty() { 
    if (num.empty()) {
        return true; 
    }
    else { 
        return false; 
    }
}


















 