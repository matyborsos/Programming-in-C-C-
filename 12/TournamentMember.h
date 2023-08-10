#include <string>

class TournamentMember {
    private:
        const char *FstName;
        const char *LastName;
        const char *DateOfBirth;
        static string location;
        string role;
        bool present;
    public:
        // constructors and destructor
        TournamentMember(char const *fstN, char const *lstN, char const *DOB,
                         string &Location, string Role, bool Present);
        TournamentMember();
        TournamentMember(const TournamentMember& Member);
        ~TournamentMember();

        // setter methods
        inline void setFstName(const char *newFstName);
        inline void setLastName(const char *newLastName);
        inline void setDateOfBirth(const char *newDateOfBirth);
        inline static void setLocation(string &newLocation);
        inline void setRole(string newrole);
        inline void setPresent(bool newpresent);

        // getter methods
        inline const char* getFstName() const;
        inline const char* getLastName() const;
        inline const char* getDateOfBirth() const;
        inline string getLocation() const;
        inline string getRole() const;
        inline bool getPresent() const;

        // service methods
        void print();
        static void changeLocation(const string& changedLocation);
};

class Player : public TournamentMember {
    private:
        int Number;
        string Position;
        int GoalsScored;
        string DominantFoot;
    public:
        // constructors and destructor
        Player(char const *FstN, char const *LastN, char const *DOB,
               string &Location, string Role, bool Present, int Number,
               string Position, int GoalsScored, string DomFoot);
        Player();
        Player(const Player& OtherPlayer);
        ~Player();

        // setter methods
        void setNumber(int newnumber) {Number = newnumber;}
        void setPosition(string newposition) {Position = newposition;}
        void setDominantFoot(string newdomfoot) {DominantFoot = newdomfoot;}

        // getter methods
        inline int getNumber() const {return Number;}
        inline string getPosition() const {return Position;}
        inline int getGoalsScored() const {return GoalsScored;}
        inline string getDominantFoot() const {return DominantFoot;}

        // service methods
        void printPlayer() const;
        void incrementGoalsScored();
};