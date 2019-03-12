//Program Name: Final project
//Purpose: To create a text based game.
//Author: Joshua Taylor
//Date Last Modified:3/06/19


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;



//game over function
void gameOver()
{
  cout<< endl;
  cout<< "*********"<< endl;
  cout<< "Game Over"<< endl;
  cout<< "*********"<< endl;
  cout<< endl;
}


//start main function
int main()
{

//Declaring random number generator and "dice roller" int
int diceroll;
srand(time(0));


//Intro and welcome
    system ("cls");
    cout<< "\n\n*************************"<< endl;
    cout<< "    Insert Title Here"    << endl;
    cout<< "*************************"<< endl;
    cout<<"\n\n";
    cout<< "In this adventure you will face many hard choices."<< endl;
    cout<< "Play the game multiple times trying all the different choices."<<endl;
    cout<< "\n\n";
    system ("pause");
    cout<< endl;
    cout<< endl;

// Scene 1
int firstScene;
int firstSceneChoice;

    system ("cls");
    cout<< "\nYou wake in your bed to the sound of hundreds of screams. The sounds of weapons clashing thunder through the air."<< endl;
    cout<< "\n\n";
    system ("pause");
    cout<< endl;

//menu and validating input choice
    do {
    cout<< "\nQuickly, what should you do?!"<< endl;
    cout<< "1. Run to the window to see what is happening"<< endl;
    cout<< "2. Run out the door to see what is happening" << endl;
    cout<< "3. Stay in your bed and hope noone finds you" << endl;
    cout<< endl;
    cout<< "What is your choice? (1,2,3)"<< endl;
    cout<< endl;

    cin>> firstSceneChoice;

    cout<< "\nYou chose option "<< firstSceneChoice<< " ."<< endl;
    cout<< endl;
    system ("pause");
  } while(firstSceneChoice>3 || firstSceneChoice<1);

//Scene 1 results/consequences
    switch (firstSceneChoice)
        {
          case 1: system ("cls");
                  cout<< "You run to the window to see many bloody skeleton soldiers fighting with the kingdom's knights and citizens"<<endl;
                  cout<< "A skeleton sees you through the window"<< endl;
                  cout<< "He draws his bow and launches an arrow at you"<< endl;
                  cout<< "You are too slow to avoid the arrow."<< endl;
                  cout<< "The arrow pierces your forehead and you drop to the floor lifeless."<< endl;
                  cout<< "You die without ever joining the battle"<< endl;
                  gameOver();
                  return 0;
                  break;

          case 2: system ("cls");
                  cout<< "\nYou run out the door and immediately run into a bloody skeleton with a sword.\nHe stares at you with his empty eye sockets.\nHe raises his bloody sword to kill you!!\n\n"<< endl;
                  system ("pause");
                  break;

          case 3: system ("cls");
                  cout<< endl;
                  cout<< "You stay in your bed with the covers over your head. You hear your door come crashing in." << endl;
                  cout<< "You close your eyes in terror. You proceed to wet the bed in fear."<< endl;
                  cout<< "A sharp pain pierces your chest. A sword has been thrust through your heart. You die a coward."<< endl;
                  gameOver();
                  return 0;
                  break;

          }

// Scene 2
int secondSceneChoice;

      do
      {
      cout<< "\nHis sword is coming down on you!! What do you do?!";
      cout<< "\n\n";
      cout<< "\n1. Catch his hands to stop the sword \n2. Try to catch the sword in your hands to stop it \n3. Punch him in the face"<< endl;
      cout<< "\nWhat is your choice? (1,2,3)"<< endl;
      cout<< "\n";

      cin>> secondSceneChoice;
      } while(secondSceneChoice>3 || secondSceneChoice<1);

      cout<< "\nYou have selected "<< secondSceneChoice<<"."<< endl;
      cout<< "\nRoll the dice to see if you succeed in your choice!!"<< endl;
      cout<<"\n\n"<<endl;

      system ("pause");

      system ("cls");
//diceroll
      diceroll= (rand() % 10) + 1;

// Scene 2 options/consequences
      if (diceroll>=4)
      {
        system ("cls");
        cout<< "\nYou rolled a(n) "<< diceroll<< "."<< endl;
        cout<< endl;
        cout<< "Your roll succeeds.\n\nYou stop the skeleton from slicing you in half and avoid death.\n\nYou manage to get the sword away from him and in a mighty swing you decapitate him.\n"<< endl;
        system ("pause");
      }
      if (diceroll<4)
      {
        system ("cls");
        cout<< "You rolled a(n) "<< diceroll<< "."<< endl;
        cout<< endl;
        cout<< "You have failed. The skeleton's blade slices into your skull. Blood runs down your face and your vision goes black.\n\n"<<endl;
        gameOver();
        return 0;
      }

//Scene 3

int thirdSceneChoice;

      cout<< "You hear a commanding shout in the distance.\nIt is your king leading his knights in one last push against the swarm of skeletons.\nThe swarm of skeletons is immmense, the king will most certainly fail.\n"<< endl;
      cout<< "\n"<<endl;
      cout<< "\n1. You run to your king to join the battle.\n2. You stand your ground to defend your home.\n3. You see a pathway to safety leading away from the city. Other citizens are escaping through it."<< endl;
      cout<< "\nWhat is your choice? (1,2,3)"<< endl;
      cout<< "\n";
        cin>> thirdSceneChoice;

        cout<< "\nYou have selected "<< thirdSceneChoice<<"."<< endl;
        cout<< "\nRoll the dice to see if you succeed in your choice!!"<< endl;
        cout<<"\n\n"<<endl;

        system ("pause");

        diceroll= (rand() % 10) + 1;

//Scene 3 options/consequences

        if (thirdSceneChoice<= 2 && diceroll>=4)
        {
          system ("cls");
          cout<< "\nYou rolled a(n) "<< diceroll<< "."<< endl;
          cout<< endl;
          cout<< "Your roll succeeds.\n\n.\n\n KING OPTION\n"<< endl;
          system ("pause");
        }
        if (thirdSceneChoice==3 && diceroll>=4)
        {
          system ("cls");
          cout<< "\nYou rolled a(n) "<< diceroll<< "."<< endl;
          cout<< "Your roll succeeds.\n\n.\n\n You escape the city with the woman and children. You all travel for days to the next city. When you arrive you find it swarming with skeletons. Your are all massacred. You die a coward with no honor.\n"<< endl;
          cout<< endl;
          gameOver();
          return 0;
        }
        else
        {
          system ("cls");
          cout<< "You rolled a(n) "<< diceroll<< "."<< endl;
          cout<< endl;
          cout<< "You have failed."<<endl;
          gameOver();
          return 0;
        }

//Scene 4





    return 0;

}
