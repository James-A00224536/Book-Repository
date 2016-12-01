#include <iostream>
#include <string>
#include "Books.h"

Book::Book(string titleParam, long long isbnParam, string authorParam, bool availableParam)
{
	title = titleParam;
	author = authorParam;
	isbn = isbnParam;
	available = availableParam;
}

string Book::getTitle() const
{
	return title;
}

long long Book::getISBN() const
{
	return isbn;
}

string Book::getAuthor() const
{
	return author;
}

bool Book::getAvailability() const
{
	return available;
}

void Book::setAvailability(bool availableParam)
{
	available = availableParam;
}

Book* Book::getNext() const
{
	return next;
}

void Book::setNext(Book* nextParam)
{
	next = nextParam;
}

Book* Book::getPrevious() const
{
	return previous;
}

void Book::setPrevious(Book* previousParam)
{
	previous = previousParam;
}

void Book::printDetails() const
{
	cout<<"Title: "<<title<<endl;
	cout<<"Author: "<<author<<endl;
	cout<<"ISBN: "<<isbn<<endl;
	cout<<"Availability: "<<available<<endl;
	cout<<"\n---------------\n"<<endl;
}