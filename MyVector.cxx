#include <iostream> 
#include <array>
#include "MyVector.h"

template <class T>
MyVector<T> :: MyVector() { 
    capacity_i = 10; 
    length = 0; 
    num = new T[10];
}

template <class T>
int MyVector<T> :: size() { 
    return length;
}

template <class T>
int MyVector<T> :: capacity() { 
    return capacity_i; 
}

template <class T>
void MyVector<T> :: push_back(T item) { 
    if (length < capacity_i) { 
        T* p = new T[length+1];
        for (int i = 0; i < length; i++) { 
            p[i] = num[i]; 
        }
        delete[] num; 
        p[length] = item; 
        num = p; 
        length++; 
    }
    
}

template <class T>
void MyVector<T> :: pop_back() { 
    if (length > 0) { 
        T* p2 = new T[capacity_i-1]; 
        for (int i = 0; i <= capacity_i-2; i++) { 
            p2[i] = num[i]; 
        }
        delete[] num; 
        num = p2; 
        length--;
    }
}

template <class T>
void MyVector<T> :: pop_back(int n) { 
    if ((length > 0) && (n <= length-1)) { 
        T* p3 = new T[capacity_i-1]; 
        for (int i = 0; i < capacity_i; i++) { 
            if (i == n) { 
                p3[i] = num[i+1]; 
            }
            else { 
                p3[i] = num[i]; 
            }

        }
    delete[] num; 
    num = p3; 
    length--; 
    }
}

template <class T>
void MyVector<T> :: clear() { 
  
    length = 0; 
    delete[] num; 
    
}

template <class T>
bool MyVector<T> :: empty() { 
    if (length == 0) {
        return true; 
    }
    return false; 
}

template <class T>
T& MyVector<T>::operator[](int i) { 
    return num[i];
}




















 