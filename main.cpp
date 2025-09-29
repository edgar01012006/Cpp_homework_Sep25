#include "MyVector.hpp"

int main() {
    MyVector vec;

    // Test: Initialization with capacity
    MyVector_init(&vec, 5);
    std::cout << "After init(capacity=5): ";
    MyVector_print(&vec);
    std::cout << "Size: " << MyVector_size(&vec) << ", Capacity: " << MyVector_capacity(&vec) << "\n";

    // Test: Push back
    MyVector_push_back(&vec, 10);
    MyVector_push_back(&vec, 20);
    MyVector_push_back(&vec, 30);
    std::cout << "After push_back(10, 20, 30): ";
    MyVector_print(&vec);

    // Test: Pop back
    MyVector_pop_back(&vec);
    std::cout << "After pop_back(): ";
    MyVector_print(&vec);

    // Test: Insert
    MyVector_insert(&vec, 1, 99);
    std::cout << "After insert(1, 99): ";
    MyVector_print(&vec);

    // Test: Erase
    MyVector_erase(&vec, 1);
    std::cout << "After erase(1): ";
    MyVector_print(&vec);

    // Test: Clear
    MyVector_clear(&vec);
    std::cout << "After clear(): ";
    MyVector_print(&vec);
    std::cout << "Size after clear: " << MyVector_size(&vec) << "\n";

    // Test: Init with size and value
    MyVector vec2;
    MyVector_init(&vec2, 4, 7);
    std::cout << "vec2 after init(size=4, val=7): ";
    MyVector_print(&vec2);

    // Test: Destroy
    MyVector_destroy(&vec);
    MyVector_destroy(&vec2);

    return 0;
}
