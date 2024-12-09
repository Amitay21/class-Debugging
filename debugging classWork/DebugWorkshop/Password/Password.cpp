#include <iostream>
#include <cstring>

struct Password
{
    char value[16];
    bool incorrect = true;

    Password() : incorrect(true) {
        std::memset(value, 0, sizeof(value)); // איפוס המערך
    }
};

int main()
{
    std::cout << "Enter your password to continue:" << std::endl;
    Password pwd;

    std::cin.get(pwd.value, sizeof(pwd.value)); // check the length of the arr

    if (std::strcmp(pwd.value, "Amitay") == 0) { // check pass
        pwd.incorrect = false;
    }

    if (!pwd.incorrect) {
        std::cout << "Congratulations\n";
    }

    return 0;
}
