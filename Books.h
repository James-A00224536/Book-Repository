#ifndef BOOKS_H
#define BOOKS_H

#include <string>
#include <iostream>

using namespace std;

class Book
{
	public:
		/**
		* Book constructor
		* @param titleParam		the book title
		* @param isbnParam		the book's International Standard Book Number
		* @param authorParam	the book's author
		* @param availableParam the book's availability
		*/
		Book(string titleParam, long long isbnParam, string authorParam, bool availableParam);
		
		/**
		* Get the title of the book
		* @return	the book title
		*/
		string getTitle() const;

		/**
		* Get the ISBN of the book
		* @return	the book's ISBN
		*/
		long long getISBN() const;

		/**
		* Get the author of the book
		* @return	the book's author
		*/
		string getAuthor() const;

		/**
		* Get the availability of the book
		* @return	the book's availability
		*/
		bool getAvailability() const;

		/**
		* Set theAvailability of the book 
		* @return	void
		*/
		void setAvailability(bool availableParam);

		/**
		* Get the next book in the list
		* @return	pointer to the next book in the list
		*/
		Book* getNext() const;

		
		/**
		* Set the next book in the list
		* @return	void
		*/
		void setNext(Book* nParam);

		/**
		* Get the previous book in the list
		* @return	pointer to the previous book in the list
		*/
		Book* getPrevious() const;

		/**
		* Set the previous book in the list
		* @return	void
		*/
		void setPrevious(Book* pParam);

		/**
		* Print the details of a book
		* @return	void
		*/
		void printDetails() const;
		
	private:
		/**
		 * the book title
		 */
		string title;

		/**
		 * the book's ISBN
		 */
		long long isbn;

		/**
		 * the book's author
		 */
		string author;

		/**
		 * the book's availability
		 */
		bool available;

		/**
		 * the next book in the list
		 */
		Book* next;

		/**
		 * the previous book in the list
		 */
		Book* previous;
};

#endif // BOOKS_H