from collections import Counter
from typing import List


def minNumberOfHours(initialEnergy: int, initialExperience: int, energy: List[int], experience: List[int]) -> int:
    trainingHour = 0
    i = 0
    while i < len(energy):


        if initialEnergy > energy[i] and initialExperience > experience[i]:
            initialEnergy -= energy[i]
            initialExperience += experience[i]
            i += 1
        if(i >= len(energy)): break
        if initialEnergy <= energy[i] and initialExperience <= experience[i] and i < len(energy):
            trainingHour += ((energy[i] - initialEnergy) + (experience[i] - initialExperience)) + 2

            initialEnergy += (energy[i] - initialEnergy) + 1
            initialExperience += (experience[i] - initialExperience) + 1
          
        elif initialEnergy > energy[i] and initialExperience <= experience[i] and i < len(energy):
            # print(initialEnergy, initialExperience)
            trainingHour += (experience[i] - initialExperience) + 1
            initialExperience += ((experience[i] - initialExperience)+1)

        elif initialEnergy <= energy[i] and initialExperience > experience[i] and i < len(energy):
            print(energy[i] - initialEnergy)
            trainingHour += (energy[i] - initialEnergy) + 1
            initialEnergy += ((energy[i] - initialEnergy)+1)


    return trainingHour


def main():

    # initialEnergy = 5
    # initialExperience = 3
    # energy = [1,4,3,2]
    # experience = [2,6,3,1]
    # initialEnergy = 22
    # initialExperience = 72
    # energy = [97]
    # experience = [71]

    # ans = minNumberOfHours(initialEnergy, initialExperience, energy, experience)
    # print(ans)

    print(64>>4)




if __name__ == "__main__":
    main()