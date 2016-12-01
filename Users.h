#ifndef USERS_H
#define USERS_H

#include <string>
#include <iostream>

using namespace std;

class User
{
	public:
		/**
		* User constructor
		* @param typeParam		the user type
		* @param nameParam		the user's name
		* @param passwordParam	the user's password
		*/
		User(string titleParam, string isbnParam, string authorParam);
		
		/**
		* Get the type of the user
		* @return	the user type
		*/
		string getType() const;

		/**
		* Get the name of the User
		* @return	the book's ISBN
		*/
		string getName() const;

		/**
		* Get the password of the User
		* @return	the user's password
		*/
		string getPassword() const;

		/**
		* Get the next User in the list
		* @return	pointer to the next User in the list
		*/
		User* getNext() const;

		/**
		* Set the next User in the list
		* @return	void
		*/
		void setNext(User* nParam);

		/**
		* Get the previous User in the list
		* @return	pointer to the previous User in the list
		*/
		User* getPrevious() const;

		/**
		* Set the previous User in the list
		* @return	void
		*/
		void setPrevious(User* pParam);

		/**
		* Print the details of a User
		* @return	void
		*/
		void printDetails() const;
		
	private:
		/**
		 * the User type
		 */
		string type;

		/**
		 * the User's name
		 */
		string name;

		/**
		 * the User's password
		 */
		string password;

		/**
		 * the next User in the list
		 */
		User* next;

		/**
		 * the previous User in the list
		 */
		User* previous;
};

#endif // USERS_H