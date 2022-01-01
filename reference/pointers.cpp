#include <iostream>
#include <string>
#include <vector>

int main()
{
    int number{10};

    std::cout << "Variable" << "\n" "-----------------------\n";
    std::cout << "Number = " << number << std::endl;

    /* sizeof gets the bytesize of variable. 
    Can be useful for getting the length of an array */
    std::cout << "Size of number = " << sizeof(number) << " bytes" << std::endl;

    // & on left of variable to get memory address
    std::cout << "Memory address of number = " << &number << "\n\n";


    // Pointers

    /* Initialize pointer by using nullptr sets value to 0
       Set to 0 to avoid it being initialized with garabage */
    int *number_pointer{nullptr};

    std::cout << "Pointer Variable" << "\n" "-----------------------\n";

    std::cout << "Number_pointer = " << number_pointer << std::endl;
    std::cout << "Size of number_pointer = " << sizeof(number_pointer) << " bytes" << std::endl;
    std::cout << "Memory address of number_pointer = " << &number_pointer << "\n\n";

    // Point number_pointer to number

    number_pointer = &number;

    std::cout << "Pointer Variable Points to number" << "\n" "-----------------------\n";
    std::cout << "Number_pointer = " << number_pointer << std::endl;
    std::cout << "Size of number_pointer = " << sizeof(number_pointer) << " bytes" << std::endl;
    std::cout << "Memory address of number_pointer = " << &number_pointer << "\n\n";

    /* Dereference the pointer to show the value of number
       dereference the pointer by using *number_pointer 
    */
    std::cout << "Pointer Variable Dereferenced" << "\n" "-----------------------\n";
    std::cout << "Number_pointer = " << *number_pointer << std::endl;
    std::cout << "Size of number_pointer = " << sizeof(number_pointer) << " bytes" << std::endl;
    std::cout << "Memory address of number_pointer = " << &number_pointer << "\n\n";

    // Change the value of number by using number_pointer

    *number_pointer = 200;

    std::cout << "Updated values\n" << "------------------------------\n";
    std::cout << "Value of number = " << number << "\n";
    std::cout << "Value of number_pointer = " << *number_pointer << "\n";

    // Changing a pointer to two different variables(must be of the same type)
    double temp_c{35.8};
    double temp_f{temp_c * 1.8 + 32};
    // Don't forget the * and &
    double *temp_pointer{&temp_c};

    std::cout << "\n\n";
    std::cout << "Temperature in celsius: " << temp_c << "c\n";
    std::cout << "Temerature in fahrenheit: " << temp_f << "f\n";
    std::cout << "temp_pointer value = " << *temp_pointer << "c\n";

    temp_pointer = {&temp_f};

    std::cout << "temp_pointer value = " << *temp_pointer << "f\n\n";

    // Pointers using strings

    std::string name{"Theo"};
    std::string *name_pointer{&name};

    std::cout << "Pointers with strings\n--------------------------\n";
    std::cout << "Variable name = " << name << "\n";
    std::cout << "Name_pointer referenced = " << name_pointer << "\n";
    std::cout << "Name_pointer dereferenced = " << *name_pointer << "\n";

    // Change name to something else using *name_pointer

    *name_pointer = "Theo the cat!";
    std::cout << "Updated name variable = " << name << "\n";
    std::cout << "Updated name_pointer dereferenced = " << *name_pointer << "\n";


    // Pointers Using Vectors

    std::vector <std::string> name_list{"Jane", "John", "Doe"};
    std::vector <std::string> *name_list_pointer{&name_list};

    // Display non pointer name_list
    std::cout << "\n\nVectors and Pointers\n-------------------------\n";
    std::cout << "Non pointer name_list = ";
    for (auto names: name_list)
        std::cout << names << " ";

    // Display *name_list_pointer
    std::cout << "\nname_list_pointer = ";
    for (auto names: *name_list_pointer)
        std::cout << names << " ";

    /* Using (*name_list_pointer).at(0) to get name from index 0
       Use parenthesis to give the * priority over the .
    */
    std::cout << "\nFirst name from name list = " << (*name_list_pointer).at(0) << "\n";

    






    return 0;
}

