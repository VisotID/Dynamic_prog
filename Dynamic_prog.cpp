﻿// Высоцкая И.Д.
/// Задан шаблон, состоящий из круглых скобок и знаков вопроса. Требуется определить, сколькими способами можно заменить 
/// знаки вопроса круглыми скобками так, чтобы получилось правильное скобочное выражение. Входные данные Первая строка 
/// входного файла содержит заданный шаблон длиной не более 80 символов. Выведите в выходной файл искомое количество
/// способов. Исходные данные будут таковы, что это количество не превзойдет 2·109. Пример входного файла ????(? 
/// Пример выходного файла 2

#include <iostream> // библиотека С++, отвечающая за чтение и запись(для функций cin - функция чтения, cout - функция вывода)
#include <fstream>
#include <string>
#include <vector>
#include "Dynamic_pr.h" // подключение заголовочного файла модуля

using namespace std;

int main()
{
    test();

    // Создаем таблицу dp размером 100x100, изначально заполненную нулями
    vector<vector<int>> dp(100, vector<int>(100));

    string rfile = "input.txt"; // Имя входного файла
    string sfile = "output.txt"; // Имя выходного файла

    string question; // Переменная для хранения шаблона

    ReadF(rfile, question); // Читаем шаблон из файла

    dp[0][0] = 1; // Начальное условие: для пустой строки 1 способ с балансом 0

    Ans(question, dp); // Вычисляем число способов

    cout << dp[question.size()][0]; // Выводим результат на экран (баланс 0 в конце)

    WriteF(sfile, dp[question.size()][0]); // Записываем результат в файл

    return 0;
}