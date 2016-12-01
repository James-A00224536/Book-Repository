#include "Books.h"
#include "Users.h"
#include <iostream>
using namespace std;

//Search by ISBN
Book* searchByISBN(long long isbn, Book *first)
{
	Book* nextBook = first;
	string choice;
	while(nextBook != NULL)
	{
		//Compare ISBNs
		if(isbn == nextBook->getISBN())
		{
			nextBook->printDetails();
			if(nextBook->getAvailability())
				{
					cout<<"This book is currently available.\nWould you like to Check it out?"<<endl;
					cout<<"(1 for Yes------2 for No)"<<endl;
					cout<<"Entry: ";
					cin>>choice;
					if(choice =="1")
					{
						nextBook->setAvailability(false);
						cout<<"You have checked out "<<nextBook->getTitle()<<"\n\n"<<endl;
					}
					else if(choice =="2")
					{
						cout<<"Do you require additional services?\n\n"<<endl;
					}
					else
					{
						cout<<"Invalid Entry!\n\n"<<endl;
					}
				}
				else if(nextBook->getAvailability() == false)
				{
					cout<<"This book is currently checked out."<<endl;
					cout<<"Do you require additional services?\n\n"<<endl;
				}
			break;
		}
		else if(isbn != nextBook->getISBN())
		{
			nextBook = nextBook->getNext();
		}
	}
	return NULL;
}

Book* guestSearchISBN(long long isbn, Book *first)
{
	Book* nextBook = first;
	while(nextBook != NULL)
	{
		//Compare ISBNs
		if(isbn == nextBook->getISBN())
		{
			nextBook->printDetails();
			break;
		}
		else if(isbn != nextBook->getISBN())
		{
			nextBook = nextBook->getNext();
		}
	}
	return NULL;
}

//Search by Author
Book* searchByAuthor(string author, Book *first)
{
	Book* nextBook = first;
	string choice;
	while(nextBook != NULL)
	{
		//Compare authors
		if(author == nextBook->getAuthor())
		{
			nextBook->printDetails();
			if(nextBook->getAvailability())
				{
					cout<<"This book is currently available.\nWould you like to Check it out?"<<endl;
					cout<<"(1 for Yes------2 for No)"<<endl;
					cout<<"Entry: ";
					cin>>choice;
					if(choice =="1")
					{
						nextBook->setAvailability(false);
						cout<<"You have checked out "<<nextBook->getTitle()<<"\n\n"<<endl;
					}
					else if(choice =="2")
					{
						cout<<"Do you require additional services?\n\n"<<endl;
					}
					else
					{
						cout<<"Invalid Entry!\n\n"<<endl;
					}
				}
				else if(nextBook->getAvailability() == false)
				{
					cout<<"This book is currently checked out."<<endl;
					cout<<"Do you require additional services?\n\n"<<endl;
				}
			break;
		}
		else if(author != nextBook->getTitle())
		{
			nextBook = nextBook->getNext();
		}
	}
	return NULL;
}

Book* guestSearchAuthor(string author, Book *first)
{
	Book* nextBook = first;
	while(nextBook != NULL)
	{
		//Compare authors
		if(author == nextBook->getAuthor())
		{
			nextBook->printDetails();
			break;
		}
		else if(author != nextBook->getTitle())
		{
			nextBook = nextBook->getNext();
		}
	}
	return NULL;
}

