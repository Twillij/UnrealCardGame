#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Turn.generated.h"

class UTeam;
class UPhase;

UCLASS()
class UNREALCARDGAME_API UTurn : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	UTeam* Team;

	UPROPERTY(BlueprintReadWrite)
	UPhase* StandbyPhase;

	UPROPERTY(BlueprintReadWrite)
	UPhase* MainPhase;
	
	UPROPERTY(BlueprintReadWrite)
	UPhase* BattlePhase;

	UPROPERTY(BlueprintReadWrite)
	UPhase* EndPhase;
};
