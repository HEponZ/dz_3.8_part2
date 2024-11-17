#include "Flat.h"

Flat& Flat::operator=(const Flat& flat)
{
	// �������� �� ����� �� ��� �������
	if (this == &flat)
	{
		return *this;
	}

	// ������������ �������� ������ ������� �������
	this->set_square(flat.get_square());
	this->set_price(flat.get_price());

	return *this;
}