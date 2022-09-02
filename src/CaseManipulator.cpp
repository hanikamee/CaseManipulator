/* This program will take a string and will do one of the following:
 1- Convert it to uppercase from lowercase
 2- Convert it to lowercase from uppercase
 3- Convert each character in the string to the opposite case */

#include <iostream>
#include <cstring>

// The upper fucntion
void upper(std:: string pstr){
    std::string New;
    for (size_t i = 0; i < pstr.size(); i++){    // Checking if the character is lowercase
        New += (toupper(pstr[i]));
    }

    std::cout << "The new upper case string is: " << New << std::endl;
}

// Lower function
void lower(std::string pstr){
    std::string New;  // New string to add the new, modified string to
    for (size_t i = 0; i < pstr.size();i++){
        New += (tolower(pstr[i]));
    }

    std::cout << "The new lower case string is: " << New << std::endl;

}

void flip(std:: string pstr){
    std:: string New;
    for (size_t i = 0; i < pstr.size() ; i++){
        if(isupper(pstr[i])){    // Checking if the character is uppercase
            New += tolower(pstr[i]);   // Flipping it to lower case
        }
        else {
            New += toupper(pstr[i]);    // If it is a lower case, it will be
            // converted to upper
        }

    }
    std:: cout << "The flipped case string is: " << New << std::endl;



}



int main()
{
    char str[255];
    char *pstr = str;   // pointer to char
    std::cout << "Enter a sentence: ";
    std::cin.getline(pstr, 255);   // Input storage

    std:: cout << "The original string is: " << pstr << std:: endl;
    // Calling the functions
    upper(pstr);
    lower(pstr);
    flip(pstr);

    return 0;
}
