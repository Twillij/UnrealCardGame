#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Deck.generated.h"

class ACard;

UCLASS()
class PROTOTYPECARDGAME_API ADeck : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "20"))
	int MinimumDeckSize = 40;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "20"))
	int MaximumDeckSize = 60;

	UPROPERTY(BlueprintReadWrite)
	TArray<ACard*> Cards;

public:
	UFUNCTION(BlueprintPure)
	int GetDeckSize() { return Cards.Num(); }
};
