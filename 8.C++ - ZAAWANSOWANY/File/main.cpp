#include <iostream>
#include <fstream>
#include "File.hpp"
#include <vector>
#include<random>
#include <algorithm>
#include <numeric>
#include <string>



int main()
{
	File plik("C:\\Users\\gutko\\source\\sda\\8.C++ - ZAAWANSOWANY\\pracownicy.txt");
	//plik.printFile();


	//std::cout << plik << std::endl;

	plik.sortAscendingBySalary();

	File plik2("nowy","mp4");
}
