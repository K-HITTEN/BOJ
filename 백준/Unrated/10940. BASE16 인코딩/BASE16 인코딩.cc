#include <iostream>
#include <string>
#include <iomanip>

std::string toBase16(const std::string& input) {
    const char* hex_chars = "0123456789ABCDEF";
    std::string output;
    for (unsigned char c : input) {
        output += hex_chars[c >> 4];
        output += hex_chars[c & 0x0F];
    }
    return output;
}

int main() {
    std::string S;
    std::getline(std::cin, S);

    std::string encoded = toBase16(S);
    std::cout << encoded << std::endl;

    return 0;
}
