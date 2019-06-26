// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    // Welcome Player
    PrintLine(TEXT("Welcome to Bull Cow Game"));
    // Set Gamestate
    // GameWon = false;
    HiddenWord = "chump";
    Lives = 3;
    PrintLine(TEXT("Guess the %i letter word, you have %i lives"), HiddenWord.Len(), Lives);
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    // Check Lives 
    // Check Player Input
    // while(GameWon = false)

    // if (Lives > 0)
    
    
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You Win"));
    }
    else
    {
        --Lives;
        PrintLine(TEXT("Lost a Life"));
        if (Lives > 0)
        {
            PrintLine(TEXT("Sorry, try guessing again you have %i lives left"), Lives);
        }
        else
        {
            PrintLine(TEXT("No lives left!"));
            PrintLine(TEXT("Want to play again?"));
        }
        
    }

    
    
    
    
    
    // Display Fail Win
    
    // Play Again / Quit
}