#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int ROWS = 5;
const int COLUMNS = 8 ;
const int MAX = 256;

void print_table(char mark_names[COLUMNS][MAX], char student_names[ROWS][MAX],int grades[ROWS][COLUMNS], int ROWS, int COLUMNS);
void printStudentMarks(int index, char mark_names[ROWS][MAX], char student_names[][MAX],int grades[ROWS][COLUMNS], int ROWS, int COLUMNS);
void printStudentAverage(int index, char mark_names[ROWS][MAX], char student_names[][MAX],int grades[ROWS][COLUMNS], int ROWS, int COLUMNS);


int main(){
    

    char mark_names [COLUMNS][MAX]   = {"Lab1", "Lab2", "Lab3", "Lab4", "Lab5", "Lab6", "Midterm", "Final"};
    char student_names [ROWS] [MAX]  =  {"Jimmy", "Timmy", "Tammy", "Sammy", "Danny"};

    int grades[ROWS][COLUMNS] =                {{90, 54, 27,  2, 24,  6, 81, 92}, 
                                                {65, 76, 36, 95, 26, 79, 23, 26},
                                                {94, 26, 80, 48, 75, 63, 46, 63},
                                                {35, 27, 27, 54, 75, 96, 51, 87},
                                                {30, 39, 59, 87, 49, 28, 61, 75}};

    int student_id;
    cout << "Enter the student's ID to see Overall Score and Average: ";
    cin >> student_id;
  

    print_table(mark_names, student_names, grades, ROWS, COLUMNS);
    
    cout << endl; 
    
    printStudentMarks(student_id, mark_names, student_names, grades, ROWS, COLUMNS); 
    
    cout << endl;
    
    printStudentAverage(student_id, mark_names, student_names, grades, ROWS, COLUMNS);
    
    cout << endl;
    

    return 0;
    
    
}

void print_table(char mark_names[ROWS][MAX], char student_names[][MAX],int grades[ROWS][COLUMNS], int ROWS, int COLUMNS){ // prints the entire table
    const int width = 12;
    cout << setw(width) << "";

    for (int i = 0; i < COLUMNS; i++)
        cout << setw(width) << mark_names[i];
        
        cout << endl;
    
    
    
    for (int i = 0; i < ROWS; i++){
        cout << setw(width) << student_names[i];
        
        for (int j = 0; j < COLUMNS; j++){
            cout << setw(width) << grades[i][j];
        }
        cout << endl;
   }
    
 

    
    return;
}

void printStudentMarks(int index, char mark_names[ROWS][MAX], char student_names[][MAX],int grades[ROWS][COLUMNS], int ROWS, int COLUMNS){ // prints a specific student's scores
        const int width = 12;
        cout << setw(width) << "";
        
        for (int i = 0; i < COLUMNS; i++)
        cout << setw(width) << mark_names[i];
        
        cout << endl;
        
            cout << setw(width) << student_names[index];
            for (int j = 0; j < COLUMNS; j++){
                cout << setw(width) << grades[index][j];
            }
       
        
        cout << endl; 
        
        
        return;
}

void printStudentAverage(int index, char mark_names[ROWS][MAX], char student_names[][MAX],int grades[ROWS][COLUMNS], int ROWS, int COLUMNS){ // prints a specific student's average
        const int width = 12;
        cout << setw(width) << "";
        
        int sum = 0;
        
        for (int i = 0; i < COLUMNS; i++)
            sum += grades[index][i];
            
            cout << "The Average mark for " << student_names[index] << " is "; // index will be used to refer to the Student's ID
            
            cout << static_cast<double>(sum)/ COLUMNS << "%";
            cout << endl;
       
        
        cout << endl; 
        
        
        return;


}
