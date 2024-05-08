#include <iostream>
#include <string>
using namespace std;

class pasword
{
public:
    //    void access();
};

class type_of_exam
{
public:
    void questiontesti();
    void descripQues();
    void list_teacher();
    void list_student();
    void list_of_questions();
    void techer_work();
    void student_work();
};

class tozih : public type_of_exam
{
public:
    void boss();
};

int main()
{
    // pasword ob;
    type_of_exam ob2;
    // tozih ob3;
    //  for inter ostad /pasword
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

        if (username == "A" && password == "1234" && userType == "teacher")
        {
            loggedIn = true;
            cout << "hellow teacher , welcome!\n----------------------------\n";
            ob2.techer_work();
        }
        else if (username == "A" && password == "1234" && userType == "student")
        {
            loggedIn = true;
            cout << "hallow student , welcome to the exam!\n--------------------------\n";
            ob2.list_student();
            ob2.student_work();
            //.............?????
        }
        else
        {
            cout << "Invalid username or password. Please try again." << endl;
        }
    }

    return 0;
}

// void pasword::access()

void type_of_exam ::questiontesti()
{
    int numberOfStudents, numberOfQuestions;
    cout << "Enter the number of students forquestiontesti : ";
    cin >> numberOfStudents;
    cout << "Enter the number of questiontesti: ";
    cin >> numberOfQuestions;

    string *questions = new string[numberOfQuestions];
    char *answerKey = new char[numberOfQuestions];
    char **studentAnswers = new char *[numberOfStudents];

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

    /*  for (int s = 0; s < numberOfStudents; ++s)
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
            cout << "Score for student " << (s + 1) << ": " << score << " out of " << numberOfQuestions << endl
                 << "\n you can continue or finished so enter anumber";
        }
    */
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

    string *questions = new string[numberOfDescripQues];
    string *correctAnswers = new string[numberOfDescripQues];
    string **studentAnswers = new string *[numberOfStudents];
    for (int i = 0; i < numberOfStudents; ++i)
    {
        studentAnswers[i] = new string[numberOfDescripQues];
    }

    for (int i = 0; i < numberOfDescripQues; ++i)
    {
        cout << "Enter question " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, questions[i]);
        cout << "Enter answer for question " << (i + 1) << ": ";
        getline(cin, correctAnswers[i]);
    }

    /*  for (int s = 0; s < numberOfStudents; ++s)
        {
            cout << "Answer from student " << (s + 1) << ": \n";
            for (int q = 0; q < numberOfDescripQues; ++q)
            {
                cout << questions[q] << endl;
                getline(cin, studentAnswers[s][q]);

                for (int s = 0; s < numberOfStudents; ++s)
                {
                    int score = 0;
                    cout << "Answer from student " << (s + 1) << ": \n";
                    for (int q = 0; q < numberOfDescripQues; ++q)
                    {
                        cout << questions[q] << endl;
                        getline(cin, studentAnswers[s][q]);
                        if (studentAnswers[s][q] == correctAnswers[q])
                        {
                            score++;
                        }
                    }
                    cout << "Score for student " << (s + 1) << ": " << score << " out of " << numberOfDescripQues << endl
                         << "\n you can continue or finished so enter anumber";
                }
            }
        }
    */
    delete[] questions;
    delete[] correctAnswers;
    for (int i = 0; i < numberOfStudents; ++i)
    {
        delete[] studentAnswers[i];
    }
    delete[] studentAnswers;
}

void type_of_exam ::techer_work()
{
    type_of_exam obj1;
    obj1.list_teacher();
    int item;
    cin >> item;
    switch (item)
    {
    case 1:
    {
        int choose = 0;
        while (choose != 3)
        {
            obj1.list_of_questions();
            cin >> choose;
            switch (choose)
            {
            case 1:
            {
                obj1.questiontesti();

                break;
            }

            case 2:
            {
                obj1.descripQues();

                break;
            }
            case 3:
            {
                break;
            }
            }
        }
        break;
    }
    case 2:
    {
        //...........
        break;
    }
    case 3:
    {

        //..........
        break;
    }
    case 4:
    {
        //..........
        break;
    }
    }
}

void type_of_exam ::student_work()
{
    type_of_exam obj2;
    obj2.list_student();
    int item;
    cin >> item;
    switch (item)
    {
    case 1:
    {
        cout << "\n-------------------------------\ntst is start\n\n";

        break;
    }
    case 2:
    {
        //...........
        break;
    }
    }
}

void type_of_exam::list_teacher()
{
    cout << "\n1_making the tst .";
    cout << "\n2_view the history of previouns exams and their results .";
    cout << "\n3_exams in the correction queue .";
    cout << "\n4_list of students (view current lists / create a new list)";
}

void type_of_exam::list_student()
{
    cout << "\n1_start the tst .";
    cout << "\n2_....";
}

void type_of_exam::list_of_questions()
{
    cout << "\nDear BOSS\n1_for tst exam enter .";
    cout << "\n2_for dscrip exam enter .";
    cout << "\n3_ finish .";
}

void tozih ::boss()
{
    int n = 0;
    cout << "DEAR BOSS please enter number of student that have  grads  :";
    cin >> n;
    float grade[n];

    for (int i = 0; i < n; i++)
    {
        cout << " The grade of student [ " << i << " ] is ";
        cin >> grade[i];
    }
}