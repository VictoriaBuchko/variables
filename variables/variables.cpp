
#include <iostream>
#include <cmath>// используеться в 2 и 7 заданиях
using namespace std;

int main() {

    cout << "1 Task\n";
    cout << "=================================================================\n";
    //Пользователь вводит с клавиатуры размер одного фильма в гигабайтах( вещественное значение например 2.56 ГБ)
    //и скорость интернета соединения в мегабитах в секунду. определить за какое время (часы, минуты и секунды)
    //скачается фильм (например 1 час 15 минут 17 секунд)
    float movieSize;
    float speed;
    float time;
    int hours;
    int minutes;
    int seconds;

    cout << "Enter movie size in GB: ";
    cin >> movieSize;
    cout << "Enter the Internet connection speed: ";
    cin >> speed;

    movieSize = movieSize * 1024 * 8; // переводим гб в мегабиты 
    time = movieSize / speed; // время скачивания в секундах

    hours = time / 3600;
    minutes = time / 60 - hours * 60;
    seconds = time - minutes * 60 - hours * 3600;

    cout << "Hours: " << hours << ", ";
    cout << "minutes: " << minutes << ", ";
    cout << "seconds: " << seconds<<"\n";

    cout << "2 Task\n";
    cout << "=================================================================\n";
    //Пользователь вводит с клавиатуры объём флешки гигабайтов посчитать сколько
    //на неё поместится фильмов размером 760 МБ целое число

    const int gigabyte = 1024;
    int flashDrive;
    int fileSize = 760;
    float fileCount;

    cout << "Enter the flash drive size in GB:  ";
    cin >> flashDrive;

    flashDrive *= gigabyte; // Переводим объём флешки в мегабайты
    fileCount = static_cast<float>(flashDrive) / fileSize; // Вычисляем количество фильмов, которые могут поместиться на флешке

    if (ceil(fileCount) != fileCount) {//если число не являеться целым,
        //значит определенно какой-то файл не поместился на флешке( метод ceil округляет к целому числу)
        cout << "Number of files is " << floor(fileCount) - 1;//метод floor для округления чисел в меньшую сторону 

    }
    else {

        cout << "Number of files is " << fileCount<< "\n";
    }

    cout << "3 Task\n";
    cout << "=================================================================\n";
    //Пользователь владеет с клавиатуры дробное число округлить его до двух
    //знаков после запятой и вывести на экран

    float number;

    cout << "Enter a floating-point number: ";
    cin >> number;

    cout << round(number * 100) / 100 << "\n";

    cout << "4 Task\n";
    cout << "=================================================================\n";
    //Преподаватель вводи с клавиатуры количество студентов сдавших 
    //домашнее задание и количество должников посчитать сколько 
    //процентов составляет должники от общего числа студентов

    int allStudents, debtors;
    float percentage;

    cout << "Enter the total number of students: ";
    cin >> allStudents;

    cout << "Enter the number of students who are debtors: ";
    cin >> debtors;

    percentage = debtors / allStudents * 100;

    cout << "Percentage of debtors: " << (debtors * 100) / allStudents << "%\n";

    cout << "5 Task\n";
    cout << "=================================================================\n";
    //Пользователь вводит с клавиатуры время в секундах прошедшее с начала дня.
    //определить сколько времени целых часов целых минут и целых секунд осталось до полуночи

    const int daySeconds = 86400;
    const int hourSeconds = 3600;
    int userSeconds;
    int hour;
    int minute;
    int second;
    int remainingSeconds;

    cout << "Enter the number of seconds elapsed since the beginning of the day: ";
    cin >> userSeconds;

    remainingSeconds = daySeconds - userSeconds; // оставшиеся сек в дне
    hour = remainingSeconds / hourSeconds; // количество часов
    minute = (remainingSeconds % hourSeconds) / 60; // количество минут
    second = (remainingSeconds % hourSeconds) % 60; // количество секунд

    cout << "Until midnight left: " << hour << " hours, ";
    cout << minute << " minutes, ";
    cout << second << " seconds\n";

    cout << "6 Task\n";
    cout << "=================================================================\n";
    //Пользователь вводит с клавиатуру сумма в гривнах срок вкладов в месяц
    //и процентную ставку за год. посчитать сколько денег будет у пользователя в конце срока

    float initialAmount;
    int depositTerm;
    float interestRate;
    float monthlyInterestRate;
    float finalAmount;

    cout << "Enter the principal amount in UAH: ";
    cin >> initialAmount;

    cout << "Enter the deposit term in months: ";
    cin >> depositTerm;

    cout << "Enter the annual interest rate: ";
    cin >> interestRate;

    monthlyInterestRate = interestRate / 12 / 100; // Месячная процентная ставка
    finalAmount = initialAmount * (1 + monthlyInterestRate) * depositTerm; // Конечная сумма вклада

    cout << "Final amount: " << finalAmount << " UAH\n";

    cout << "7 Task\n";
    cout << "=================================================================\n";
    //А рассчитать площадь поверхности земли (поверхность принять за гeоид)

    const double pi = 3.14159;
    double radius = 6371; // Радиус Земли в километрах
    double height = 0.0818191908; // Относительная высота геоида
    double area;

    // формула Гаусса-Бонне ориентированая на геоид 
    area = 4 * pi * pow(radius, 2) + 4 * pi * pow(radius, 2) * (height / radius) * atan(sqrt(pow(radius, 2) - pow(height, 2)) / height);;

    cout << "Earth surface area:" << area << " square kilometers";

    return 0;
}



