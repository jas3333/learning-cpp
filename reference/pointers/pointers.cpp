#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Initialize some variables
    int number{10};
    double temp_c{4.6};
    double temp_f{temp_c * 1.8 + 32};
    std::string name{"Theo"};
    std::vector <std::string> name_list{"James", "John", "Jane", "Theo"};

    
/* --Creating Pointers
     - A pointer is a variable that stores the address of another variable
     - A pointer must use the same type as a variable it's pointing to
     - Initializing pointers
         -- int *number_pointer; Will initialize with garbage (Avoid)
         -- int *number_pointer{nullptr}; Will initialize 0 
         -- int *number_pointer{&number}; Will initialize pointing to number address
*/

    // Initialize some pointers
    int *number_pointer{nullptr};                               // Initialize pointer with no address, value will be 0
    number_pointer = {&number};                                 // Store number address in number_pointer
    double *temp_pointer{&temp_c};                              // Store temp_c address in temp_pointer
    std::string *name_pointer{&name};                           // Store name address in name_pointer
    std::vector <std::string> *name_list_pointer{&name_list};   // Store name_list in name_list_pointer

/* --Dereferencing Pointers 
     -- Dereferencing a pointer will give the value at the stored address
         -- int number{10};                 - Has a value of 10
         -- int *number_pointer{&number};   - number_pointer now holds the address to number
                                              So something like 0xJd2450 it will change every runtime
         -- std::cout << number_pointer;    - Will diplay the stored address of number                                 
         -- std::cout << *number_pointer;   - Dereferences the pointer and shows the value stored
                                              at the address of number
*/

    std::cout << "number value = " << number << "\n";                             // Displays the value of number - 10
    std::cout << "number_pointer value = " << number_pointer << "\n";             // Displays the value of number_pointer - 0x23ffc4j
    std::cout << "number_pointer dereferenced = " << *number_pointer << "\n";     // Displays the dereferenced number_pointer - 10

    // It's the same with strings
    std::cout << "\nname value = " << name << "\n";
    std::cout << "name_pointer value = " << name_pointer << "\n";
    std::cout << "name_pointer dereferenced = " << *name_pointer << "\n";

// --Changing the Variable a Pointer Points to

    std::cout << "\ntemp_c value = " << temp_c << "c\n";
    std::cout << "temp_pointer value = " << temp_pointer << "\n";                   // temp_pointer is currently pointing to temp_c
    std::cout << "temp_pointer dereferenced value = " << *temp_pointer << "\n";

    temp_pointer = &temp_f;   // Store the address of temp_f in temp_pointer

    // Display the updated values for temp_pointer
    std::cout << "Updated temp_pointer value = " << temp_pointer << "\n";
    std::cout << "Updated temp_pointer dereferenced value = " << *temp_pointer << "f\n";

// --Changing Value of a Variable With a Pointer

    std::cout << "\n\nOld temp_f value = " << temp_f << "\n";
    *temp_pointer = 34;  // Changes the value of the address stored in temp_pointer which is temp_f

    // Check temp_f to see if it changed
    std::cout << "New temp_f value = " << temp_f << "\n";





   
    return 0;
}

