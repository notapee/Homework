#include <iostream>
#include <string> 

bool checkEmail(const std::string& email) {
    bool result = true;
    int dogg = 0;

    if (email.length() < 2 || email.length() > 127) {
        return false;
    }

    for (size_t i = 0; i < email.length(); ++i) {
        if (email[i] == '@') {
            dogg++;
            if (dogg > 1) {
                return false;
            }
        }
        else if (!((email[i] >= 'a' && email[i] <= 'z') ||
            (email[i] >= 'A' && email[i] <= 'Z') ||
            (email[i] >= '0' && email[i] <= '9') ||
            email[i] == '.' || email[i] == '_' || email[i] == '-')) {
            return false;
        }
    }


    if (email[0] == '@' || email[email.length() - 1] == '@') {
        return false;
    }

    return result;
}

int main() {
    std::string email;
    std::cout << "Email: ";
    std::cin >> email;

    if (checkEmail(email)) {
        std::cout << "Yes";
    }
    else {
        std::cout << "No";
    }


}

	


