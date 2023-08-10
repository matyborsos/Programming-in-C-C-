#include <iostream>
#include "TournamentMember.h"

using namespace std;

string TournamentMember::location = "Some Location";

// parametric constructor 
TournamentMember::TournamentMember(char const *fstN, char const *lastN,
                                   char const *DOB, string &Location,
                                   string Role, bool Present) {
    cout << "Parametric Constructor called!\n";
    (*this).FstName = fstN;
    (*this).LastName = lastN;
    (*this).DateOfBirth = DOB;
    (*this).setLocation(Location);
    (*this).role = Role;
    (*this).present = Present;
}

// empty constructor
TournamentMember::TournamentMember() {
    cout << "Empty Constructor called!\n";
    (*this).FstName = "John";
    (*this).LastName = "Doe";
    (*this).DateOfBirth = "0000-00-00";
    (*this).role = "Participant";
    (*this).present = true;
}

// copy constructor
TournamentMember::TournamentMember(const TournamentMember& Member) {
    cout << "Copy Constructor called!\n";
    (*this).FstName = Member.FstName;
    (*this).LastName = Member.LastName;
    (*this).DateOfBirth = Member.DateOfBirth;
    (*this).setLocation(Member.location);
    (*this).role = Member.role;
    (*this).present = Member.present;
}

// destructor
TournamentMember::~TournamentMember() {
    cout << "Destructor called!\n";
}

// setter methods
inline void TournamentMember::setFstName(char const *newFstName) {
    FstName = newFstName;
}

inline void TournamentMember::setLastName(char const *newLastName) {
    LastName = newLastName;
}   

inline void TournamentMember::setDateOfBirth(char const *newDateOfBirth) {
    DateOfBirth = newDateOfBirth;
}

inline void TournamentMember::setLocation(string &newLocation) {
    location = newLocation;
}

inline void TournamentMember::setRole(string newrole) {
    role = newrole;
}

inline void TournamentMember::setPresent(bool newpresent) {
    present = newpresent;
}

// getter methods 
inline char const* TournamentMember::getFstName() const {
    return FstName;
}

inline char const* TournamentMember::getLastName() const {
    return LastName;
}

inline char const* TournamentMember::getDateOfBirth() const {
    return DateOfBirth;
}

inline string TournamentMember::getLocation() const {
    return location;
}

inline string TournamentMember::getRole() const {
    return role;
}

inline bool TournamentMember::getPresent() const {
    return present;
}

// service methods
// print method used to print the information of a tournament member 
void TournamentMember::print() {
    cout << "First Name: " << getFstName()
              << "\nLast Name: "<< getLastName()
              << "\nDate of Birth: " << getDateOfBirth()
              << "\nLocation: " << getLocation()
              << "\nRole: " << getRole()
              << "\nPresent: " << getPresent() << endl;
}

// method that changes the location
void TournamentMember::changeLocation(const string& changedLocation) {
    cout << "Location changed to " << changedLocation << endl;
    location = changedLocation;
}

// parametric constructor
Player::Player(char const *FstN, char const *LastN, char const *DOB,
               string &Location, string Role, bool Present,
               int Number, string Position, int GoalsScored, 
               string DominantFoot) : TournamentMember(FstN, LastN, 
               DOB, Location, "Player", Present) {
    cout << "Player Parametric Constructor called!\n";
    (*this).Number = Number;
    (*this).Position = Position;
    (*this).GoalsScored = GoalsScored;
    (*this).DominantFoot = DominantFoot;
}

// empty constructor
Player::Player() : TournamentMember() {
    cout << "Player Empty Constructor called!\n";
    (*this).setRole("Player");
    (*this).Number = 0;
    (*this).Position = "Some Position";
    (*this).GoalsScored = 0;
    (*this).DominantFoot = "Some Foot";
}

// copy constructor
Player::Player(const Player& OtherPlayer) : TournamentMember(OtherPlayer) {
    cout << "Player Copy Constructor called!\n";
    (*this).Number = OtherPlayer.Number;
    (*this).Position = OtherPlayer.Position;
    (*this).GoalsScored = OtherPlayer.GoalsScored;
    (*this).DominantFoot = OtherPlayer.DominantFoot;
}

// destructor
Player::~Player() {
    cout << "Player Destructor called!\n";
}

// method to print all the information of a player on the screen
void Player::printPlayer() const {
    cout << "Player's Number: " << getNumber()
              << "\nPlayer's Position: " << getPosition()
              << "\nGoals Scored: " << getGoalsScored()
              << "\nDominant Foot: " << getDominantFoot() << endl;
}

// method to increments the number of goals scored by a player
void Player::incrementGoalsScored() {
    int score = getGoalsScored();
    score++;
    (*this).GoalsScored = score;
}