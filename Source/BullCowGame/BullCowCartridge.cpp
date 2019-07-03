// Fill out your copyright notice in the Description page of Project Settings.

/* 
Code prototype complete functionally
Would like the refactor the list validation for ++Skill
Would like to implemenet a difficulty option to adjust lives and wordlength
Have noticed Gavin's code has a lot of consts with the functions - Why?
*/

#include "BullCowCartridge.h"
#include "WordCollection.h"

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
        ProcessGuess(Input.ToLower());
    }
} 

void UBullCowCartridge::InitGame()
{
    // Set Gamestate
    HiddenWord = GetStartingWord();
    Lives = HiddenWord.Len(); //Good enough difficulty adjustment for now
    bGameOver = false;
   
    // DEBUG LINES
    PrintLine(TEXT("Word is: %s\n"), *HiddenWord);
    
    PrintLine(TEXT("Welcome to Bull Cow Game"));
    PrintLine(TEXT("Guess the %i letter word. \nYou have %i lives"), HiddenWord.Len(), Lives);
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

    GetBullCows(Guess);

    PrintLine(TEXT("You have %i Bulls and %i Cows."), Bulls, Cows);
    PrintLine(TEXT("Sorry, try guessing again you have %i lives left"), Lives);  
}

void UBullCowCartridge::SubtractLife() // if I reference lives instead I can make const?
{
    --Lives;
}

bool UBullCowCartridge::IsIsogram(FString Word) const
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

void UBullCowCartridge::GetBullCows(FString Guess) const
{
    rBulls = 0;
    rCows = 0;
    for (int32 GuessIndex = 0; GuessIndex < Guess.Len(); ++GuessIndex)
    {
        // Looking for bulls
        if (Guess[GuessIndex] == HiddenWord[GuessIndex])
        {
            ++rBulls;
            // You  might inuit this: ++GuessIndex - but it wont work :-(
            continue;    // we could have if else'd this for loop
        }

        // Looking for cows
        for (int32 HiddenIndex = 0; HiddenIndex < HiddenWord.Len(); ++HiddenIndex)
        {
            if (Guess[GuessIndex] == HiddenWord[HiddenIndex])
            {
                ++rCows;
            }
        }
    }
}

FString UBullCowCartridge::GetStartingWord()
{
    
    TArray<FString> FilterWordList = FilterForIsograms(WordCollection);
    FilterWordList = FilterLength(FilterWordList);

    FString FoundWord = FilterWordList[FMath::RandRange(0, FilterWordList.Num() - 1)].ToLower(); // Has become case sensitve suddenly?

    return FoundWord;    
}

TArray<FString> UBullCowCartridge::FilterForIsograms(TArray<FString> WordList) const
{
    TArray<FString> IsogramList;

    for (int32 CollectionIndex = 0; CollectionIndex < WordList.Num(); ++CollectionIndex)
    {
        if (IsIsogram(WordList[CollectionIndex]))
        {
            IsogramList.Add(WordList[CollectionIndex]);   
        }
    }
    return IsogramList;
} 

TArray<FString> UBullCowCartridge::FilterLength(TArray<FString> WordList) const
{
    TArray<FString> RightLengthWords;

    for (int32 CollectionIndex = 0; CollectionIndex < WordList.Num(); ++CollectionIndex)
        
        if (WordList[CollectionIndex].Len() >= 4 && WordList[CollectionIndex].Len() <= 10)
        {
            RightLengthWords.Add(WordList[CollectionIndex]);   
        }
    return RightLengthWords;
}