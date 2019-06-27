// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    InitGame();
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    if (bGameOver)
    {
        // WHY: User has finished game, and they have hit enter. 
        ClearScreen();
        InitGame();     
    }
    else
    {
        ProcessGuess(Input);
    }
} 

void UBullCowCartridge::InitGame()
{
    // Set Gamestate
    HiddenWord = TEXT("chump");
    Lives = 3;
    bGameOver = false;
    
    PrintLine(TEXT("Welcome to Bull Cow Game"));
    PrintLine(TEXT("Guess the %i letter word, you have %i lives"), HiddenWord.Len(), Lives);
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press Return to play again"));
}

void UBullCowCartridge::ProcessGuess(FString Guess)
{
    if (Guess == HiddenWord)
    {
        PrintLine(TEXT("You Win"));
        EndGame();
        return;
    }

    if (Guess.Len() != HiddenWord.Len())
    {
        PrintLine(TEXT("Wrong number of characters."));
        PrintLine(TEXT("The hidden word is %i in length."), HiddenWord.Len());
        return;
    }

    if (!IsIsogram(Guess))
    {
        PrintLine(TEXT("You haven't entered an isogram"));
        PrintLine(TEXT("Remember, no repeating letters."));
        return;
    }

    SubtractLife();

    if (Lives <= 0)
    {
        PrintLine(TEXT("No lives left!"));
        PrintLine(TEXT("The word was: %s"), *HiddenWord);
        EndGame();   
        return;
    }    

    PrintBullCows(Guess);

    PrintLine(TEXT("Sorry, try guessing again you have %i lives left"), Lives);  
}

void UBullCowCartridge::SubtractLife()
{
    --Lives;
    PrintLine(TEXT("Lost a Life"));
}

bool UBullCowCartridge::IsIsogram(FString Word)
{
    for (int32 CurrentLetterIndex = 0; CurrentLetterIndex < Word.Len(); ++CurrentLetterIndex)
    {      
        for (int32 ComparisonLetterIndex = CurrentLetterIndex + 1; ComparisonLetterIndex < Word.Len(); ++ComparisonLetterIndex)
        {
            if (Word[CurrentLetterIndex] == Word[ComparisonLetterIndex])
            {
                return false;
            }
        } 
    }
    return true;
}

void UBullCowCartridge::PrintBullCows(FString Guess)
{
    int32 Bulls = 0;
    int32 Cows = 0;

    for (int32 GuessIndex = 0; GuessIndex < Guess.Len(); ++GuessIndex)
    {
        // Looking for bulls
        if (Guess[GuessIndex] == HiddenWord[GuessIndex])
        {
            ++Bulls;
            // You  might inuit this: ++GuessIndex - but it wont work :-(
            continue;    // we could have if else'd this for loop
        }

        // Looking for cows
        for (int32 HiddenIndex = 0; HiddenIndex < HiddenWord.Len(); ++HiddenIndex)
        {
            if (Guess[GuessIndex] == HiddenWord[HiddenIndex])
            {
                ++Cows;
            }
        }
        
    }
    
    PrintLine(TEXT("You have %i Bulls and %i Cows."), Bulls, Cows);
}
// Report Bulls And Cows
// Going to be similar to Isogram check

// For each letter in Word check against every HiddenWord letter
// If it is in word and in same place ++bull
// If it is in the word not in same place ++cow

// return bulls and cows


