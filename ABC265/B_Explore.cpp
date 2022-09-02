#include <iostream>
#include <vector>

int main() {
    int N, // Rooms arranged in a row => numbered Room 1,2,…,N
        M, // bonus rooms in the cave
        temp;
    long long T; // time limit

    std::cin >> N >> M >> T;

    std::vector<int>
        roomsTime(N + 1),
        bonusAndTime(N + 1);

        for (size_t i = 1; i < N; i++)
            std::cin >> roomsTime[i];

    for (size_t i = 0; i < M; i++)
    {
        std::cin >> temp;
        std::cin >> bonusAndTime[temp];
    }

    for (size_t i = 1; i < N;i++)
    {
        if (T <= roomsTime[i]) {
            std::cout << "No" << std::endl;
            return 0;
        }

        T -= roomsTime[i];

        // if (bonusAndTime[i + 1]) // Commented cause I used its size now is N+1
        T += bonusAndTime[i + 1];
    }


    std::cout << "Yes" << std::endl;
}
