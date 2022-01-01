#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Create a list of names using a vector
    std::vector <std::string> name_list{"Matthew", "Mark", "Luke", "John"};

    // Create a pointer to point to name_list
    std::vector <std::string> *name_list_pointer{&name_list};

    // Display name_list
    std::cout << "Name_list values:\n";
    for(auto names: name_list)
        std::cout << names << "\n";

    // Display dereferenced *name_list_pointer
    std::cout << "\n\nPointer values:\n";
    for(auto names: *name_list_pointer)
        std::cout << names << "\n";

    // Display at an index 
    std::cout << "\n\nPointer at index 2 = " << (*name_list_pointer).at(2) << "\n";  // Parenthesis to give * priority over .
    std::cout << "Pointer as index 2 = " << name_list_pointer->at(2) << "\n";    // Or use ->

    // Change a value
    name_list_pointer->at(0) = "James";

    // Display the updated value
    std::cout << "\n\nUpdated name at 0 = " << name_list_pointer->at(0) << "\n";

    // Lets add Matthew back in
    name_list_pointer->push_back("Matthew");

    // Lets see the changes to the original vector
    std::cout << "\n\nOriginal Vector:\n";
    for(auto names: name_list)
        std::cout << names << "\n";

    return 0;
}

