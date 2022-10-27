
#include <iostream> 
int main(){
  srand(time(NULL));
  int computer = rand() % 3 + 1; 
  int user = 0; 
  
  std::cout<<"====================\n";
  std::cout<<"rock paper scissors!\n";
  std::cout<<"====================\n";

  std::cout<<"1) Rock\n"; 
  std::cout<<"2) Paper\n";
  std::cout<<"3)Scissor\n"; 

  std::cout<<"shoot!(Please enter the number only)"; 
  std::cin>>user; 

  if(user == 1 && computer == 3){
    std::cout<<"Your rock beats scissor! You win!\n";
  } else if(user == 1 && computer == 2 ) {
    std::cout<<"Your rock loses to paper! You lose\n";
  } else if (user == 1 && computer == 1){
    std::cout<<"The other party has rock too! It's a tie!\n";
  } else if(user == 2 && computer == 3 ) {
    std::cout<<"Your paper loses to scissor! You lose\n";
  } else if(user == 2 && computer == 2 ) {
    std::cout<<"The other party has paper too! It's a tie!\n";
  } else if(user == 2 && computer == 1 ) {
    std::cout<<"Your paper beats rock! You win\n";
  } else if(user == 3 && computer == 1 ) {
    std::cout<<"Your scissor loses to rock! You lose\n";
  } else if(user == 3 && computer == 2 ) {
    std::cout<<"Your scissor beats paper! You win\n";
  } else if(user == 3 && computer == 3 ) {
    std::cout<<"The other party has scissor too! It's a tie!\n";
  }

  return 0;
}
