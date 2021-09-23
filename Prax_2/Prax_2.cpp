
#include <iostream>
#include <string>
#include <vector>


struct Student {
	std::string name;
	std::string last_name;
	int date = 0;
	int month = 0;
	int year = 0;
};


std::vector<Student> FillVec(std::vector<Student>& students) {

	int students_count = 0;
	std::cin >> students_count;
	for (int i = 0; i < students_count; i++) {
		Student student;
		std::cin >> student.name >> student.last_name >> student.date >> student.month >> student.year;
		students.push_back(student);

	}

	return students;

}

int main()
{
	std::vector<Student> students;

	FillVec(students);
	
	int operations_count = 0;

	std::cin >> operations_count;
	std::string operation;
	int operation_num = 0;

	for (int i = 0; i < operations_count; i++) {
		std::cin >> operation >> operation_num;
		if (operation == "name" && operation_num <= students.size() && operation_num > 0) {
			operation_num -= 1;
			std::cout << students[operation_num].name << " " << students[operation_num].last_name << std::endl;
		}
		else if (operation == "date" && operation_num <= students.size() && operation_num > 0) {
			operation_num -= 1;
			std::cout << students[operation_num].date << "." << students[operation_num].month << "." << students[operation_num].year << std::endl;
		}
		else {
			std::cout << "bad request" << std::endl;
		}
	}
	
	
}