#include<iostream>
using namespace std;
int main()
{


	cout << "****************************************************************************" << endl;
	cout << "****************************LIBRARY MANAGEMENT SYSTEM***********************" << endl;
	cout << "****************************************************************************" << endl;
	cout << "__________________________________MAIN MANUE________________________________" << endl;
	cout << endl;
	cout << "Portion : 1" << endl;
	cout << "English Novel and Litrature Portion:" << endl;

	cout << "                     " << endl;
	cout << "Book index" << "       " << "Book name" << "        " << "ISBN number" << "         " << "Author" << "       " << "Publishing year" << "       " << "Stock" << endl;
	cout << "1.        " << "       " << "The Hamlet" << "       " << "7845624578966" << "       " << "W Shakespear" << " " << "    1890       " << "       " << "  12   " << endl;
	cout << "2.        " << "    " << " Rich Dad Poor Dad  "<<"7845624578967" << "    " <<  " Robert Kiyosaki" << " " << "   1889    " << "       " << "     20    " << endl;
	cout << "3.        " << "    " << "  Beloved          " << " 9780307388629 " << "    Toni Morrison " << "  " << "   1987   " << "       " << "      25  " << endl;
	cout << "4.        " << "    " << "Heart of Darkness " << " 9780585229348 " << "    " << " Joseph Conrad " << "  " << "   1899  " << "      " << "        22  " << endl;
	cout << "5.        " << "    " << " Emma             " << "  9781101089316 " << "    " << "  Jone Austen   " << "  " << " 1815  " << "      " << "        32  " << endl;
	cout << endl;
	cout << "Portion : 2" << endl;
	cout << "Science Portion:" << endl;
	cout << "                              " << endl;
	cout << "Book index" << "       " << "Book name" << "        " << "ISBN number" << "         " << "Author" << "       " << "Publishing year" << "       " << "Stock" << endl;
	cout << "1.        " << "       " << "Lives of a cell" << "  " << " " << "  9781101667057" << "  " << " Lewis Thomas " << "  " << "1974       " << "       " << "  12 " << endl;
	cout << "2.        " << "   " << "A brief history of time" << " " << "9781409092360" << "  " << "Stephen Hawkin" << " " << " 1988        " << "       " << "  8 " << endl;
	cout << "3.        " << "       " << "Double Helix " << "     " << " " << " 9781780225029" << "  " << "James D. Watson" << " " << "1968       " << "       " << "  10 " << endl;
	cout << "4.        " << "       " << "The feynman  " << "     " << " " << " 9782738177179" << "  " << "Richard Feynman" << " " << "1963       " << "       " << "   9 " << endl;
	cout << "5.        " << "       " << "Silent Spring" << "     " << "  9783406704222" << " " << " Rachel Carson" << "  " << " 1962         " << "       " << "14 " << endl;

	cout << endl;
	cout << "Portion : 3" << endl;
	cout << "Urdu Litrature and Poetry portion:" << endl;
	cout << "                                " << endl;
	cout << "Book index" << "       " << "Book name" << "        " << "  ISBN number" << "         " << "  Author" << "       " << "Publishing year" << "       " << "Stock" << endl;
	cout << "1.        " << "       " << "Peer e Kamil" << "       " << "9789690023414" << "         " << "Umera Ahmad" << "     " << "2004           " << "       " << "12   " << endl;
	cout << "2.        " << "       " << "Deewan e Ghalib" << "    " << "9789690007926" << "         " << "Mirza Ghalib" << "    " << "1969           " << "       " << "18   " << endl;
	cout << "3.        " << "       " << "Bang e Dra" << "         " << "9789660983458" << "         " << "Allama Iqbal" << "    " << "1924           " << "       " << "11   " << endl;
	cout << "4.        " << "       " << "Overcoat   " << "        " << "9788467841145" << "         " << "Ghulam Abbas" << "    " << "1937           " << "       " << "9    " << endl;
	cout << "5.        " << "       " << "Raja Gidh" << "          " << "9789693505146" << "         " << " Bano Qudsia" << "    " << "1981           " << "       " << "11   " << endl;
	cout << endl;
	cout << " Task to do:" << endl;
	cout << "1.Issue a book" << endl << "2. Return a book" << endl;
	cout << endl;
	int select;
	int button;
	double isbn;
	int count1 = 0; int count2 = 0; int count3 = 0; int count4 = 0; int count5 = 0; int count6 = 0; int count7 = 0; int count8 = 0; int count9 = 0; int count10 = 0; int count11 = 0;
	int count12 = 0; int count13 = 0; int count14 = 0; int count15 = 0; int count16 = 0; int count17 = 0;
	int section;
	char gender;
	int age;
	int items;
	int portion;
	int years;
	char level;
	int id;
	int r_portion;
	cout << endl;
	cout << "PRESS 1 FOR STUDENT OR PRESS 2 FOR TEACHER" << endl;
	cin >> select;
	int j = 0;
	if (select == 1)
	{

		cout << "Enter your Roll no" << endl;
		cin >> section;
		cout << "Enter your age" << endl;
		cin >> age;
		cout << "Enter your gender M/m for male and F/f for female" << endl;
		cin >> gender;
		cout << "Press number to get the desired action" << endl;
		cin >> button;
		if (button == 1)
		{
			cout << "Press the portion number of book you want to get" << endl;
			cin >> portion;
		}
		if (portion == 1)
		{
			cout << "You selected English Novels and litrature portion:" << endl;
			cout << endl;
			cout << "Enter the isbn number of desired book from selected region:" << endl;
			cin >> isbn;

			if (isbn == 7845624578966)
			{
				count1 = 12;
				cout << "Enter the number of book within the stock you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count1)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}

					else{

						cout << "Book:" << endl << "The Hamlet" << endl << "ISBN:" << endl << "7845624578966" << endl << "Author:" << endl << "W Shakespear" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count1 - items << endl;
						break;
					}
				}

			}


			else if (isbn == 7845624578967)
			{
				count2 = 20;
				cout << "Enter the number of books you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count2)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Rich Dad Poor Dad" << endl << "ISBN:" << endl << "7845624578967" << endl << "Author:" << endl << "Robert Kiyosaki" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count2 - items << endl;
						break;
					}
				}
			}
			else if (isbn == 9780307388629)
			{
				count3 = 25;
				cout << "Enter the number of books you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count3)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Beloved" << endl << "ISBN:" << endl << "9780307388629" << endl << "Author:" << endl << " Toni Morrison" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count3 - items << endl;
						break;
					}
				}
			}
			else if (isbn == 9780585229348)
			{
				count4 = 22;
				cout << "Enter the number of books you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count4)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Heart of Darkness" << endl << "ISBN:" << endl << "9780585229348" << endl << "Author:" << endl << "Joseph Conrad" << endl << "has been alloted to you" << endl;
						cout << "Remaining stoke of this book is" << count4 - items << endl;
						break;
					}
				}
			}
			else if (isbn == 9781101089316)
			{
				count5 = 32;
				cout << "Enter the number of books you want to get:" << endl;
				items;
				while (j<3)
				{

					if (items >= count5)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Emma" << endl << "ISBN:" << endl << "9781101089316" << endl << "Author:" << endl << "Jone Austen" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << count5 - items << endl;
						break;
					}
				}
			}
			else
				cout << "This book is not available in this portion" << endl;
		}

		else if (portion == 2)
		{
			cout << "You selected Science portion." << endl;
			cout << endl;
			cout << "Enter the ISBN number of desired book from selected region:" << endl;
			cin >> isbn;
			if (isbn == 9781101667057)
			{
				count6 = 12;
				cout << "Enter the number of book within the stock you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count6)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}

					else{

						cout << "Book:" << endl << "Lives of a cell" << endl << "ISBN:" << endl << "9781101667057" << endl << "Author:" << endl << "Lewis Thomas" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count6 - items << endl;
						break;
					}
				}

			}


			else if (isbn == 9781409092360)
			{
				count7 = 8;
				cout << "Enter the number of books you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count7)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "A brief history of time" << endl << "ISBN:" << endl << "9781409092360" << endl << "Author:" << endl << "Stephen Hawking" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count7 - items << endl;
						break;
					}
				}
			}
			else if (isbn == 9781780225029)
			{
				count8 = 10;
				cout << "Enter the number of books you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count8)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Double Helix" << endl << "ISBN:" << endl << "9781780225029" << endl << "Author:" << endl << " James D. Watson" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count8 - items << endl;
						break;
					}
				}
			}
			else if (isbn == 9782738177179)
			{
				count9 = 9;
				cout << "Enter the number of books you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count9)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "The feynman" << endl << "ISBN:" << endl << "9782738177179" << endl << "Author:" << endl << "Richard Feynman" << endl << "has been alloted to you" << endl;
						cout << "Remaining stoke of this book is" << count9 - items << endl;
						break;
					}
				}
			}
			else if (isbn == 9783406704222)
			{
				count10 = 14;
				cout << "Enter the number of books you want to get:" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count10)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Silent Spring" << endl << "ISBN:" << endl << "9783406704222" << endl << "Author:" << endl << "Rachel Carson" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count10 - items << endl;
						break;
					}
				}
			}
			else
				cout << "This book is not available in this portion" << endl;


		}
		else if (portion == 3)
		{
			cout << "You selected Urdu litrature and Poetry portion." << endl;
			cout << endl;
			cout << "Enter the ISBN number of desired book from selected region:" << endl;
			cin >> isbn;
			if (isbn == 9789690023414)
			{
				count11 = 12;
				cout << "Enter the number of book within the stock you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count11)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}

					else{

						cout << "Book:" << endl << "Peer e Kamil" << endl << "ISBN:" << endl << "9789690023414" << endl << "Author:" << endl << "Umera Ahmed" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count11 - items << endl;
						break;
					}
				}

			}


			else if (isbn == 9789690007926)
			{
				count12 = 18;
				cout << "Enter the number of books you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count12)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Diwan e Ghalib" << endl << "ISBN:" << endl << "9789690007926" << endl << "Author:" << endl << "Mirza Ghalib" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count12 - items << endl;
						break;
					}
				}
			}
			else if (isbn == 9789660983458)
			{
				count13 = 11;
				cout << "Enter the number of books you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count13)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Bang e Dra" << endl << "ISBN:" << endl << "9789660983458" << endl << "Author:" << endl << " Allama Iqbal" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count13 - items << endl;
						break;
					}
				}
			}
			else if (isbn == 9788467841145)
			{
				count14 = 9;
				cout << "Enter the number of books you want to get" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count14)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Overcoat" << endl << "ISBN:" << endl << "9788467841145" << endl << "Author:" << endl << "Ghulam Abbas" << endl << "has been alloted to you" << endl;
						cout << "Remaining stoke of this book is" << count14 - items << endl;
						break;
					}
				}
			}
			else if (isbn == 9789693505146)
			{
				count15 = 11;
				cout << "Enter the number of books you want to get:" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count15)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Raja Gidh" << endl << "ISBN:" << endl << "9789693505146" << endl << "Author:" << endl << "Bano Qudsia" << endl << "has been alloted to you" << endl;
						cout << "Remaining stock of this book is" << endl << count15 - items << endl;
						break;
					}
				}
			}
			else
				cout << "This book is not available in this portion" << endl;


		}
		if (button == 2)
		{
			cout << "Press the portion number of book you want to return" << endl;
			cin >> r_portion;
		}
		if (r_portion == 1)
		{
			cout << "You selected English Novels and litrature portion:" << endl;
			cout << endl;
			cout << "Enter the isbn number of book you want to return from selected region:" << endl;
			cin >> isbn;

			if (isbn == 7845624578966)
			{
				count1 = 12;
				cout << "Enter the number of book within the stock you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count1)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}

					else{

						cout << "Book:" << endl << "The Hamlet" << endl << "ISBN:" << endl << "7845624578966" << endl << "Author:" << endl << "W Shakespear" << endl << "has been returned by you" << endl;
						cout << "New stock of this book is" << endl << count1 + items << endl;
						break;
					}
				}

			}


			else if (isbn == 7845624578967)
			{
				count2 = 20;
				cout << "Enter the number of books you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count2)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Rich Dad Poor Dad" << endl << "ISBN:" << endl << "7845624578967" << endl << "Author:" << endl << "Robert Kiyosaki" << endl << "has been returned to you" << endl;
						cout << "New stock of this book is" << endl << count2 + items << endl;
						break;
					}
				}
			}
			else if (isbn == 9780307388629)
			{
				count3 = 25;
				cout << "Enter the number of books you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count3)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Beloved" << endl << "ISBN:" << endl << "9780307388629" << endl << "Author:" << endl << " Toni Morrison" << endl << "has been returned by you" << endl;
						cout << "New stock of this book is" << endl << count3 + items << endl;
						break;
					}
				}
			}
			else if (isbn == 9780585229348)
			{
				count4 = 22;
				cout << "Enter the number of books you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count4)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Heart of Darkness" << endl << "ISBN:" << endl << "9780585229348" << endl << "Author:" << endl << "Joseph Conrad" << endl << "has been returned by you" << endl;
						cout << "New stoke of this book is" << count4 + items << endl;
						break;
					}
				}
			}
			else if (isbn == 9781101089316)
			{
				count5 = 32;
				cout << "Enter the number of books you want to return:" << endl;
				items;
				while (j<3)
				{

					if (items<1 || items>count5)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Emma" << endl << "ISBN:" << endl << "9781101089316" << endl << "Author:" << endl << "Jone Austen" << endl << "has been alloted to you" << endl;
						cout << "New stock of this book is" << count5 + items << endl;
						break;
					}
				}
			}
			else
				cout << "This book is not available in this portion" << endl;
		}

		else if (r_portion == 2)
		{
			cout << "You selected Science portion." << endl;
			cout << endl;
			cout << "Enter the ISBN number of the book you want to return from selected region:" << endl;
			cin >> isbn;
			if (isbn == 9781101667057)
			{
				count6 = 12;
				cout << "Enter the number of book within the stock you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count6)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}

					else{

						cout << "Book:" << endl << "Lives of a cell" << endl << "ISBN:" << endl << "9781101667057" << endl << "Author:" << endl << "Lewis Thomas" << endl << "has been returned by you" << endl;
						cout << "New stock of this book is" << endl << count6 + items << endl;
						break;
					}
				}

			}


			else if (isbn == 9781409092360)
			{
				count7 = 8;
				cout << "Enter the number of books you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count7)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "A brief history of time" << endl << "ISBN:" << endl << "9781409092360" << endl << "Author:" << endl << "Stephen Hawking" << endl << "has been returned by you" << endl;
						cout << "New stock of this book is" << endl << count7 + items << endl;
						break;
					}
				}
			}
			else if (isbn == 9781780225029)
			{
				count8 = 10;
				cout << "Enter the number of books you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items >= count8)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Double Helix" << endl << "ISBN:" << endl << "9781780225029" << endl << "Author:" << endl << " James D. Watson" << endl << "has been returned by you" << endl;
						cout << "New stock of this book is" << endl << count8 + items << endl;
						break;
					}
				}
			}
			else if (isbn == 9782738177179)
			{
				count9 = 9;
				cout << "Enter the number of books you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count9)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "The feynman" << endl << "ISBN:" << endl << "9782738177179" << endl << "Author:" << endl << "Richard Feynman" << endl << "has been returned by you" << endl;
						cout << "New stoke of this book is" << count9 - items << endl;
						break;
					}
				}
			}
			else if (isbn == 9783406704222)
			{
				count10 = 14;
				cout << "Enter the number of books you want to return:" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count10)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Silent Spring" << endl << "ISBN:" << endl << "9783406704222" << endl << "Author:" << endl << "Rachel Carson" << endl << "has been returned by you" << endl;
						cout << "New stock of this book is" << endl << count10 + items << endl;
						break;
					}
				}
			}
			else
				cout << "This book is not available in this portion" << endl;


		}
		else if (r_portion == 3)
		{
			cout << "You selected Urdu litrature and Poetry portion." << endl;
			cout << endl;
			cout << "Enter the ISBN number of desired book you want to return from selected region:" << endl;
			cin >> isbn;
			if (isbn == 9789690023414)
			{
				count11 = 12;
				cout << "Enter the number of book within the stock you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count11)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to get" << endl;
						cin >> items;
						j++;
					}

					else{

						cout << "Book:" << endl << "Peer e Kamil" << endl << "ISBN:" << endl << "9789690023414" << endl << "Author:" << endl << "Umera Ahmed" << endl << "has been returned you" << endl;
						cout << "New stock of this book is" << endl << count11 + items << endl;
						break;
					}
				}

			}


			else if (isbn == 9789690007926)
			{
				count12 = 18;
				cout << "Enter the number of books you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count12)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Diwan e Ghalib" << endl << "ISBN:" << endl << "9789690007926" << endl << "Author:" << endl << "Mirza Ghalib" << endl << "has been returned you" << endl;
						cout << "New stock of this book is" << endl << count12 + items << endl;
						break;
					}
				}
			}
			else if (isbn == 9789660983458)
			{
				count13 = 11;
				cout << "Enter the number of books you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count13)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Bang e Dra" << endl << "ISBN:" << endl << "9789660983458" << endl << "Author:" << endl << " Allama Iqbal" << endl << "has been returned by you" << endl;
						cout << "New stock of this book is" << endl << count13 + items << endl;
						break;
					}
				}
			}
			else if (isbn == 9788467841145)
			{
				count14 = 9;
				cout << "Enter the number of books you want to return" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count14)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Overcoat" << endl << "ISBN:" << endl << "9788467841145" << endl << "Author:" << endl << "Ghulam Abbas" << endl << "has been returned by you" << endl;
						cout << "Remaining stoke of this book is" << count14 + items << endl;
						break;
					}
				}
			}
			else if (isbn == 9789693505146)
			{
				count15 = 11;
				cout << "Enter the number of books you want to return:" << endl;
				cin >> items;
				while (j<3)
				{

					if (items<1 || items>count15)
					{
						cout << "This number is not eligible enter again" << endl;
						cout << endl;
						cout << "Enter the number of books again you want to return" << endl;
						cin >> items;
						j++;
					}
					else{
						cout << "Book:" << endl << "Raja Gidh" << endl << "ISBN:" << endl << "9789693505146" << endl << "Author:" << endl << "Bano Qudsia" << endl << "has been returned by you" << endl;
						cout << "New stock of this book is" << endl << count15 + items << endl;
						break;
					}
				}
			}
			else
				cout << "This book is not available in this portion" << endl;


		}

	}

	else if (select == 2)
	{
		cout << "Enter your years in this institution:" << endl;
		cin >> years;
		cout << "Enter your section to which you are teaching as incharge" << endl;
		cin >> level;
		cout << "Enter your teacher ID in words" << endl;
		cin >> id;
		cout << "Enter your gender M/m for male and F/f for female" << endl;
		cin >> gender;
		cout << "Press number to get the desired action" << endl;
		cin >> button;
		if (button == 1)
		{
			cout << "Press the portion number of book you want to return" << endl;
			cin >> portion;

			if (portion == 1)
			{
				cout << "You selected English Novels and litrature portion:" << endl;
				cout << endl;
				cout << "Enter the isbn number of desired book from selected region:" << endl;
				cin >> isbn;

				if (isbn == 7845624578966)
				{
					count1 = 12;
					cout << "Enter the number of book within the stock you want to return" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count1)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}

						else{

							cout << "Book:" << endl << "The Hamlet" << endl << "ISBN:" << endl << "7845624578966" << endl << "Author:" << endl << "W Shakespear" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count1 - items << endl;
							break;
						}
					}

				}


				else if (isbn == 7845624578967)
				{
					count2 = 20;
					cout << "Enter the number of books you want to return" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count2)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Rich Dad Poor Dad" << endl << "ISBN:" << endl << "7845624578967" << endl << "Author:" << endl << "Robert Kiyosaki" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count2 - items << endl;
							break;
						}
					}
				}
				else if (isbn == 9780307388629)
				{
					count3 = 25;
					cout << "Enter the number of books you want to return" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count3)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Beloved" << endl << "ISBN:" << endl << "9780307388629" << endl << "Author:" << endl << " Toni Morrison" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count3 - items << endl;
							break;
						}
					}
				}
				else if (isbn == 9780585229348)
				{
					count4 = 22;
					cout << "Enter the number of books you want to return" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count4)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Heart of Darkness" << endl << "ISBN:" << endl << "9780585229348" << endl << "Author:" << endl << "Joseph Conrad" << endl << "has been alloted to you" << endl;
							cout << "Remaining stoke of this book is" << count4 - items << endl;
							break;
						}
					}
				}
				else if (isbn == 9781101089316)
				{
					count5 = 32;
					cout << "Enter the number of books you want to return:" << endl;
					items;
					while (j<3)
					{

						if (items >= count5)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Emma" << endl << "ISBN:" << endl << "9781101089316" << endl << "Author:" << endl << "Jone Austen" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << count5 - items << endl;
							break;
						}
					}
				}
				else
					cout << "This book is not available in this portion" << endl;
			}

			else if (portion == 2)
			{
				cout << "You selected Science portion." << endl;
				cout << endl;
				cout << "Enter the ISBN number of desired book from selected region:" << endl;
				cin >> isbn;
				if (isbn == 9781101667057)
				{
					count6 = 12;
					cout << "Enter the number of book within the stock you want to return" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count6)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to retutn" << endl;
							cin >> items;
							j++;
						}

						else{

							cout << "Book:" << endl << "Lives of a cell" << endl << "ISBN:" << endl << "9781101667057" << endl << "Author:" << endl << "Lewis Thomas" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count6 - items << endl;
							break;
						}
					}

				}


				else if (isbn == 9781409092360)
				{
					count7 = 8;
					cout << "Enter the number of books you want to return" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count7)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "A brief history of time" << endl << "ISBN:" << endl << "9781409092360" << endl << "Author:" << endl << "Stephen Hawking" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count7 - items << endl;
							break;
						}
					}
				}
				else if (isbn == 9781780225029)
				{
					count8 = 10;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count8)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Double Helix" << endl << "ISBN:" << endl << "9781780225029" << endl << "Author:" << endl << " James D. Watson" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count8 - items << endl;
							break;
						}
					}
				}
				else if (isbn == 9782738177179)
				{
					count9 = 9;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count9)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "The feynman" << endl << "ISBN:" << endl << "9782738177179" << endl << "Author:" << endl << "Richard Feynman" << endl << "has been alloted to you" << endl;
							cout << "Remaining stoke of this book is" << count9 - items << endl;
							break;
						}
					}
				}
				else if (isbn == 9783406704222)
				{
					count10 = 14;
					cout << "Enter the number of books you want to get:" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count10)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Silent Spring" << endl << "ISBN:" << endl << "9783406704222" << endl << "Author:" << endl << "Rachel Carson" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count10 - items << endl;
							break;
						}
					}
				}
				else
					cout << "This book is not available in this portion" << endl;


			}
			else if (portion == 3)
			{
				cout << "You selected Urdu litrature and Poetry portion." << endl;
				cout << endl;
				cout << "Enter the ISBN number of desired book from selected region:" << endl;
				cin >> isbn;
				if (isbn == 9789690023414)
				{
					count11 = 12;
					cout << "Enter the number of book within the stock you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count11)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}

						else{

							cout << "Book:" << endl << "Peer e Kamil" << endl << "ISBN:" << endl << "9789690023414" << endl << "Author:" << endl << "Umera Ahmed" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count11 - items << endl;
							break;
						}
					}

				}


				else if (isbn == 9789690007926)
				{
					count12 = 18;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count12)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Diwan e Ghalib" << endl << "ISBN:" << endl << "9789690007926" << endl << "Author:" << endl << "Mirza Ghalib" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count12 - items << endl;
							break;
						}
					}
				}
				else if (isbn == 9789660983458)
				{
					count13 = 11;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count13)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Bang e Dra" << endl << "ISBN:" << endl << "9789660983458" << endl << "Author:" << endl << " Allama Iqbal" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count13 - items << endl;
							break;
						}
					}
				}
				else if (isbn == 9788467841145)
				{
					count14 = 9;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count14)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Overcoat" << endl << "ISBN:" << endl << "9788467841145" << endl << "Author:" << endl << "Ghulam Abbas" << endl << "has been alloted to you" << endl;
							cout << "Remaining stoke of this book is" << count14 - items << endl;
							break;
						}
					}
				}
				else if (isbn == 9789693505146)
				{
					count15 = 11;
					cout << "Enter the number of books you want to get:" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count15)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Raja Gidh" << endl << "ISBN:" << endl << "9789693505146" << endl << "Author:" << endl << "Bano Qudsia" << endl << "has been alloted to you" << endl;
							cout << "Remaining stock of this book is" << endl << count15 - items << endl;
							break;
						}
					}
				}
				else
					cout << "This book is not available in this portion" << endl;

			}
		}

		else if (button == 2)
		{
			cout << "Press the portion number of book you want to return" << endl;
			cin >> r_portion;

			if (r_portion == 1)
			{
				cout << "You selected English Novels and litrature portion:" << endl;
				cout << endl;
				cout << "Enter the isbn number of book you want to return from selected region:" << endl;
				cin >> isbn;

				if (isbn == 7845624578966)
				{
					count1 = 12;
					cout << "Enter the number of book within the stock you want to return" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count1)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}

						else{

							cout << "Book:" << endl << "The Hamlet" << endl << "ISBN:" << endl << "7845624578966" << endl << "Author:" << endl << "W Shakespear" << endl << "has been returned by you" << endl;
							cout << "New stock of this book is" << endl << count1 + items << endl;
							break;
						}
					}

				}


				else if (isbn == 7845624578967)
				{
					count2 = 20;
					cout << "Enter the number of books you want to return" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count2)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Rich Dad Poor Dad" << endl << "ISBN:" << endl << "7845624578967" << endl << "Author:" << endl << "Robert Kiyosaki" << endl << "has been returned to you" << endl;
							cout << "New stock of this book is" << endl << count2 + items << endl;
							break;
						}
					}
				}
				else if (isbn == 9780307388629)
				{
					count3 = 25;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count3)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Beloved" << endl << "ISBN:" << endl << "9780307388629" << endl << "Author:" << endl << " Toni Morrison" << endl << "has been returned by you" << endl;
							cout << "New stock of this book is" << endl << count3 + items << endl;
							break;
						}
					}
				}
				else if (isbn == 9780585229348)
				{
					count4 = 22;
					cout << "Enter the number of books you want to return" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count4)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Heart of Darkness" << endl << "ISBN:" << endl << "9780585229348" << endl << "Author:" << endl << "Joseph Conrad" << endl << "has been returned by you" << endl;
							cout << "New stoke of this book is" << count4 + items << endl;
							break;
						}
					}
				}
				else if (isbn == 9781101089316)
				{
					count5 = 32;
					cout << "Enter the number of books you want to return:" << endl;
					items;
					while (j<3)
					{

						if (items<1 || items>count5)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Emma" << endl << "ISBN:" << endl << "9781101089316" << endl << "Author:" << endl << "Jone Austen" << endl << "has been alloted to you" << endl;
							cout << "New stock of this book is" << count5 + items << endl;
							break;
						}
					}
				}
				else
					cout << "This book is not available in this portion" << endl;
			}

			else if (r_portion == 2)
			{
				cout << "You selected Science portion." << endl;
				cout << endl;
				cout << "Enter the ISBN number of the book you want to return from selected region:" << endl;
				cin >> isbn;
				if (isbn == 9781101667057)
				{
					count6 = 12;
					cout << "Enter the number of book within the stock you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count6)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}

						else{

							cout << "Book:" << endl << "Lives of a cell" << endl << "ISBN:" << endl << "9781101667057" << endl << "Author:" << endl << "Lewis Thomas" << endl << "has been returned by you" << endl;
							cout << "New stock of this book is" << endl << count6 + items << endl;
							break;
						}
					}

				}


				else if (isbn == 9781409092360)
				{
					count7 = 8;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count7)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "A brief history of time" << endl << "ISBN:" << endl << "9781409092360" << endl << "Author:" << endl << "Stephen Hawking" << endl << "has been returned by you" << endl;
							cout << "New stock of this book is" << endl << count7 + items << endl;
							break;
						}
					}
				}
				else if (isbn == 9781780225029)
				{
					count8 = 10;
					cout << "Enter the number of books you want to return" << endl;
					cin >> items;
					while (j<3)
					{

						if (items >= count8)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Double Helix" << endl << "ISBN:" << endl << "9781780225029" << endl << "Author:" << endl << " James D. Watson" << endl << "has been returned by you" << endl;
							cout << "New stock of this book is" << endl << count8 + items << endl;
							break;
						}
					}
				}
				else if (isbn == 9782738177179)
				{
					count9 = 9;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count9)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "The feynman" << endl << "ISBN:" << endl << "9782738177179" << endl << "Author:" << endl << "Richard Feynman" << endl << "has been returned by you" << endl;
							cout << "New stoke of this book is" << count9 - items << endl;
							break;
						}
					}
				}
				else if (isbn == 9783406704222)
				{
					count10 = 14;
					cout << "Enter the number of books you want to get:" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count10)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Silent Spring" << endl << "ISBN:" << endl << "9783406704222" << endl << "Author:" << endl << "Rachel Carson" << endl << "has been returned by you" << endl;
							cout << "New stock of this book is" << endl << count10 + items << endl;
							break;
						}
					}
				}
				else
					cout << "This book is not available in this portion" << endl;


			}
			else if (r_portion == 3)
			{
				cout << "You selected Urdu litrature and Poetry portion." << endl;
				cout << endl;
				cout << "Enter the ISBN number of desired book you want to return from selected region:" << endl;
				cin >> isbn;
				if (isbn == 9789690023414)
				{
					count11 = 12;
					cout << "Enter the number of book within the stock you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count11)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}

						else{

							cout << "Book:" << endl << "Peer e Kamil" << endl << "ISBN:" << endl << "9789690023414" << endl << "Author:" << endl << "Umera Ahmed" << endl << "has been returned you" << endl;
							cout << "New stock of this book is" << endl << count11 + items << endl;
							break;
						}
					}

				}


				else if (isbn == 9789690007926)
				{
					count12 = 18;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count12)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Diwan e Ghalib" << endl << "ISBN:" << endl << "9789690007926" << endl << "Author:" << endl << "Mirza Ghalib" << endl << "has been returned you" << endl;
							cout << "New stock of this book is" << endl << count12 + items << endl;
							break;
						}
					}
				}
				else if (isbn == 9789660983458)
				{
					count13 = 11;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count13)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to return" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Bang e Dra" << endl << "ISBN:" << endl << "9789660983458" << endl << "Author:" << endl << " Allama Iqbal" << endl << "has been returned by you" << endl;
							cout << "New stock of this book is" << endl << count13 + items << endl;
							break;
						}
					}
				}
				else if (isbn == 9788467841145)
				{
					count14 = 9;
					cout << "Enter the number of books you want to get" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count14)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Overcoat" << endl << "ISBN:" << endl << "9788467841145" << endl << "Author:" << endl << "Ghulam Abbas" << endl << "has been returned by you" << endl;
							cout << "Remaining stoke of this book is" << count14 + items << endl;
							break;
						}
					}
				}
				else if (isbn == 9789693505146)
				{
					count15 = 11;
					cout << "Enter the number of books you want to return:" << endl;
					cin >> items;
					while (j<3)
					{

						if (items<1 || items>count15)
						{
							cout << "This number is not eligible enter again" << endl;
							cout << endl;
							cout << "Enter the number of books again you want to get" << endl;
							cin >> items;
							j++;
						}
						else{
							cout << "Book:" << endl << "Raja Gidh" << endl << "ISBN:" << endl << "9789693505146" << endl << "Author:" << endl << "Bano Qudsia" << endl << "has been returned by you" << endl;
							cout << "New stock of this book is" << endl << count15 + items << endl;
							break;
						}
					}
				}
				else
					cout << "This book is not available in this portion" << endl;
			}

		}


	}
	cout << "SESSION HAS EXPIRED RUN AGAIN TO GET RESULTS AGAIN" << endl;
	system("pause");
	return 0;
}








