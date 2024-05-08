#include <iostream>
#include <string>
using namespace std;



class pasword {	
	public :
		void access () ;   
};

class type_of_exam  
{
public :

void questiontesti();
void descripQues();
void list();

};

int main() 
{
pasword ob ;
ob.access() ;
type_of_exam ob2 ;
			int choose = 0;
		while (choose != -1)
			{
				cin >> choose;
				switch (choose )
				{
					case 1 :
					{
					 ob2.questiontesti(); 
					 	
						break;
					}
					case 2 :
					{
					ob2.descripQues();
						break;
					}
				}
			}
        //edameeeeeeeeeee..........
        
        


    return 0;
}

 void pasword::access()   {
		 // for inter ostad /pasword
    string userType;
    string username;
    string password;
    bool loggedIn = false;

    while (!loggedIn) 
	{
		cout << "Enter user type ( student / teacher ) : ";
		cin >> userType;
        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;

        if (username == "A" && password == "1234" && userType == "teacher" ) 
		{
            loggedIn = true;
            cout << "hellow teacher , welcome!\n----------------------------\n" ;
    		
		
			cout << " Dear BOSS \n for tst exam enter (1)\n for dscrip exam enter *(2)\n for finish (-1)\n";
		        }
		else if(username == "A" && password == "1234" && userType == "student")
		{
			loggedIn = true;
            cout << "hallow student , welcome to the exam!" << endl;
			            //.............?????
                
        }
        else
        {
        	cout << "Invalid username or password. Please try again." << endl;
		}
		  }		
			
		}


void  type_of_exam ::questiontesti()
{
    int numberOfStudents, numberOfQuestions;
    cout << "Enter the number of students forquestiontesti : ";
    cin >> numberOfStudents;
    cout << "Enter the number of questiontesti: ";
    cin >> numberOfQuestions;

    string* questions = new string[numberOfQuestions];
    char* answerKey = new char[numberOfQuestions];
    char** studentAnswers = new char*[numberOfStudents];

    for (int i = 0; i < numberOfStudents; ++i)
	{
        studentAnswers[i] = new char[numberOfQuestions];
    }

    // Enter the questions and correct answers
    for (int i = 0; i < numberOfQuestions; ++i)
	{
        cout << " Boss :Enter question  " << (i + 1) << ": ";
        cin.ignore(); 
        getline(cin, questions[i]);
        cout << "Boss :Enter the correct answer for question " << (i + 1) << " (A, B, C, or D): ";
        cin >> answerKey[i];
    }
   
    for (int s = 0; s < numberOfStudents; ++s)
	{
        int score = 0;
        cout << "Enter answers for student " << (s + 1) << ": \n";
        for (int q = 0; q < numberOfQuestions; ++q)
		{
            cin >> studentAnswers[s][q];
            if (studentAnswers[s][q] == answerKey[q])
			{
                score++;
            }
        }
        cout << "Score for student " << (s + 1) << ": " << score << " out of " << numberOfQuestions << endl;
    }

    delete[] questions;
    delete[] answerKey;
    for (int i = 0; i < numberOfStudents; ++i)
	{
        delete[] studentAnswers[i];
    }
    delete[] studentAnswers;
}

 void type_of_exam ::descripQues()
{
    int numberOfStudents, numberOfDescripQues;
    cout << "Enter the number of students: ";
    cin >> numberOfStudents;
    cout << "Enter the number of descriptive questions: ";
    cin >> numberOfDescripQues;

    string* questions = new string[numberOfDescripQues];
    string* correctAnswers = new string[numberOfDescripQues];
    string** studentAnswers = new string*[numberOfStudents];
    for (int i = 0; i < numberOfStudents; ++i)
	{
        studentAnswers[i] = new string[numberOfDescripQues];
    }

    for (int i = 0; i < numberOfDescripQues; ++i)
	{
        cout << "Enter question " << (i+1) << ": ";
        cin.ignore(); 
        getline(cin, questions[i]);
        cout << "Enter answer for question " << (i+1) << ": ";
        getline(cin, correctAnswers[i]);
    }

    for (int s = 0; s < numberOfStudents; ++s)
	{
        cout << "Answer from student " << (s+1) << ": \n";
        for (int q = 0; q < numberOfDescripQues; ++q)
		{
            cout << questions[q] << endl;
            getline(cin, studentAnswers[s][q]);
            
			for (int s = 0; s < numberOfStudents; ++s)
			{
    			int score = 0;
    			cout << "Answer from student " << (s+1) << ": \n";
    			for (int q = 0; q < numberOfDescripQues; ++q)
				{
    			    cout << questions[q] << endl;
    			    getline(cin, studentAnswers[s][q]);
    			    if (studentAnswers[s][q] == correctAnswers[q])
					{
        			    score++; 
        			}
    			}
    			cout << "Score for student " << (s+1) << ": " << score << " out of " << numberOfDescripQues << endl;
			}

        }
    }

    delete[] questions;
    delete[] correctAnswers;
    for (int i = 0; i < numberOfStudents; ++i)
	{
        delete[] studentAnswers[i];
    }
    delete[] studentAnswers;
}

void   type_of_exam:: list()
{
	cout << "\n1_ask the question .\n2_  (edameeeeee)  " ;
}

