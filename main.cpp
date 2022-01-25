#include <iostream> 
#include "MyVector.h" 


int main() { 
    //creating the MyVector object called 'v' 
    MyVector<double> v = MyVector<double>(); 
    

    //testing the size() and capacity() functions 
    std::cout << "Size of vector of doubles: " << v.size() << std::endl; 
    std::cout << "Capacity of vector of doubles: " << v.capacity() << std::endl; 
    v.push_back(5.5); 
    std::cout << "Size of vector of doubles: " << v.size() << std::endl; 

    //adding elements all type double 
    v.push_back(9.5); 
    v.push_back(1.2); 
    v.push_back(-3.1); 
    v.push_back(8.6); 

    //printing the vector to see if elements are in order 
    for (int i = 0; i < v.size(); i++) { 
        std::cout << v[i] << std::endl; 
    }
    std::cout << "Size of vector of doubles: " << v.size() << std::endl;

    //testing pop_back() 
    std::cout << "Removing one element from behind..." << std::endl; 
    v.pop_back(); 
    std::cout << "Size of vector of doubles: " << v.size() << std::endl; 


    //testing pop_back(int n) 
    v.pop_back(0); 
    std::cout << "Size of vector of doubles: " << v.size() << std::endl;

    //printing values
    for (int i = 0; i < v.size(); i++) { 
        std::cout << v[i] << std::endl; 
    }

    //testing empty() 
    std::cout << "1 = empty, otherwise 0: " << v.empty() << std::endl; 
    std::cout << "Clearing the vector..." << std::endl; 

    //testing clear() 
    v.clear(); 
    std::cout <<  "1 = empty, otherwise 0: " << v.empty() << std::endl; 


    MyVector<int> a = MyVector<int>(); 
     a.push_back(9); 
    a.push_back(1); 
    a.push_back(-3); 
    a.push_back(8); 
    a.push_back(9); 
    a.push_back(1); 
    a.push_back(-3); 
    a.push_back(8); 
    a.push_back(9); 
    a.push_back(1); 
    a.push_back(-3); 
    a.push_back(8); 
      std::cout << "Size of vector of ints: " << a.size() << std::endl; 
        std::cout << "Capacity of vector of ints: " << a.capacity() << std::endl; 
  for (int i = 0; i < a.size(); i++) { 
        std::cout << a[i] << std::endl; 
    }
    


    
    

 


  

}

