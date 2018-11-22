#include <iostream>

const auto filename = "./data/input.txt";

void init()
{
    if (!freopen(filename, "r", stdin))
    {
        std::cout << " file not found" << std::endl;
        abort();
    }
    if (!freopen("./data/output.txt", "w", stdout))
    {
        std::cout << " file cannot be open" << std::endl;
        abort();
    }
}

int main()
{
    init();
    int v;
    std::cin >> v;
    std::cout << v+1 << std::endl;
    return 0;
}