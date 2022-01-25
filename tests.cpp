#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"

        
TEST_CASE("testing size() and push_back(T item)") {
    MyVector<int> v = MyVector<int>(); 
    v.push_back(1);
    v.push_back(-3);
    v.push_back(10);

    CHECK(v.size() == 3); 

    MyVector<int> a = MyVector<int>(); 
    a.push_back(1);
    CHECK(a.size() == 1); 
   
    MyVector<int> b = MyVector<int>(); 
    CHECK(b.size() == 0); 
} 

TEST_CASE("testing empty()") {
    MyVector<int> v = MyVector<int>(); 
    v.push_back(1);
    v.push_back(-3);
    v.push_back(10);

    CHECK(v.empty() == false); 

    MyVector<int> a = MyVector<int>(); 
    CHECK(a.empty() == true); 

}

TEST_CASE("testing capacity()") { 
    MyVector<int> v = MyVector<int>(); 
    CHECK(v.capacity() == 10); 
    
}

TEST_CASE("testing pop_back()") { 
    MyVector<int> v = MyVector<int>(); 
    v.push_back(1);
    v.push_back(-3);
    v.push_back(10);
    v.pop_back();
    v.pop_back();
    CHECK(v.size() == 1); 
    v.pop_back();
    CHECK(v.size() == 0); 
    CHECK(v.empty() == true); 
}

TEST_CASE("testing pop_back(int n) and v[i]") { 
    MyVector<double> v = MyVector<double>(); 
    v.push_back(1.2);
    v.push_back(-3.1);
    v.push_back(10.01);
    v.pop_back(0);
    CHECK(v[0] == -3.1); 

    MyVector<double> a = MyVector<double>(); 
    a.push_back(1.2);
    a.push_back(-3.1);
    a.push_back(10.01);
    a.pop_back(1);
    CHECK(a[1] == 10.01); 
    
}

TEST_CASE("testing clear()") { 
MyVector<double> v = MyVector<double>(); 
    v.push_back(1.2);
    v.push_back(-3.1);
    v.push_back(10.01);
    v.pop_back(0);
    v.clear();
    CHECK(v.size() == 0); 
    CHECK(v.empty() == true); 
}














    


