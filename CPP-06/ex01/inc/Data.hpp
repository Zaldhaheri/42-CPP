#pragma once

#include <iostream>
#include <string>

class Data
{
	public:
		Data();
		Data(const Data &other);
		~Data();
		Data &operator=(const Data &other);
	
	private:
		int _value;
};