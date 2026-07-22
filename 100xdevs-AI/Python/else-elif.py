age = 1
if age >=18:
    print("Adult")
elif age > 12:
    print("Teenager")
elif age > 1:
    print("child")
else:
    print("Baby")

    # or 


    def get_game(player , computer):
    
    if player == computer:
        print("Tie!")
    elif player == 'rock' and computer == 'paper':
        print("computer win! paper cover rock")
    elif player == 'scissors' and computer == 'paper':
        print("player Win! scissors cut paper")
get_game('scissors', 'paper')