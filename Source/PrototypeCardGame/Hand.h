#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Hand.generated.h"

class ACard;

UCLASS()
class PROTOTYPECARDGAME_API AHand : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0"))
	int StartingHandSize = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "5"))
	int MaximumHandSize = 10;

	UPROPERTY(BlueprintReadWrite)
	TArray<ACard*> Cards;

public:
	UFUNCTION(BlueprintPure)
	int GetHandSize() { return Cards.Num(); }
};
