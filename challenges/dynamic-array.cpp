#include <iostream>

void print(int *int_array, int size);
int *apply_all(int *int_array_1, int size_1, int *int_array_2, int size_2);

int main()
{
    int array_1[]{1, 2, 3, 4, 5};
    int array_2[]{10, 20, 30};
    //int *result{nullptr};


    std::cout << "Array 1: ";
    print(array_1, 5);

    std::cout << "Array 2: ";
    print(array_2, 3);

    std::cout << "Result: ";
    // Create a pointer on the heap
    int *result = apply_all(array_1, 5, array_2, 3);
    print(result, 15);

    
    delete result;
    return 0;
}

void print(int *int_array, int size)
{
    std::cout << "[ ";
    for(int i{}; i < size; i++)
        std::cout << int_array[i] << " ";
    std::cout << "]\n";
}

int *apply_all(int *int_array_1, int size_1, int *int_array_2, int size_2)
{
    int array_size{size_1 * size_2};
    int *new_array{nullptr};
    new_array = new int[array_size];
    int counter{};

    for(int i{}; i < size_2; i++)
        for(int j{}; j < size_1; j++)
        {
            new_array[counter] = int_array_2[i] * int_array_1[j];
            counter++;
        }

    return new_array;
}

