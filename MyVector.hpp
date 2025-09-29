#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

#include <iostream>

struct MyVector {
	int* m_data;
	size_t m_size;
	size_t m_capacity;
};

	void MyVector_init(MyVector* vec, size_t capacity);
	void MyVector_init(MyVector* vec, size_t size, size_t val);
	void MyVector_destroy(MyVector* vec);
	void MyVector_clear(MyVector* vec);

	void MyVector_reserve(MyVector* vec);

	size_t MyVector_size(const MyVector* vec);
	size_t MyVector_capacity(const MyVector* vec);
	
	void MyVector_push_back(MyVector* vec, int val);
	void MyVector_pop_back(MyVector* vec);

	void MyVector_insert(MyVector* vec, size_t index, int val);
	void MyVector_erase(MyVector* vec, size_t index);

	void MyVector_print(const MyVector* vec);

#endif /* MYVECTOR_HPP */
