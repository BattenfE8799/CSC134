// CSC 432
// M3LAB2
// Elizabeth Battenfield
// 2/22/2021

#include <iostream>

using namespace std;

// declaring functions
void chooseSlope();

void chooseCliff();

void chooseSwim();

void chooseGoAround();

void chooseNatural();

void chooseOk();

void chooseNotVeryGood();

void chooseJump();

void chooseRapel();

void chooseLive();

void chooseNotLive();



int main()
{
    // declare variables
    int choiceOne;
    int choiceTwo;
    int choiceThree;
    int live;
    int notLive;

    // declare situation for game
    cout << "       ___           " << endl;
    cout << "      |   \\          " << endl;
    cout << "      |    \\         " << endl;
    cout << "      |     \\        " << endl;
    cout << "      |      \\       " << endl;
    cout << "      |       \\      " << endl;
    cout << "      |        \\     " << endl;
    cout << "      |         \\    " << endl;
    cout << "      |          \\   " << endl << endl << endl;

    cout << "You are standing at the top of a mountain." << endl;
    cout << "On one side there is a sheer cliff all the way down," << endl;
    cout << "the other side is a slope covered in trees." << endl << endl;

    // give them their first choice
    cout << "Which way do you go? cliff (1) or slope (2)" << endl;
    cin >> choiceOne;

    // what path they chose
    if (choiceOne == 1) {
        chooseCliff();
    }
    else if (choiceOne == 2) {
        chooseSlope();
    }
    else {
        cout << "That is not a valid choice. Try again." << endl << endl;
        main();
    }


}

void chooseSlope(){ // path chosen when they choose slope
    int choiceTwo;

    cout << "You start climbing down the slope." << endl;
    cout << "          %%%  \\     " << endl;
    cout << "          %%%%  \\    " << endl;
    cout << "         %%%%    \\   " << endl;
    cout << "          %%%%    \\  " << endl << endl << endl;

    cout << "You come to a river it looks shallow," << endl << endl;
    cout << "do you swim across (1) or find a way around (2)?" << endl;
    cin >> choiceTwo;

    if (choiceTwo == 1) {
        chooseSwim();
    }
    else if (choiceTwo == 2) {
        chooseGoAround();
    }
    else {
        cout << "That is not a valid choice. Try again." << endl << endl;
        chooseSlope();
    }
}
void chooseCliff() {    // path chosen when they choose cliff
    int choiceTwo;
    cout << "You decide to try the cliff, hoping for a quicker way down." << endl << endl;
    cout << "       ___          " << endl;
    cout << "      |             " << endl;
    cout << "      |             " << endl;
    cout << "      |             " << endl;
    cout << "      |             " << endl;
    cout << "      |             " << endl << endl << endl;
    cout << "How do you go down it?" << endl;
    cout << "Do you rappel down it like a spy on a building? (1)" << endl;
    cout << "   or do you jump off hoping to grow wings? (2)" << endl << endl;
    cin >> choiceTwo;

    if (choiceTwo == 1) {
        chooseRapel();
    }
    else if (choiceTwo == 2) {
        chooseJump();
    }
    else {
        cout << "That is not a valid choice. Try again." << endl << endl;
        chooseCliff();

    }
}

void chooseSwim(){      // path chosen when they choose slope and swim
    int choiceThree;

    cout << "You decide to try and swim across the river." << endl << endl;
    cout << "          %%%        " << endl;
    cout << "          %%%%       " << endl;
    cout << "         %%%%        " << endl;
    cout << "          %%%%       " << endl << endl << endl;

    cout << "How good of a swimmer are you?" << endl;
    cout << "I swim like a fish! (1)" << endl;
    cout << "  I swim okay. (2)" << endl;
    cout << "I sink, not float. (3)" << endl << endl;
    cin >> choiceThree;
    if (choiceThree == 1) {
        chooseNatural();
    }
    else if (choiceThree == 2) {
        chooseOk();
    }
    else if (choiceThree == 3) {
        chooseNotVeryGood();
    }
    else {
        cout << "That is not a valid choice. Try again." << endl << endl;
        chooseSwim();
}
}
void chooseGoAround(){      // path chosen when they choose slope and go around
    cout << "You chose to find a way around the river." << endl << endl;
    cout << "   %%%        " << endl;
    cout << "   %%%%       " << endl;
    cout << "  %%%%        " << endl;
    cout << " %%%%         " << endl << endl << endl;

    cout << "You get lost and get eaten by a dragon." << endl;
    chooseNotLive();

}

void chooseNatural(){       //path chosen when they choose slope, swim, and natural
    cout << "   %%%%%%%%%%       " << endl;
    cout << "   %%%%%%%%%%       " << endl;
    cout << "   %%%%%%%%%%       " << endl;
    cout << "   %%%%%%%%%%       " << endl << endl << endl;
    cout << "You successfully cross the river!" << endl;
    cout << "And win a swimming contest you didn't enter!" << endl;
    chooseLive();
}

void chooseOk(){        // path chosen when they choose slope, swim, and ok
    cout << "   %%%%%%%%%%       " << endl;
    cout << "   %%%%%%%%%%       " << endl;
    cout << "   %%%%%%%%%%       " << endl;
    cout << "   %%%%%%%%%%       " << endl << endl << endl;
    cout << "You make it to the other side and off the mountain!" << endl;
    chooseLive();

}


void chooseNotVeryGood(){   //path chosen when they choose slope, swim, and not very good.
    cout << "   %%%%%%%%%%       " << endl;
    cout << "   %%%%%%%%%%       " << endl;
    cout << "   %%%%%%%%%%       " << endl;
    cout << "   %%%%%%%%%%       " << endl << endl << endl;
    cout << "You don't make it across the river." << endl;
    cout << "You should have chosen a different path!" << endl;
    chooseNotLive();
}

void chooseJump(){     //path chosen when they choose cliff, jump
    cout << "You jump off the cliff, hoping you grow wings." << endl;
    cout << "                |             " << endl;
    cout << "                |             " << endl;
    cout << "                |             " << endl;
    cout << "                |             " << endl;
    cout << "                |             " << endl << endl << endl;
    cout << "As you descend to the bottom, a giant pair of chicken wings" << endl;
    cout << "grow out of your back and you are able to slow your fall enough" << endl;
    cout << "to land safely at the bottom of the mountain." << endl;
    chooseLive();

}

void chooseRapel(){     //path chosen when they choose cliff, rappel
    cout << "You rappel down the cliff." << endl;
    cout << "                |             " << endl;
    cout << "                |             " << endl;
    cout << "                |             " << endl;
    cout << "                |             " << endl;
    cout << "                |             " << endl << endl << endl;
    cout << "As you get midway, you come across a large cave opening." << endl;
    cout << "You peer in, and large eyes peer out at you." << endl;
    cout << "The large dragon's head snaps out and has a snack." << endl;
    chooseNotLive();
}
void chooseNotLive() {      //path chosen when they choose a path that makes them lose
    cout << endl << endl;
    cout << "You lost. Try again.";
}

void chooseLive(){      //path chosen when they choose a path that leads to them winning.
    cout << endl << endl;
    cout << "You won!";
}



// instead of door 1 and door 2 give other choices with other consequences
// ie a combat game where the user types fight or flight
