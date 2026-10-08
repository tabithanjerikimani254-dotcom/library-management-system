# include <iostream>
using namespace std;
class Book
{
	public:
		string book_title;
		string author;
		int number_of_copies;
		int number_of_available_copies;

		void input_details(){
			
			cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;
			cout<<"LIBRARY MANAGEMENT SYSTEM:"<<endl;
			cout<<"enter book title:"<<endl;
			cin>>book_title;
			cout<<"enter the author:"<<endl;
			cin>>author;
			cout<<"enter the number of copies:"<<endl;
			cin>>number_of_copies;
		};
void borrowbook(int borrowed_book){
	number_of_available_copies=number_of_copies-borrowed_book;}
	
	void displaydetails(){
		cout<<"====================="<<endl;
	    cout<<"library management system:"<<endl;
	    cout<<"======================"<<endl;
	    cout<<"book title:"<<book_title<<endl;
	    cout<<"book author:"<<author<<endl;
	    cout<<"number of available copies:"<<number_of_available_copies<<endl;
  	}
};
  	int main() 
	  { Book book; 
	  book.input_details(); 
	  return 0; 
	  
	  }
	
