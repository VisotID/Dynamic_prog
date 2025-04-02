#pragma once
#include <string>
#include <vector>

using namespace std;

/// ������� ������ ������ �� �����
/// s - �������� �����, question - ��������� ������
void ReadF(const string& s, string& question);

/// ������� ������ ������ � ����
/// <param name="s - �������� �����, ways - ���������� ��������
void WriteF(const string& s, const int ways);

/// �������� ������� ��� �������� ����� ���������� ��������� �������������������
/// question - ����������� ������, dp - ������ ��� �������� ���������� ��������
void Ans(const string& question, vector<vector<int>>& dp);

/// ����� ��� �������� �������
void test();