#include <iostream>
#include <deque>

int main() {
	std::deque<int> sequence = { -13, 0, 10, -4, 6, 11, 12, 28, 50, 89, 166, 304 };
	const int desiredSize = 48;

    while (sequence.size() < desiredSize) {
        // Розширення вліво
        int leftExtend = sequence[2] - sequence[1] - sequence[0] + 1;
        sequence.push_front(leftExtend);

        // Розширення вправо
        int rightExtend = sequence[sequence.size() - 3] + sequence[sequence.size() - 2] + sequence[sequence.size() - 1] - 1;
        sequence.push_back(rightExtend);
    }

    // Виведення всіх елементів послідовності
    for (int num : sequence) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}