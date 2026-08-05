# for constant used enum

from enum import Enum;

class State(Enum):
    INACTIVE = 0
    ACTIVE = 1
 
print(State.ACTIVE) # State.ACTIVE
print(State.INACTIVE) # State.INACTIVE
print(State.ACTIVE.value) # 1
print(State.INACTIVE.value) # 0
print(State(1)) # State.ACTIVE
print(State(0)) # State.INACTIVE
print(State['ACTIVE']) # State.ACTIVE
print(State['ACTIVE'].value) # 1
print(State["INACTIVE"].value) # 0

print(list(State)) # [<State.INACTIVE: 0>, <State.ACTIVE: 1>]
print(len(State)) # 2