#include <iostream>
#include <string>
#include <limits>
using namespace std ; 
class book ;
class library ;
int t = 0 ;

class book 
{
private :  
  string *arrbook = new string [10] ;
  string *arrwriter = new string [10] ;
  string *arrdate = new string [10] ;
  string *arrjaner = new string [10] ;
public :
void find_topic();
void serch (string [],int ,string ) ;
  book ()
  {
    cout << "\nbook" ;
    getline(cin , arrbook [t]) ;
    cout << "\nwriter" ; 
    getline(cin , arrwriter [t]) ;
    cout << "\ndate" ;
    getline(cin , arrdate [t]) ;
    cout << "\njaner" ;
    getline(cin , arrjaner [t]) ;
    t++ ;
  }
};
void find_topic() {

cout <<"number for find topic";
int ganraf=0;
cin>>ganraf;
string list[ganraf] ;
for(int i=0 ;i<ganraf;i++) {
	
cin>> list[i] ;
string key =list [i] ;
}
}

void serch (string list[],int ganraf, string key)  {
	for(int i=0 ;i<ganraf;i++)
	if (key=="ddd")
	{
	cout<<"ff";
	}

  
}
class library 
{
private :
  int size=0 ;
public : 
  
  library ()
  {
    cout << "inter size" ;
   cin >> size ;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
    arrpoya (size) ;
    book ob[size] ;
  }
  void arrpoya (int a)
  {
    string *arrbook = new string [a] ;
    string *arrwriter = new string [a] ;
    string *arrdate = new string [a] ;
    string *arrjaner = new string [a] ;
  }
};
int main ()
{
  library ob ;
  find_topic() ;
  return 0 ;
}