#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> grades;
    int grade;
    cout << "Enter grades (enter -1 to finish):" << endl;
    while (true) {
        cin >> grade;
        if (grade == -1) {
            break;
        }
        grades.push_back(grade);
    }

    int maxGrade = 0;
    for (int grade : grades) {
        if (grade > maxGrade) {
            maxGrade = grade;
        }
    }

    int* histogram = new int[maxGrade + 1]();

    for (int grade : grades) {
        histogram[grade]++;
    }

 
    cout << "Histogram:" << endl;
    for (int i = 0; i <= maxGrade; i++) {
        if (histogram[i] > 0) {
            cout << "Number of " << i << "'s: " << histogram[i] << endl;
        }
    }

   
    delete[] histogram;

    return 0;
}