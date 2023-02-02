#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MatchGameMode.generated.h"

class UTeam;

UCLASS()
class PROTOTYPECARDGAME_API AMatchGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	int TurnNumber = 0;

	UPROPERTY(BlueprintReadWrite)
	TArray<UTeam*> Teams;
};
