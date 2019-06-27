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
        ProcessGuess(Input.ToLower());
    }
} 

void UBullCowCartridge::InitGame()
{
    // Set Gamestate
    SetStartingWord();
    //HiddenWord = TEXT("chump");
    Lives = 3;
    bGameOver = false;
    
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

// List of Possible Words IMPLEMENTED
// Reuse IsIsogram to test IMPLEMENETED
// Remove all Words > 10 || < 3 Letters IMPLEMENETED 
// Pick at Random a word from List (TArray) IMPLEMENETED
// Set Random word as Hidden Word IMPLEMENETED

// Get Player Difficulty -1-2-3
// Difficulty 1 = 3-5 Letter Word 
// Difficulty 1 = 6-8 Letter Word
// Difficulty 1 = 9 - 10 Letter
// Make length of word link to number or lives
// Random Words

void UBullCowCartridge::SetStartingWord(/*SelectedDifficulty*/)
{
    //Don't like that the List is stored here!
    TArray<FString> WordCollection = {"a", "ability", "Creeper", "Boris", "qazwsxedcrfv", "Sixth"}; 
    FString ListWord;
    int32 ArraySize = WordCollection.Num();

    // Check List for validity
    for (int32 CollectionIndex = 0; CollectionIndex < ArraySize; ++CollectionIndex)
    {
        if (!IsIsogram(*WordCollection[CollectionIndex]))
        {
            // RemoveFromList(); // Lacking skill to factor out (or brain capacity!)
            WordCollection.RemoveAt(CollectionIndex);
            --ArraySize;
            --CollectionIndex; // Because if two isograms are next to each other it'll be skipped over
        }
    }

    // Check minimum length
    for (int32 CollectionIndex = 0; CollectionIndex < ArraySize; ++CollectionIndex)
    {
        ListWord = *WordCollection[CollectionIndex];
        if (ListWord.Len() < 4 || ListWord.Len() > 10)
        {
            WordCollection.RemoveAt(CollectionIndex);
            --ArraySize;
            --CollectionIndex;
        }
    }

    HiddenWord = *WordCollection[rand() % WordCollection.Num()]; // Has become case sensitve suddenly?
    HiddenWord = HiddenWord.ToLower(); // Can this be done in one line?

    //DEBUG LINES
    PrintLine(TEXT("Number of Words: %i"), WordCollection.Num());    
    PrintLine(TEXT("Word is: %s"), *HiddenWord);

}

