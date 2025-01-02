#include <iostream>

std::string encrypt_caesar(const std::string& text, int shift) {
    std::string encrypted_text;


    for (int i;text.length() != i;++i) {
        char symbol = text[i];
        if (text[i] >= 'a' && text[i] <= 'z') {
           char encrypted_char = (symbol - 'a' + shift) % 26 + 'a';
           encrypted_text += encrypted_char;
        }
        else if (text[i] >= 'A' && text[i] <= 'Z') {
            char encrypted_char = (symbol - 'A' + shift) % 26 + 'A';
            encrypted_text += encrypted_char;
        }
        else {
            encrypted_text += symbol;
        }
    }
    return encrypted_text;
}



int main() {
    std::string text;
    std::cout << "Text: ";
    std::cin >> text;

  
    int shift;
    std::cout << "Shift: ";
    std::cin >> shift;

    std::string result = encrypt_caesar(text, shift);
    std::cout << "Encoode Text: " << result;
    
}
