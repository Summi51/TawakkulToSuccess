# cook your dish here
import random
def get_choice():

  choice_player = input("Enter your player choice (rock, paper, scissors): ")
  options = ['rock', 'paper', 'scissors'];
  computer_choice = random.choice(options)
  
  
  choice={"player": choice_player, "computer": computer_choice}
  return choice
 
choice = get_choice()
print(choice)

# Arguments
def check_win(player, computer):
    return [player, computer]
    
choice1 = check_win(choice['player'], choice['computer'] )
print(choice1)