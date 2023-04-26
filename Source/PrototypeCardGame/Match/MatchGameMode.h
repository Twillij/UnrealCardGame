#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MatchGameMode.generated.h"

class UTeam;
class UTurn;

UCLASS()
class PROTOTYPECARDGAME_API AMatchGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	TArray<UTeam*> Teams;
	
	UPROPERTY(BlueprintReadWrite)
	TArray<UTurn*> Turns;

public:
	UFUNCTION(BlueprintPure)
	int GetTurnCount() const { return Turns.Num(); }
	
	UFUNCTION(BlueprintPure)
	UTurn* GetCurrentTurn() const;
};
