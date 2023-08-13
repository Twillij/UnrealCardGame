#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SinglePlayerMode.generated.h"

class UTeam;
class UTurn;

UCLASS()
class UNREALCARDGAME_API ASinglePlayerMode : public AGameModeBase
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
