#include <iostream>
#include <string>
using namespace std;
#include <algorithm> // Для std::transform
#include <cctype>    // Для tolower
#include <iomanip>

enum class vilageStatus { UNKNOWN = -1, BUILD_UNDER, CONSTRUCTION, DEMOLISHEAD };

vilageStatus selectionStatus(std::string suchStatus) {
	if (suchStatus == "BUILD_UNDER") {
		return vilageStatus::BUILD_UNDER;
	}
	else if (suchStatus == "CONSTRUCTION") {
		return vilageStatus::CONSTRUCTION;
	}
	else if (suchStatus == "DEMOLISHEAD") {
		return vilageStatus::DEMOLISHEAD;
	}
	else {
		return vilageStatus::UNKNOWN;
	}
}

enum class enterVillageData { UNKNOWN = -1, NUMBER, NAME, STATUS };

enterVillageData villageData(std::string suchData) {
	if (suchData == "NUMBER") {
		return enterVillageData::NUMBER;
	}
	else if (suchData == "NAME") {
		return enterVillageData::NAME;
	}
	else if (suchData == "STATUS") {
		return enterVillageData::STATUS;
	}
	else {
		return enterVillageData::UNKNOWN;
	}
}


void inputVillageData(std::string** village, int rows, int cols) { // заполнение массива
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			switch (j) {
			case 0:
				std::cout << "enter number village: " << std::endl;
				std::cin >> village[i][j];
				break;

			case 1:
				std::cout << "enter name of village: " << std::endl;
				std::cin >> village[i][j];
				break;

			case 2:
				std::cout << "enter status village: " << std::endl;
				std::cin >> village[i][j];
				break;
			}
		}
	}
}

void inputVillageDataPart(std::string** village, std::string such, int rowsNew, int cols) { // занесение данных в массив

	for (int j = 0; j < cols; ++j) {
		switch (j) {
		case 0:
			std::cout << "enter number village: " << std::endl;
			std::cin >> village[rowsNew][j];
			break;

		case 1:
			std::cout << "enter name of village: " << std::endl;
			std::cin >> village[rowsNew][j];
			break;

		case 2:
			std::cout << "enter status village: " << std::endl;
			std::cin >> village[rowsNew][j];
			break;
		}
	}

}

void displayVillageDataAll(std::string** village, vilageStatus* statuses, int rows, int cols) {  // вывод массива
	std::cout << std::left << std::setw(15) << "Village Number" <<
		std::setw(20) << "Village Name" <<
		"Status" << std::endl;
	std::cout << std::string(50, '-') << std::endl; // Divider line

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			std::cout << std::setw(15) << village[i][j];
		}
		std::cout << "\t"; // spacing
		switch (statuses[i]) {
		case vilageStatus::BUILD_UNDER: std::cout << "BUILD_UNDER"; break;
		case vilageStatus::CONSTRUCTION: std::cout << "CONSTRUCTION"; break;
		case vilageStatus::DEMOLISHEAD: std::cout << "DEMOLISHEAD"; break;
		default: std::cout << "UNKNOWN"; break;
		}
		std::cout << std::endl;
	}
}

void displayVillageDataPart(std::string** village, int rowsNew, int cols) {  // вывод массива
	int i = rowsNew;
	for (int j = 0; j < cols; ++j) {
		std::cout << village[i][j] << "\t";
	}
	std::cout << std::endl;
}

void equalsVillageData(std::string** village, int rows, int cols, std::string such) {
	std::string equals;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (such == village[i][j]) {
				equals = village[i][j];
			}
		}
	}
	if (!equals.empty()) {  // проверяем путоту слова empty
		std::cout << equals << std::endl;
	}
	else {
		std::cout << "unknow" << std::endl;
	}
}

int main()
{
	int rows{ 3 }, cols{ 3 };
	std::string suchStatus;
	std::string suchData;
	//std::cin >> such;
	std::transform(suchStatus.begin(), suchStatus.end(), suchStatus.begin(), ::toupper);
	std::transform(suchData.begin(), suchData.end(), suchData.begin(), ::toupper);

	std::string** village = new std::string * [rows];
	vilageStatus* statuses = new vilageStatus[rows];

	for (int i = 0; i < rows; ++i) {           //инициализация массива
		village[i] = new std::string[cols];
	};

	for (int i = 0; i < rows; ++i) {  // первичное заполнение массива
		for (int j = 0; j < cols; ++j) {
			village[i][j] = "nul";
		}
	}

	vilageStatus status = selectionStatus(suchStatus);
	enterVillageData  data = villageData(suchData);

	inputVillageData(village, rows, cols);
	//displayVillageDataPart(village, rowsNew, cols);
	displayVillageDataAll(village, statuses, rows, cols);
	//inputVillageData(village, rows, cols);
	//equalsVillageData(village, rows, cols, such);



	for (int i = 0; i < rows; ++i) {           // очистка элементов массива и удааление 
		delete[] village[i];
	}
	delete[] village;
	delete[] statuses;
	return 0;

}
