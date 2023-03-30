#include <iostream>
#include <random>

int main() {
  std::cout << "Today you will create your very own FIFA card!\n";
  std::cout << "What is your name?\n";
  std::string name;
  std::getline(std::cin,name);
  //std::cout << name << "\n";
  std::cout << "Cool name, what is your nationality?\n";
  std::string nationality;
  std::getline (std::cin,nationality);
  std::cout << "Awesome! What is your favorite club?\n";
  std::string club;
  int clubPrompt = rand() % 3;
  std::getline (std::cin,club);
  if (clubPrompt == 2) {
    std::cout << "A historic club! Excellent choice!\n";
  }
  else if (clubPrompt == 1) {
    std::cout << "Very interesting choice...\n";
  }
  else {
    std::cout << "Aw man, my rival team!\n";
  }
  int position;
  std::cout << "What position do you play?\n";
  std::cout << "1) Forward\n";
  std::cout << "2) Midfielder\n";
  std::cout << "3) Defender\n";
  std::cout << "4) Goalkeeper\n";
  std::cout << "Answer with 1, 2, 3, or 4.\n";
  std::cin >> position;
  int forwardPos;
  int midfieldPos;
  int defensePos;
  int gkPos;
  if (position == 1) {
    std::cout << "A forward, huh. You must love scoring goals! Or assisting them...\n";
    std::cout << "Are you a Striker, Left Winger, or Right Winger?\n";
    std::cout << "Type 1 for ST, 2 for LW, or 3 for RW.\n";
    std::cin >> forwardPos;
    //std::getline (std::cin,forwardPos);
    if (forwardPos == 1) {
      std::cout << "So... " << name << ", you are a forward who primarily plays as a Striker." << " You are from " << nationality << " and you support " << club << ".\n";
    }
    else if (forwardPos == 2) {
      std::cout << "So... " << name << ", you are a forward who primarily plays as a Left-Winger." << " You are from " << nationality << " and you support " << club << ".\n";
    }
    else {
      std::cout << "So... " << name << ", you are a forward who primarily plays as a Right-Winger." << " You are from " << nationality << " and you support " << club << ".\n";
    }
  }
  else if (position == 2) {
    std::cout << "A midfield maestro! The creator and anchor of the beautiful game.\n";
    std::cout << "Are you an Attacking Midfielder, Defensive Midfielder, Central Midfielder, Right Midfielder, or Left Midfielder?\n";
    std::cout << "Type 1 for CAM, 2 for CDM, 3 for CM, 4 for LM, or 5 for RM.\n";
    std::cin >> midfieldPos;
    if (midfieldPos == 1) {
      std::cout << "So... " << name << ", you are a midfielder who primarily plays as a Central Attacking Midfielder." << " You are from " << nationality << " and you support " << club << ".\n";
    }
    else if (midfieldPos == 2) {
      std::cout << "So... " << name << ", you are a midfielder who primarily plays as a Central Defensive Midfielder." << " You are from " << nationality << " and you support " << club << ".\n";
    }
    else if (midfieldPos == 3) {
      std::cout << "So... " << name << ", you are a midfielder who primarily plays as a Central Midfielder." << " You are from " << nationality << " and you support " << club << ".\n";
    }
    else if (midfieldPos == 4) {
      std::cout << "So... " << name << ", you are a midfielder who primarily plays as a Left Midfielder." << " You are from " << nationality << " and you support " << club << ".\n";
    }
    else {
      std::cout << "So... " << name << ", you are a midfielder who primarily plays as a Right Midfielder." << " You are from " << nationality << " and you support " << club << ".\n";
    }
  }
  else if (position == 3) {
    std::cout << "The tank at the back! Your teammates must always feel relief with you at the back.\n";
    std::cout << "Are you a Center-Back, Left-Back, or Right-Back?\n";
    std::cout << "Type 1 for CB, 2 for LB, or 3 for RB.\n";
    std::cin >> defensePos;
    if (defensePos == 1) {
      std::cout << "So... " << name << ", you are a defender who primarily plays as a Center-Back." << " You are from " << nationality << " and you support " << club << ".\n";
    }
    else if (defensePos == 2) {
      std::cout << "So... " << name << ", you are a defender who primarily plays as a Left-Back." << " You are from " << nationality << " and you support " << club << ".\n";
    }
    else {
      std::cout << "So... " << name << ", you are a defender who primarily plays as a Right-Back." << " You are from " << nationality << " and you support " << club << ".\n";
    }
  }
  else {
    std::cout << "The shotstopper! The unsung hero of the team! Thank you for being so clutch.\n";
    std::cout << "So... " << name << ", you primarily play as a Goalkeeper." << " You are from " << nationality << " and you support " << club << ".\n";
  }

  std::cout << "With that sorted out, it's time to get into your card ratings!\n";
  std::cout << "Rate your pace from 1-99.\n";
  int pace;
  std::cin >> pace;
  if (pace >= 90) {
    std::cout << "Wow, you are a speedster!\n";
  }
  else if (pace > 77 && pace < 90) {
    std::cout << "You're definitely pretty quick.\n";
  }
  else if (pace > 65 && pace <= 77) {
    std::cout << "Not necessarily fast, but not too slow either.\n";
  }
  else {
    std::cout << "Oh man, time to hit the racetracks!\n";
  }
  
  std::cout << "Rate your shooting from 1-99.\n";
  int shooting;
  std::cin >> shooting;
  if (shooting >= 88) {
    std::cout << "A true sniper! Goalkeepers must be terrified of your shot.\n";
  }
  else if (shooting > 80 && shooting < 88) {
    std::cout << "You've got a great shot. You cannot be underestimated.\n";
  }
  else if (shooting > 70 && shooting < 80) {
    std::cout << "You score some goals, but you also miss quite a few chances.\n";
  }
  else {
    std::cout << "You miss too many chances. Get on the field and start shooting!\n";
  }

  std::cout << "Rate your passing from 1-99.\n";
  int passing;
  std::cin >> passing;
  if (passing >= 88) {
    std::cout << "A true meastro! You can create beautiful passes out of nothing. Excellent vision!\n";
  }
  else if (passing > 80 && passing < 88) {
    std::cout << "You've got a great passing range. You have great vision.\n";
  }
  else if (passing > 70 && passing < 80) {
    std::cout << "You hit some nice passes, but you also miss quite a few passes.\n";
  }
  else {
    std::cout << "You miss too many passes. Get on the field and improve your passing range and vision!\n";
  }
  
  std::cout << "Rate your dribbling from 1-99.\n";
  int dribbling;
  std::cin >> dribbling;
  if (dribbling >= 88) {
    std::cout << "The Next Messi?! You are easily capable of dribbling past numerous players on the pitch!\n";
  }
  else if (dribbling > 80 && dribbling < 88) {
    std::cout << "You've got great dribbling. You can beat your man with relative ease.\n";
  }
  else if (dribbling > 70 && dribbling < 80) {
    std::cout << "You have some nice dribbles, but you lose the ball in 1v1 situations too often.\n";
  }
  else {
    std::cout << "You lose the ball too much! Get on the field and improve your dribbling!\n";
  }

  std::cout << "Rate your defending from 1-99.\n";
  int defending;
  std::cin >> defending;
  if (defending >= 88) {
    std::cout << "You are an absolute rock at the back! Nothing gets past you!\n";
  }
  else if (defending > 80 && defending < 88) {
    std::cout << "You've got great defending. You control your opponents pretty well.\n";
  }
  else if (defending > 70 && defending < 80) {
    std::cout << "You pull off some nice tackles, but you let the attackers slip past you sometimes.\n";
  }
  else {
    std::cout << "Attackers get past you too easily. You need to get on the training pitch and practice defending in 1v1 situations.\n";
  }

  std::cout << "Rate your physicality from 1-99\n";
  int physicality;
  std::cin >> physicality;
  if (physicality >= 88) {
    std::cout << "You are a tank! You are very strong and possess killer stamina.\n";
  }
  else if (physicality > 80 && physicality < 88) {
    std::cout << "You've got great physicality. You are quite strong and can comfortably run throughout the whole match.\n";
  }
  else if (physicality > 70 && physicality < 80) {
    std::cout << "You are decently strong, but typically tire out by the 70th minute in a game.\n";
  }
  else {
    std::cout << "You are not strong, and typically tire out by half-time in a game. Time to hit the gym!\n";
  }

  int flairTraits;
  int forFlair;
  int midFlair;
  int defFlair;
  int gkFlair;
  int flairContinue;
  std::cout << "Would you like to add flair traits?\n";
  std::cout << "Type 1 if YES. Type 2 if NO.\n";
  std::cin >> flairTraits;
  if (flairTraits == 1) {
    for (int flair = 1; flair < 4; flair++) {
    if (position == 1) {
      std::cout << "Choose 1 of the following flair traits\n";
      std::cout << "1) Finesse Shot.\n";
      std::cout << "2) Power Header.\n";
      std::cout << "3) Bicycle Kicks.\n";
      std::cout << "4) Speed Dribbler.\n";
      std::cout << "5) Technical Dribbler.\n";
      std::cout << "Type 1, 2, 3, 4, or 5 to make your choice.\n";
      std::cin >> forFlair;
    }
    else if (position == 2) {
      std::cout << "Choose 1 of the following flair traits\n";
      std::cout << "1) Fancy Passes.\n";
      std::cout << "2) Set Piece Specialist.\n";
      std::cout << "3) Technical Dribbler.\n";
      std::cout << "4) Long Passer.\n";
      std::cout << "5) Playmaker.\n";
      std::cout << "Type 1, 2, 3, 4, or 5 to make your choice.\n";
      std::cin >> forFlair;
    }
    else if (position == 3) {
      std::cout << "Choose 1 of the following flair traits\n";
      std::cout << "1) Power Header.\n";
      std::cout << "2) Leadership.\n";
      std::cout << "3) Dives Into Tackles.\n";
      std::cout << "4) Long Passer.\n";
      std::cout << "5) Technical Dribbler.\n";
      std::cout << "Type 1, 2, 3, 4, or 5 to make your choice.\n";
      std::cin >> forFlair;
    }
    else if (position == 4) {
      std::cout << "Choose 1 of the following flair traits\n";
      std::cout << "1) Rushes Out of Goal.\n";
      std::cout << "2) Comes for Crosses.\n";
      std::cout << "3) Saves with Foot.\n";
      std::cout << "4) Leadership.\n";
      std::cout << "5) Long Thrower.\n";
      std::cout << "Type 1, 2, 3, 4, or 5 to make your choice.\n";
      std::cin >> forFlair;
    }
    std::cout << "Would you like to choose another flair trait?\n";
    std::cout << "Type 1 if YES. Type 2 if NO.\n";
    std::cin >> flairContinue;
    if (flairContinue == 1) {
      continue;
    }
    else {
      std::cout << "Okay, we will move on to your card rating.\n";
      break;
    }
    if (flair == 1) {
      std::cout << "Nice choice!\n";
    }
    else {
      std::cout << "Nice choices!\n";
    }
  }
  }
  else {
    std::cout << "Okay, we will move on to your card rating.\n";
  }
  
  int statCalc = 0;

  if (forwardPos == 1) {
    statCalc += (pace * 0.2) + (shooting * 0.3) + (passing * 0.125) + (dribbling * 0.2) + (defending * 0.025) + (physicality * 0.15);
  }
  else if (forwardPos == 2 || forwardPos == 3) {
    statCalc += (pace * 0.275) + (shooting * 0.15) + (passing * 0.2) + (dribbling * 0.275) + (defending * 0.05) + (physicality * 0.05);
  }
  else if (midfieldPos == 1) {
    statCalc += (pace * 0.15) + (shooting * 0.15) + (passing * 0.275) + (dribbling * 0.275) + (defending * 0.075) + (physicality * 0.075);
  }
  else if (midfieldPos == 2) {
    statCalc += (pace * 0.1) + (shooting * 0.05) + (passing * 0.175) + (dribbling * 0.125) + (defending * 0.275) + (physicality * 0.275);
  }
  else if (midfieldPos == 3) {
    statCalc += (pace * 0.1) + (shooting * 0.1) + (passing * 0.25) + (dribbling * 0.25) + (defending * 0.15) + (physicality * 0.15);
  }
  else if (midfieldPos == 4 || midfieldPos == 5) {
    statCalc += (pace * 0.2) + (shooting * 0.1) + (passing * 0.25) + (dribbling * 0.25) + (defending * 0.1) + (physicality * 0.1);
  }
  else if (defensePos == 1) {
    statCalc += (pace * 0.15) + (shooting * 0.025) + (passing * 0.1) + (dribbling * 0.1) + (defending * 0.35) + (physicality * 0.275);
  }
  else if (defensePos == 2 || defensePos == 3) {
    statCalc += (pace * 0.2) + (shooting * 0.05) + (passing * 0.175) + (dribbling * 0.175) + (defending * 0.225) + (physicality * 0.175);
  }
  else if (position == 4) {
    statCalc += (pace * 0.05) + (shooting * 0.075) + (passing * 0.075) + (dribbling * 0.05) + (defending * 0.65) + (physicality * 0.1);
  }

  if (statCalc >= 90) {
    std::cout << "Congratulations, you are one of the best players in the world.\n";
    std::cout << "You are the STAR player of " << club << ".\n";
    std::cout << "Your FIFA card rating is " << statCalc << ".\n";
  }
  else if (statCalc >= 80 && statCalc < 90) {
    std::cout << "You are a top player who regularly starts for " << club << ".\n";
    std::cout << "Your FIFA card rating is " << statCalc << ".\n"; 
  }
  else if (statCalc >= 70 && statCalc < 80) {
    std::cout << "You have the fundamentals to become a top player in the future for " << club << ".\n";
    std::cout << "Your FIFA card rating is " << statCalc << ".\n";
  }
  else {
    std::cout << "You've got a lot of work to do to play for your dream club: " << club << ".\n";
    std::cout << "NEVER GIVE UP!\n";
    std::cout << "Your FIFA card rating is " << statCalc << ".\n";
  }
  
}
