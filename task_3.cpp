#include <iostream>
#include <string>

bool checkIpAddress(const std::string& ip) {
    int pointCount = 0; 
    int number = 0;     
    std::string segment; 

    for (size_t i = 0; i <= ip.length(); ++i) {
        char symbol = ip[i];

        if (symbol == '.' || symbol == '\0') { 
            
            number = 0;
            for (int i = 0;segment.length() != i;++i) {
                char digit = segment[i];
                number = number * 10 + (digit - '0'); 
            }

            if (number < 0 || number > 255) {
                return false; 
            }

            pointCount++;
            segment = ""; 
        }
        else if (symbol >= '0' && symbol <= '9') {
            segment += symbol; 
        }
        else {
            return false; 
        }

        if (pointCount > 3) {
            return false; 
        }
    }

    return pointCount == 4; 
}

int main() {
    std::string ipAddress;
    std::cout << "IP address: ";
    std::cin >> ipAddress;

    if (checkIpAddress(ipAddress)) { 
        std::cout << "Valid";
    }
    else {
        std::cout << "Not valid";
    }

}
