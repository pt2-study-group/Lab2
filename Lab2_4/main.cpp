#include <iostream>
using namespace std;

/*
 * Задание   повышенной   сложности.
 * Составить   алгоритм,   ищущий   в   последовательности   простые числа.
 * Gоиск   прекращать,   когда   в   последовательности   встретится   число   0.
 * Формат   вводимых данных:     последовательность   целых   чисел.
 * Формат   выводимых   данных:   слово   «простое»   при обнаружении каждого простого числа.
 */

int main(int argc, char **argv)
{
    while (true) {
        bool prostoe = true;
        int N;
        cin >> N;
        if(N == 0) return 0;
        for (int i = 2; i <= N/2; i++) {
            if (N%i == 0) {
                prostoe = false;
            }
        }
        if (prostoe) {
            cout << "Простое" << endl;
            return 0;
        }
    }
    return 0;
}
