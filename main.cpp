#include <iostream>
#include <string>

int main() {
    std::string quit;
    std::cout << "Hello, This app is in Version Alpha 1.0\n";
    std::cout << "It has nothing, but whatever.\n";
    while(quit != "at.process.quit") {
        std::cout << "Type \"at.process.quit\" to exit the app: ";
        std::cin >> quit;
    }
}