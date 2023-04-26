#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Phase.generated.h"

class UTurn;
class UAction;

UCLASS()
class PROTOTYPECARDGAME_API UPhase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	UTeam* Turn;

	UPROPERTY(BlueprintReadWrite)
	TArray<UAction*> Actions;
};
