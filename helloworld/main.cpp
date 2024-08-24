/*these are one of the packages in the standard library, it stand for
input output stream; it allows you to print on the screen and get
inputs*/
#include <iostream>
#include <cmath> // use math functions

using namespace std;

/*
-int in front says that the output of the function is an integer
-std stands for standard library
-cout is a function from the std that allows you to print on screen
- << is the assign variable
- returning 0 means that the code executed properly, any other vlaue would be an error
- Array notation lst[] = {1,2,3}; stat with index = 0; can tell the list how long you want it to be
- for loop notation: for(int = 1; i <=5; i++)
*/

bool isMale(string gender) { // void means wont rturn anything
    if(gender == "Male"){
        return true;
    }
    else
    {
        return false;
    }
}

string getDayOfWeek(int dayNum) {
    string dayName;
    
    switch(dayNum) { // if else string of statements
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default: // if none of the cases are true
            dayName = "invalid Day Name";
    }

    return dayName;
}

int power(int baseNum, int powNum) {
    int result = 1;
    for(int i = 0; i < powNum; i++) {
        result *= baseNum;
    }

    return result;
}

/* Pointers
- Another type of data like int and floats; it is the memory addresses
- Use & to get the memory address i.e. the pointer
- Derefercing: use the asteriks to get rid of the address and get the value instead.
*/

void pnter() {
    int age = 19;
    int *pAge = &age; // storing the point in *pAge as an int, data type is always the same.
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike"; // All of these are stored in a memory address of the comptuer
    string *pName = &name;

    cout << *&age; // tells c++ to print out memory address which is the pointer
};

/* Classes and Objects
- Represent real things that cannot be represented as anything c++ can offer such an int.
- Class is the specification of the blueprint
- Object is the instnace of that class.
*/

class Book {
    //Give attributes to describe the book
    public: 
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
         
};

/* Constructor functions
- Its the init function from python. 
- The function runs when you create an object from the class.
- assign the self.title to a variable. 
*/

/* Object functions
- 
-
*/

class Student {
    public: 
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

    bool hasHonors() {
        if(gpa >= 3.5) {
            return true;
        }
        return false;
    }
};

/* Getters and setters
- Control access to different attributes in classes
- For example if the rating attribute gets "Dog" instead of "M", how can we tell its incorrect?

*/

class Movie {
    private: // only code thats inside the movie can access the attribute.
    string rating;
    public: // Any code outside of this code can access this class.
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating) {
            if(aRating == "G" || aRating == "PG" || aRating == "M") {
                rating = aRating;
            } else {
                aRating = "NR";
            }     
        }

        string getRating(){
            return rating;
        }
            
};


int main() {
    Movie avengers("Avengers", "Joss Whedon", "M");
    cout << avengers.getRating();
    return 0;
}


