#include "MyVector.hpp"

int main() {
    MyVector vec;

    // Test: Initialization with capacity
    vec.MyVector_init(&vec, 5);
    std::cout << "After init(capacity=5): ";
    vec.MyVector_print(&vec);
    std::cout << "Size: " << vec.MyVector_size(&vec) << ", Capacity: " << vec.MyVector_capacity(&vec) << "\n";

    // Test: Push back
    vec.MyVector_push_back(&vec, 10);
    vec.MyVector_push_back(&vec, 20);
    vec.MyVector_push_back(&vec, 30);
    std::cout << "After push_back(10, 20, 30): ";
    vec.MyVector_print(&vec);

    // Test: Pop back
    vec.MyVector_pop_back(&vec);
    std::cout << "After pop_back(): ";
    vec.MyVector_print(&vec);

    // Test: Insert
    vec.MyVector_insert(&vec, 1, 99);
    std::cout << "After insert(1, 99): ";
    vec.MyVector_print(&vec);

    // Test: Erase
    vec.MyVector_erase(&vec, 1);
    std::cout << "After erase(1): ";
    vec.MyVector_print(&vec);

    // Test: Clear
    vec.MyVector_clear(&vec);
    std::cout << "After clear(): ";
    vec.MyVector_print(&vec);
    std::cout << "Size after clear: " << vec.MyVector_size(&vec) << "\n";

    // Test: Init with size and value
    MyVector vec2;
    vec2.MyVector_init(&vec2, 4, 7);
    std::cout << "vec2 after init(size=4, val=7): ";
    vec2.MyVector_print(&vec2);

    // Test: Destroy
    vec.MyVector_destroy(&vec);
    vec2.MyVector_destroy(&vec2);

    return 0;
}
