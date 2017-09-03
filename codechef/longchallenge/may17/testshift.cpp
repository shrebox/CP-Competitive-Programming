#include <iostream>
#include <vector>
#include <algorithm>
int main()
{   
    std::size_t n;
    std::cout << "Input array size: ";
    std::cin >> n;

    std::vector<int> to_left(n), to_right(n);

    for(std::size_t i=0;i<to_left.size();++i)
    {
        std::cin >> to_left[i];
        to_right[i]=to_left[i];
    }

    // rotate first array to the left
    std::rotate(to_left.begin(), to_left.begin() + 1, to_left.end());

    // rotate second array to right
    std::rotate(to_right.rbegin(), to_right.rbegin() + 1, to_right.rend());

    std::cout << "To left:" << std::endl;
    for(auto x : to_left) //C++11 feature, x iterates through container
        std::cout << x << std::endl;

    std::cout << "To right:" << std::endl;
    for(auto x : to_right)
        std::cout << x << std::endl;

    return 0;
}    