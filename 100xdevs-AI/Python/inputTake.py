# cook your dish here
def get_choice():

  choice_player = input("Enter your player choice: (rock, paper scissors)");
  computer_choice = input("Enter your computer choise: (rock, paper scissors)");
  
  choice={"player": choice_player, "computer": computer_choice}
  return choice
 
  
choice = get_choice()
print(choice)
