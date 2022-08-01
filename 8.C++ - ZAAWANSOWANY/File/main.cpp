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
	File plik("pracownicy.txt");
	//plik.printFile();

	plik.dataForm("Christiano", "Ronaldo", 333, 999);
	
	//std::cout << plik << std::endl;

	plik.sortAscendingBySalary();

	File plik2("nowy","txt");
	plik2.dataForm("Christiano", "Ronaldo", 333, 999);
	plik2.printList();
	plik2.printFile();
}
