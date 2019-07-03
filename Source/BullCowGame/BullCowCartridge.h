// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "BullCowCartridge.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BULLCOWGAME_API UBullCowCartridge : public UCartridge
{
	GENERATED_BODY()

	public:
	virtual void BeginPlay() override;
	virtual void OnInput(const FString& Input) override;
	void InitGame();
	void EndGame();
	void ProcessGuess(FString Guess);
	void SubtractLife();
	static bool IsIsogram(FString Word);
	void GetBullCows(FString Guess, int32& BullCount, int32& CowCount) const;
	static FString GetStartingWord();
	static TArray<FString> FilterForIsograms(TArray<FString> WordList); 
	static TArray<FString> FilterLength(TArray<FString> WordList); 

	// Your declarations go below!
	private:
	FString HiddenWord;
	int Lives;
	bool bGameOver;
};
