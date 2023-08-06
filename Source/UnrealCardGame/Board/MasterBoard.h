#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MasterBoard.generated.h"

class ATeamBoard;

UCLASS()
class UNREALCARDGAME_API AMasterBoard : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "2", ClampMax = "4"))
	int TeamCount = 2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "3", ClampMax = "5"))
	int BoardSize = 3;

	UPROPERTY(BlueprintReadWrite)
	TArray<ATeamBoard*> TeamBoards;
};