//Search by Title
Book* searchByTitle(string title, Book *first)
{
	Book* nextBook = first;
	string choice;
	while(nextBook != NULL)
	{
		//Compare titles
		if(title == nextBook->getTitle())
		{
			nextBook->printDetails();
			if(nextBook->getAvailability())
				{
					cout<<"This book is currently available.\nWould you like to Check it out?"<<endl;
					cout<<"(1 for Yes------2 for No)"<<endl;
					cout<<"Entry: ";
					cin>>choice;
					if(choice =="1")
					{
						nextBook->setAvailability(false);
						cout<<"You have checked out "<<nextBook->getTitle()<<"\n\n"<<endl;
					}
					else if(choice =="2")
					{
						cout<<"Do you require additional services?\n\n"<<endl;
					}
					else
					{
						cout<<"Invalid Entry!\n\n"<<endl;
					}
				}
				else if(nextBook->getAvailability() == false)
				{
					cout<<"This book is currently checked out."<<endl;
					cout<<"Do you require additional services?\n\n"<<endl;
				}
			break;
		}
		else if(title != nextBook->getTitle())
		{
			nextBook = nextBook->getNext();
		}	
	}
	return NULL;
}

Book* guestSearchTitle(string title, Book *first)
{
	Book* nextBook = first;
	while(nextBook != NULL)
	{
		//Compare titles
		if(title == nextBook->getTitle())
		{
			nextBook->printDetails();
			break;
		}
		else if(title != nextBook->getTitle())
		{
			nextBook = nextBook->getNext();
		}	
	}
	return NULL;
}

//Return a Book
Book* returnBook(string title, Book *first)
{
	Book* nextBook = first;
	while(nextBook != NULL)
	{
		if(title == nextBook->getTitle())
		{
			nextBook->setAvailability(true);
			break;
		}
		else if(title != nextBook->getTitle())
		{
			nextBook = nextBook->getNext();
		}	
	}
	return NULL;
}

//Removes a book from the list
void removeBook(Book *remove)
{
	Book* dropBook = remove;
	cout<<"\n"<<dropBook->getTitle()<<" has been removed.\n"<<endl;
	Book* lastBook = dropBook->getPrevious();
	Book* nextBook = dropBook->getNext();
	
	lastBook->setNext(nextBook);
	nextBook ->setPrevious(lastBook);

}

//Adds a book to the list
void addBook(Book *pBook, Book *nBook)
{
	Book* newBook = nBook;
	Book* prevBook = pBook;

	Book* nextBook = prevBook->getNext();

	prevBook->setNext(newBook);
	newBook->setNext(nextBook);
	newBook->setPrevious(prevBook);
	nextBook->setPrevious(newBook);

	newBook->printDetails();
}

//Prints the details of all books from first to last
void printAllBooks(Book *first)
{
	Book* nextBook = first;
	while(nextBook != NULL)
	{
		cout<<"\n"<<endl;
		nextBook->printDetails();
		nextBook = nextBook->getNext();
	}
}

//Search by name
User* searchByName(string name, User *first)
{
	User* nextUser = first;
	while(nextUser != NULL)
	{
		//Compare ISBNs
		if(name == nextUser->getName())
		{
			return nextUser;
		}
		else
		{
			nextUser = nextUser->getNext();
		}
	}
	return NULL;
}

//Search by password
User* searchByPassword(string password, User *first)
{
	User* nextUser = first;
	while(nextUser != NULL)
	{
		//Compare ISBNs
		if(password == nextUser->getPassword())
		{
			return nextUser;
		}
		else
		{
			nextUser = nextUser->getNext();
		}
	}
	return NULL;
}

//Removes a user from the list
void removeUser(User *remove)
{
	User* dropUser = remove;
	cout<<"\n"<<dropUser->getName()<<" has been removed.\n"<<endl;
	User* lastUser = dropUser->getPrevious();
	User* nextUser = dropUser->getNext();
	
	lastUser->setNext(nextUser);
	nextUser->setPrevious(lastUser);
}

//Adds a user to the list
void addUser(User *pUser, User *nUser)
{
	User* newUser = nUser;
	User* prevUser = pUser;

	User* nextUser = prevUser->getNext();

	prevUser->setNext(newUser);
	newUser->setNext(nextUser);
	newUser->setPrevious(prevUser);
	nextUser->setPrevious(newUser);

	newUser->printDetails();
}

