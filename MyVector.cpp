#include "MyVector.hpp"

void MyVector::MyVector_init(MyVector* vec, size_t capacity) {
    if (capacity > 0) {
        vec->m_data = new int[capacity];
        vec->m_size = 0;
        vec->m_capacity = capacity;
    }
    else {
        std::cout << "Failed to initialize\n";
    }
}

void MyVector::MyVector_init(MyVector* vec, size_t size, size_t val) {
    if (size > 0) {
        vec->m_data = new int[size];
        vec->m_size = size;
        vec->m_capacity = size;
        for (int i = 0; i < size; ++i) {
            vec->m_data[i] = val;
        }
    }
    else {
        std::cout << "Failed to initialize\n";
    }
}

void MyVector::MyVector_destroy(MyVector* vec) {
    if (vec->m_data != nullptr) {
        delete[] vec->m_data;
        vec->m_size = 0;
        vec->m_data = 0;
    }
    else {
        std::cout << "Vector is empty, can't destroy it\n";
    }
}

void MyVector::MyVector_clear(MyVector* vec) {
    vec->m_size = 0;
}

void MyVector::MyVector_reserve(MyVector* vec) {
    vec->m_capacity *= 2;
    int* new_data = new int[vec->m_capacity];
    for (int i = 0; i < vec->m_size; ++i) {
        new_data[i] = vec->m_data[i];
    }
    delete[] vec->m_data;
    vec->m_data = new_data;
}

size_t MyVector::MyVector_size(const MyVector* vec) {
    return vec->m_size;
}

size_t MyVector::MyVector_capacity(const MyVector* vec) {
    return vec->m_capacity;
}

void MyVector::MyVector_push_back(MyVector* vec, int val) {
    if (vec->m_capacity == vec->m_size) {
        vec->MyVector_reserve(vec);
    }
    vec->m_data[vec->m_size++] = val;
}

void MyVector::MyVector_pop_back(MyVector* vec) {
    if (vec->m_capacity == 0) {
        std::cout << "Vector is Empty, can't pop_back\n";
        return;
    }
    --vec->m_size;
}
 
void MyVector::MyVector_insert(MyVector* vec, size_t index, int val) {
    if (index < 0 || index > vec->m_size) {
        std::cout << "Invalid index\n";
        return;
    }
    else if (vec->m_capacity == vec->m_size) {
        vec->MyVector_reserve(vec); 
    }
    for (int i = vec->m_size; i > index; --i) {
        vec->m_data[i] = vec->m_data[i - 1];
    }
    vec->m_data[index] = val;
    ++vec->m_size;
}

void MyVector::MyVector_erase(MyVector* vec, size_t index) {
    if (index < 0 && index >= vec->m_size) {
        std::cout << "Invalid index\n";
        return;
    }
    for (int i = index; i < vec->m_size - 1; ++i) {
        vec->m_data[i] = vec->m_data[i + 1];
    }
    --vec->m_size;
}

void MyVector::MyVector_print(const MyVector* vec) {
    for (int i = 0; i < vec->m_size; ++i) {
        std::cout << vec->m_data[i] << ' ';
    }
    std::cout << std::endl;
}
