// Booking class definition

#ifndef __BOOKING_H__
#define __BOOKING_H__

#include <string>
using namespace std;
#include "MovieDatabase.h" // MovieDatabase class definition

class Booking
{
public:
	Booking();
	void setEmail(string theEmail);
	string getEmail();
	void setMovieCode(int theMovieCode);
	int getMovieCode();
	void setDateCode(int theDateCode);
	int getDateCode();
	void setSessionTimeCode(int theSessionTimeCode);
	int getSessionTimeCode();
	void setNumTickets(int theNumTickets[]);
	int getNumTickets(int ticketType);
	void setSeletedSeats(string theSeletedSeats[], int numSeats);
	string getSeletedSeat(int number);
	void displayBooking(MovieDatabase &movieDatabase);

private:
	char email[40];
	int movieCode;
	int dateCode;
	int sessionTimeCode;
	int numTickets[4]; // numTickets[0]: the number of adult tickets,
					   // numTickets[1]: the number of concession tickets,
					   // numTickets[2]: the number of disability tickets,
					   // numTickets[3]: the number of elderly tickets
	char seletedSeats[24][3]; // seleted seats for the user with the specified email
};

#endif