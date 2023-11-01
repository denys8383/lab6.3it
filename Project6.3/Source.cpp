#include <iostream>
#include <vector>
#include <ctime> // Додамо бібліотеку для ініціалізації генератора випадкових чисел.

// Функція для знаходження найбільшого парного елемента в векторі 'масив'.
int FindMaxElement(const std::vector<int>& масив) {
    int MaxElement = INT_MIN; // Ініціалізація початкового значення максимального елемента найменшою можливою величиною (INT_MIN).

    for (size_t i = 0; i < масив.size(); i++) {
        if (масив[i] % 2 == 0 && масив[i] > MaxElement) {
            MaxElement = масив[i]; // Перевіряємо, чи елемент парний і більший за поточний максимальний, і оновлюємо його, якщо це так.
        }
    }

    return MaxElement; // Повертаємо знайдений максимальний парний елемент.
}

// Функція для виведення вмісту вектора 'масив' на екран.
void VivestiMasiv(const std::vector<int>& масив) {
    for (size_t i = 0; i < масив.size(); i++) {
        std::cout << масив[i] << " "; // Виводимо елементи вектора на екран.
    }
    std::cout << std::endl;
}

int main() {
    // Ініціалізуємо генератор випадкових чисел.
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Ініціалізуємо вектор 'массив' випадковими значеннями.
    std::vector<int> массив;
    const int arraySize = 10; // Розмір масиву.

    for (int i = 0; i < arraySize; i++) {
        массив.push_back(std::rand() % 100); // Генеруємо випадкове число в діапазоні [0, 99] і додаємо його до вектора.
    }

    std::cout << "Masiv: ";
    VivestiMasiv(массив); // Виводимо вміст вектора на екран.

    int MaxElement = FindMaxElement(массив); // Знаходимо найбільший парний елемент в векторі.

    if (MaxElement != INT_MIN) {
        std::cout << "Naibilshiy parniy element: " << MaxElement << std::endl; // Виводимо найбільший парний елемент, якщо такий існує.
    }
    else {
        std::cout << "Nemae parnih elementiv." << std::endl; // Виводимо повідомлення, якщо немає парних елементів у векторі.
    }

    return 0;
}
