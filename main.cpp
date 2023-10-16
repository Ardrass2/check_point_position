#include <iostream>

bool check_pos(double x, double y){
    if (x >= 0 && y >= 0 && y <= -x + 1) {
        // проверка на то, лежит ли точка в I четверти
        return true;
    }
    if ((y == 0 && x < 2 && x > 1) || (y == 0 && x > -2 && x < -1)) {
        // проверка на то, лежит ли точка на прямых, которых проходят по Ox
        return true;
    }
    else if (x < 0 && y >= 0 && y <= x + 1) {
        // проверка на то, лежит ли точка в II четверти
        return true;
    }
    else if (y < 0 && x * x + y * y <= 4) {
        // проверка на то, лежит ли точка внутри окружности или на ней самой
        return true;
    }
    else {
        return false;
    }
}


int main() {
    double x;
    double y;
    std::cout << "Input x: ";
    std::cin >> x;
    std::cout << "Input y: ";
    std::cin >> y;
    bool answer = check_pos(x, y);
    if (answer) {
      std::cout << "Yes, gratz, this point is inside 'ship'" << std::endl;
    }
    else {
      std::cout << "No, this point not inside 'ship'" << std::endl;
    }
    return 0;
}
