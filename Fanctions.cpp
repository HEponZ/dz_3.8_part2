#include "Flat.h"

bool operator==(const Flat& over1, const Flat& over2)
{
	// ��������� �������� ��������
	if (over1.square == over2.square)
	{
		return 1;
	}
	return 0;
}

bool operator>(const Flat& over1, const Flat& over2)
{
	// �������� �� �������� ��������
	if (over1 == over2)
	{
		if (over1.price > over2.price)
		{
			cout << "���� �������� 1 ������, ��� ���� 2\n";
			return 1;
		}
		else if (over2.price > over1.price)
		{
			cout << "���� �������� 2 ������, ��� ���� 1\n";
			return 1;
		}
		else
		{
			cout << "���� �����\n";
			return 1;
		}
	}
	cout << "������� �� �����\n";
	return 0;
}