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
        if (Input == HiddenWord)
        {
            PrintLine(TEXT("You Win"));
            EndGame();
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
                EndGame();         
            }    
        }
    }
} 

void UBullCowCartridge::InitGame()
{
    // Set Gamestate
    HiddenWord = "chump";
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
