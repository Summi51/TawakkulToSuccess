import random

def get_choice():

    choice_player = input("Enter your player choice (rock, paper, scissors): ")
    options = ['rock', 'paper', 'scissors']
    computer_choice = random.choice(options)

    choice = {"player": choice_player, "computer": computer_choice}
    return choice


choice = get_choice()
print(choice)


# Arguments
def check_win(player, computer):

    print(f"You chose {player}, Computer chose {computer}")

    # if statement tie
    if player == computer:
        return "Tie!"

    # player = rock
    elif player == "rock":

        if computer == "paper":
            return "Computer wins! Paper covers Rock."

        elif computer == "scissors":
            return "Player wins! Rock destroys Scissors."

    # player = paper
    elif player == "paper":

        if computer == "scissors":
            return "Computer wins! Scissors cut Paper."

        elif computer == "rock":
            return "Player wins! Paper covers Rock."

    # player = scissors
    elif player == "scissors":

        if computer == "rock":
            return "Computer wins! Rock destroys Scissors."

        elif computer == "paper":
            return "Player wins! Scissors cut Paper."


result = check_win(choice["player"], choice["computer"])
print(result)