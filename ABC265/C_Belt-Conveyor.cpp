/*
    2 3
    RDU
    LRU

    Means:
    (1,1) (1,2) (1,3)
      R     D     U
    (2,1) (2,2) (2,3)
      L     R     U

So it goes like => R(1,1) -> D(1,2) -> R(2,2) -> U(2,3) -> U(1,3)

And so the answer is (1,3).
*/

#include <iostream>
#include <vector>

int main(int argc, char const* argv[])
{
    int H, W;

    std::cin >> H >> W;

    std::vector<std::string> inp(H); // Get the string of each row

    for (auto& i : inp)
        std::cin >> i;

    std::vector<std::vector<int>> grid(H + 1, std::vector<int>(W + 1, false));

    int i = 1, j = 1;

    while (true)
    {
        if (grid[i][j]) {
            std::cout << -1 << std::endl;
            exit(0);
        }
        grid[i][j] = true;

        if (inp[i - 1][j - 1] == 'U' && i != 1)
            --i;
        else if (inp[i - 1][j - 1] == 'D' && i != H)
            ++i;
        else if (inp[i - 1][j - 1] == 'L' && j != 1)
            --j;
        else if (inp[i - 1][j - 1] == 'R' && j != W)
            ++j;
        else
            break;
    }

    std::cout << i << " " << j << std::endl;

    return 0;
}