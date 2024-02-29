#include <iostream>
#include <string>

int main() {
    std::string n;
    std::cin >> n;

    if (n[0] == '-') {
        if (n[n.size() - 1] >= n[n.size() - 2]) {
            n.erase(n.size() - 1);
        } else {
            n.erase(n.size() - 2);
        }
    }

    std::cout << n << std::endl;
    return 0;
}