void main()
{
	string access;
	string passEntry;
	string type;
	string task;
	string clear;
	string bookSearch;
	string authorSearch;
	string choice;
	long long isbnSearch;
	User* current = NULL;
	Book* searched = NULL;
	string newTitle;
	string newAuthor;
	long long newISBN;
	bool newAvail;
	string newName;
	string newPassword;

	Book *book_1 = new Book("The Colour of Magic", 9781473205321, "Terry Pratchett", true);
	Book *book_2 = new Book("Lord of the Rings: The Two Towers", 9780061917974, "J.R.R. Tolkien", true);
	Book *book_3 = new Book("Dune", 9788371502118, "Frank Herbert", true);
	Book *book_4 = new Book("Orcs", 9781400196890, "Stan Nicholls", true);
	Book *book_5 = new Book("And To My Nephew Albert...", 9780340043233, "David Forest", true);
	Book *book_6 = new Book("Y: The Last Man, Vol. 1: Unmanned", 9781563899805, "Brian K. Vaughan", true);

	book_1->setNext(book_2);
	book_2->setNext(book_3);
	book_3->setNext(book_4);
	book_4->setNext(book_5);
	book_5->setNext(book_6);
	
	book_6->setPrevious(book_5);
	book_5->setPrevious(book_4);
	book_4->setPrevious(book_3);
	book_3->setPrevious(book_2);
	book_2->setPrevious(book_1);
	
	User *user_1 = new User("Administrator", "Brian Flynn", "password");
	User *user_2 = new User("Registered", "Sandra Norwell", "pass1234");
	User *user_3 = new User("Registered", "Jerome Moran", "swordfish");
	User *user_4 = new User("Registered", "Harry Dorn", "dorninator");
	User *user_5 = new User("Registered", "Mary Doyle", "mary12345");
	User *user_6 = new User("Registered", "Kevin Surrey", "drowssap");
	User *user_7 = new User("Administrator", "Jessica Rhodes", "kq2j7lrP1");

	user_1->setNext(user_2);
	user_2->setNext(user_3);
	user_3->setNext(user_4);
	user_4->setNext(user_5);
	user_5->setNext(user_6);
	user_6->setNext(user_7);

	user_7->setPrevious(user_6);
	user_6->setPrevious(user_5);
	user_5->setPrevious(user_4);
	user_4->setPrevious(user_3);
	user_3->setPrevious(user_2);
	user_2->setPrevious(user_1);

	cout<<"Welcome to Hardback Libraries"<<endl;
	cout<<"The Most Exclusive Library in the known Universe!"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"Please confirm user access level: "<<endl;
	do{
		cout<<"Press 1 to begin login: \nPress 2 to continue as a Guest: \nEntry: ";
		cin>>access;
		if(access == "1")
		{
			cout<<"Please enter your password (case sensative): ";
			cin>>passEntry;
			current = searchByPassword(passEntry, user_1);
			if(current != NULL)
			{
				cout<<"\nWelcome back "<<current->getName()<<"."<<endl;
			}
			else
			{
				cout<<"Sorry but that password is not connected to an existing account."<<endl;
			}
			break;
		}
		else if(access == "2")
		{
			cout<<"\nYou will be signed in as a guest with limited privilages."<<endl;
			cout<<"Your password shall be 'guestpass'."<<endl;
			current = new User("Guest", "Guest", "guestpass");
			break;
		}
		else
		{
			cout<<"Invalid Entry!\n"<<endl;
		}
	}while(access != "1" || access != "2");

	cout<<"\nHow can we help you today?\n"<<endl;
	type = current->getType();
	if(type == "Administrator")
	{		
		do
		{
			cout<<"As an "<<type<<" you have the following options: "<<endl;
			cout<<"0. End Session."<<endl;
			cout<<"1. Add a book to the repository."<<endl;
			cout<<"2. Remove a book from the repository."<<endl;
			cout<<"3. Change a books availability."<<endl;
			cout<<"4. Add a registered user."<<endl;
			cout<<"5. Remove a registered user."<<endl;
			cout<<"Entry: ";
			cin>>task;
			if(task == "1")
			{
				cout<<"Enter Title: ";
				getline(cin,clear);
				getline(cin, newTitle);
				cout<<"Enter ISBN: ";
				cin>>newISBN;
				cout<<"Enter Author: ";
				getline(cin,clear);
				getline(cin, newAuthor);
				cout<<"Set Availability(1 for available------0 for unavailable): ";
				cin>>newAvail;

				Book *newBook = new Book(newTitle,  newISBN, newAuthor, newAvail);
				cout<<"\nBook added! Details below.\n"<<endl;
				addBook(book_5,newBook);
			}
			else if(task == "2")
			{
				removeBook(book_5);
			}
			else if(task == "3")
			{
				//printAllBooks(book_1);
				cout<<"Sorry, but this feature is currently unavailable."<<endl;
			}
			else if(task == "4")
			{
				cout<<"Enter new user Name: ";
				getline(cin,clear);
				getline(cin, newName);
				cout<<"Enter new user Password: ";
				getline(cin,clear);
				getline(cin, newPassword);

				User *newUser = new User("Registered",  newName, newPassword);
				cout<<"\nBook added! Details below.\n"<<endl;
				addUser(user_5,newUser);
			}
			else if(task == "5")
			{
				removeUser(user_5);
			}
		}while(task != "0");
	}
	else if(type == "Registered")
	{
		do
		{
			cout<<"As a "<<type<<" User you have the following options: "<<endl;
			cout<<"0. End Session."<<endl;
			cout<<"1. Search for a book by Title."<<endl;
			cout<<"2. Search for a book by Author."<<endl;
			cout<<"3. Search for a book by ISBN."<<endl;
			cout<<"4. Return checked out books."<<endl;
			cout<<"Entry: ";
			cin>>task;
			if(task == "1")
			{
				cout<<"Enter book title: ";
				getline(cin,clear);
				getline(cin, bookSearch);
				cout<<"\n\n"<<endl;
				searchByTitle(bookSearch, book_1);
			}
			else if(task == "2")
			{
				cout<<"Enter author name: ";
				getline(cin,clear);
				getline(cin, authorSearch);
				cout<<"\n\n"<<endl;
				searchByAuthor(authorSearch, book_1);
			}
			else if(task == "3")
			{
				cout<<"Enter ISBN: ";
				cin>>isbnSearch;
				cout<<"\n\n"<<endl;
				searchByISBN(isbnSearch, book_1);
			}
			else if(task == "4")
			{
				cout<<"Please enter the title of the book you are returning: "<<endl;
				getline(cin,clear);
				getline(cin, bookSearch);
				returnBook(bookSearch, book_1);
				cout<<"Thank you for returning this book."<<endl;
				cout<<"Do you require additional services?\n\n"<<endl;
			}
		}while(task != "0");
	}
	else if(type == "Guest")
	{
		do
		{
			cout<<"\nAs a "<<type<<" you have the following options: "<<endl;
			cout<<"0. End Session."<<endl;
			cout<<"1. Search for a book by Title."<<endl;
			cout<<"2. Search for a book by Author."<<endl;
			cout<<"3. Search for a book by ISBN."<<endl;
			cout<<"Entry: ";
			cin>>task;
			if(task == "1")
			{
				cout<<"Enter book title: ";
				getline(cin,clear);
				getline(cin, bookSearch);
				cout<<"\n\n"<<endl;
				guestSearchTitle(bookSearch, book_1);
			}
			else if(task == "2")
			{
				cout<<"Enter author name: ";
				getline(cin,clear);
				getline(cin, authorSearch);
				cout<<"\n\n"<<endl;
				guestSearchAuthor(authorSearch, book_1);
			}
			else if(task == "3")
			{
				cout<<"Enter ISBN: ";
				cin>>isbnSearch;
				cout<<"\n\n"<<endl;
				guestSearchISBN(isbnSearch, book_1);
			}
		}while(task != "0");
	}


	system("PAUSE");
}