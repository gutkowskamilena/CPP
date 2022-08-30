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
	try
	{
		File plik("pracownicy.txt");
	}
	catch(std::string& errorString)
	{
		std::cout << errorString << std::endl;
	}
	
	//plik.printFile();

	plik.dataForm("Christiano", "Ronaldo",  999);
	
	//std::cout << plik << std::endl;

	plik.sortAscendingBySalary();

	File plik2("nowy","txt");
	plik2.dataForm("Christiano", "Ronaldo",  999);
	
	plik2.printFile();
}
