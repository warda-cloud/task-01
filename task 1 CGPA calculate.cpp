#include <iostream>
using namespace std;

void calculateCGPA() {
	int numCourses;
	cout<<"Enter the number of courses: ";
	cin>>numCourses;
	
	int totalCredits = 0;
	double totalGradePoints = 0.0;
	
	for (int i = 0; i<numCourses; i++) {
		int credits;
		char grade;
		
		cout<<"Enter credits for course" << i + 1 <<":";
		cin>>credits;
		
		cout << "Enter grade for course " << i + 1 << " (A, B, C, D, F): "; 
		cin >> grade;
		
		double gradePoints;
		switch (grade) {
			case 'A':
			case 'a':
				gradePoints = 4.0;
				break;
				case 'B':
				case 'b':
					gradePoints = 3.0;
					break;
					case 'C':
					case 'c':
						gradePoints = 2.0;
						break;
						case'D':
						case'd':
							gradePoints = 1.0;
							break;
						default:
							gradePoints = 0.0;
						} 
						totalCredits += credits;
						totalGradePoints += credits * gradePoints;
						
						cout << "Course " << i + 1 << " grade: " << grade << " (" << gradePoints << " grade points)" << endl;
						 }  
						 
						 double cgpa = totalGradePoints / totalCredits;
						 
						 cout << "\nTotal credits:" << totalCredits << endl;
						 cout << "Total grade points: " << totalGradePoints << endl;
						 cout << "CGPA: " << cgpa << endl;
} 

int main() {
	calculateCGPA();
	return 0;
}
