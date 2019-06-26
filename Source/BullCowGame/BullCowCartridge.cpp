// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    // Welcome Player
    PrintLine(TEXT("Welcome to Bull Cow Game"));
    // Set HiddenWord
    HiddenWord = "chump";
    PrintLine(TEXT("Guess the 5 letter word"));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
     
    // Check Player Input
    if(Input == HiddenWord)
    {
        PrintLine(TEXT("You Win"));
    }
    else
    {
        PrintLine(TEXT("LOSER"));
    }
    // Display Fail Win
    
    // Play Again / Quit
}