// CSC 134
// M6T1
// Elizabeth Battenfield
// 4/29/2021

#include <iostream>
#include <string>
using namespace std;

class Restaurant {                          // Info about a restaurant
   public:
      void SetName(string restaurantName);  // Sets the restaurant's name
      void SetRating(int userRating);       // Sets the rating (1-5, with 5 best)
      void Print();                         // Prints name and rating on one line

   private:
      string name;
      int rating;
};

// Sets the restaurant's name
void Restaurant::SetName(string restaurantName) {
   name = restaurantName;
}

// Sets the rating (1-5, with 5 best)
void Restaurant::SetRating(int userRating) {
   rating = userRating;
}

// Prints name and rating on one line
void Restaurant::Print() {
   cout << name << " -- " << rating << endl;
}

int main() {
   Restaurant favLunchPlace;
   Restaurant favDinnerPlace;
   Restaurant favBreakfastPlace;

   favLunchPlace.SetName("CookOut");
   favLunchPlace.SetRating(4);

   favDinnerPlace.SetName("CrackerBarrel");
   favDinnerPlace.SetRating(3);

   favBreakfastPlace.SetName("Burgerking");
   favBreakfastPlace.SetRating(4);

   cout << "My favorite restaurants: " << endl;
   favLunchPlace.Print();
   favDinnerPlace.Print();
   favBreakfastPlace.Print();
   return 0;
}
