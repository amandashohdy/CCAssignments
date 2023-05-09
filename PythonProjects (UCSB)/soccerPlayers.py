def pickOption() :
    option = input('''\nMENU
a - Add player
d - Remove player
u - Update player rating
r - Output players above a rating
o - Output roster
q - Quit

Choose an option:\n''')
    return option



'''First five players'''
player1 = int(input("Enter player 1's jersey number:\n"))
rating1 = int(input("Enter player 1's rating:\n"))
player2 = int(input("\nEnter player 2's jersey number:\n"))
rating2 = int(input("Enter player 2's rating:\n"))
player3 = int(input("\nEnter player 3's jersey number:\n"))
rating3 = int(input("Enter player 3's rating:\n"))
player4 = int(input("\nEnter player 4's jersey number:\n"))
rating4 = int(input("Enter player 4's rating:\n"))
player5 = int(input("\nEnter player 5's jersey number:\n"))
rating5 = int(input("Enter player 5's rating:\n"))



'''Creating the roster'''
unsortedRoster = {player1 : rating1,
          player2 : rating2,
          player3 : rating3,
          player4 : rating4,
          player5 : rating5}
roster = dict()
rosterList = sorted(unsortedRoster)
for item in rosterList :
    roster[item] = unsortedRoster[item]



'''Printing the Roster'''
print("\nROSTER\n")
for key in rosterList :
    print(f"Jersey number: {key}, Rating: {roster[key]}")



'''Implemeting menu functions'''
option = pickOption()

while option != 'q' :
    
    '''Add Player'''
    if option == 'a' :
        newPlayer = int(input("\nEnter a new player's jersey number:\n"))
        newRating = int(input("Enter the player's rating:\n"))
        roster[newPlayer] = newRating
        option = pickOption()

    '''Remove Player'''
    if option == 'd' :
        player = int(input("\nEnter a jersey number:\n"))
        if player in roster :
            del roster[player]
        option = pickOption()

    '''Update Player Rating'''
    if option == 'u' :
        player = int(input("\nEnter a jersey number:\n"))
        rating = int(input("Enter a new rating for player:\n"))
        roster[player] = rating
        option = pickOption()

    '''Output Players Above a Rating'''    
    if option == 'r' :
        rating = int(input("\nEnter a rating:\n"))
        print("\nABOVE {}".format(rating))
        for player in roster :
            if roster[player] > rating :
                print(f"Jersey number: {player}, Rating: {roster[player]}")
        option = pickOption()

    '''Output Roster'''    
    if option == 'o' :
        print("\nROSTER\n")
        unsortedRoster = roster
        sortedRoster = dict()
        rosterList = sorted(roster)
        for item in rosterList :
            sortedRoster[item] = unsortedRoster[item]
        for key in rosterList :
            print(f"Jersey number: {key}, Rating: {roster[key]}")
        option = pickOption()
