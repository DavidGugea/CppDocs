#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v(5);

    std::cout << "The length is: " << v.size() << '\n';

    for (int i : v)
        std::cout << i << ' ';

    std::cout << '\n';

    return 0;
}