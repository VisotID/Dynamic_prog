#pragma once
#include <string>
#include <vector>

using namespace std;

/// Функция чтения строки из файла
/// s - название файла, question - считанная строка
void ReadF(const string& s, string& question);

/// Функция записи ответа в файл
/// <param name="s - название файла, ways - количество способов
void WriteF(const string& s, const int ways);

/// Основная функция для подсчета числа правильных скобочных последовательностей
/// question - проверяемая строка, dp - массив для подсчета количества способов
void Ans(const string& question, vector<vector<int>>& dp);

/// Тесты для основной функции
void test();