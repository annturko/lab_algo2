#include <iostream> #include <cmath>
// Підключаємо простір імен std, щоб не писати "std::" перед cout, cin, endl using namespace std;

int main() { 
  // ЗАВДАННЯ 1 (Integer42) //
 int P, N;
 cout << "Введіть ціну товару P: ";
 cin >> P;
 cout << "Введіть кількість грошей N: ";
 cin >> N;

 if (P <= 0 || N < P) {
    cout << "Помилка: ціна повинна бути більше 0, а сума N має бути більшою або рівною P." << endl;
 } else {
 int count = N / P;      // Кількість товарів (цілочисельне ділення)
 int remainder = N % P;  // Решта грошей (остача від ділення)

 cout << "Кількість куплених товарів: " << count << endl;
 cout << "Решта грошей: " << remainder << " грн." << endl;
}

 cout << endl; // Розділювач між завданнями

  // ЗАВДАННЯ 2 (Boolean22) // 
  
 cout << "--- ЗАВДАННЯ 2 (Boolean22) ---" << endl;

 int number;
 cout << "Введіть тризначне число: ";
 cin >> number;

 number = abs(number); // Захист на випадок введення від'ємного числа

 if (number < 100 || number > 999) {
 cout << "Помилка: введене число не є тризначним." << endl;
 } else {
 int d1 = number / 100;       // Перша цифра (сотні)
 int d2 = (number / 10) % 10; // Друга цифра (десятки)
 int d3 = number % 10;        // Третя цифра (одиниці)

  // Перевірка зростаючої або спадної послідовності
 bool isIncreasing = (d1 < d2) && (d2 < d3);
 bool isDecreasing = (d1 > d2) && (d2 > d3);
 bool result = isIncreasing || isDecreasing;

 cout << boolalpha; // Вивід true/false словом
 cout << "Цифри утворюють зростаючу або спадну послідовність: " << result << endl;
}

 cout << endl; // Розділювач між завданнями

  // ЗАВДАННЯ 3 (Формула 39) // 
  
 cout << "--- ЗАВДАННЯ 3 (Формула 39) ---" << endl;

 double x;
 cout << "Введіть значення x: ";
 cin >> x;

 const double PI = 3.14159265358979323846;
 double rad64 = 64.0 * PI / 180.0; // Переведення 64 градусів у радіани

  // Перевірка обмежень ОДЗ (Область допустимих значень)
 if (abs(x) == 0 || abs(x) == 1) {
 cout << "Помилка: |x| не може дорівнювати 0 або 1 (через логарифм)." << endl;
 } else if (sin(x) == 0 || tan(x) == 0) {
 cout << "Помилка: ділення на нуль у знаменнику." << endl;
 } else {
  // Обчислення чисельника
 double num1 = pow(5.0, pow(x, 2) * pow(sin(x), 2));
 double log3 = log(abs(x)) / log(3.0); // Перехід до основи 3: log3(|x|)
 double root_expr = pow(sin(x + rad64), 2) * log3;

 if (root_expr < 0) {
 cout << "Помилка: вираз під коренем є від'ємним." << endl;
 } else {
 double num2 = pow(root_expr, 0.25); // Корінь 4-го степеня
 double numerator = num1 * num2;

  // Обчислення знаменника
 double denominator = pow(tan(x), 3) * pow(sin(pow(x, 3)), 2);

 if (denominator == 0) {
 cout << "Помилка: знаменник дорівнює 0." << endl;
 } else {
 double y = numerator / denominator;
 cout << "Результат y = " << y << endl;
        
 return 0;
}
