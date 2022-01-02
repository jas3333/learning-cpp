#include <iostream>
#include <vector>

void display_array(int *array, int size);

int main()
{
    // Arrays
    int int_array[]{1, 2, 3, 4, 5, 6, 7, 8};
    int array_length{sizeof(int_array) / sizeof(int_array[0])};
    int *int_array_pointer{int_array};

    std::cout << "       --Arrays--\n";
    std::cout << "Value               Address\n";

    for(int i{}; i < array_length; i++){
        std::cout << int_array_pointer[i] << "                " << int_array_pointer + i << "\n";
    }

    // Vectors
    std::vector <int> int_vector{1, 2, 3, 4, 5, 6, 7, 8};
    std::vector <int> *vector_pointer{&int_vector};

    std::cout << "\n       --Vectors--\n";
    std::cout << "Value               Address\n";

    for(int i{}; i < int_vector.size(); i++){
        std::cout << vector_pointer->at(i) << "                " << vector_pointer + i << "\n";
    }

    return 0;
}


