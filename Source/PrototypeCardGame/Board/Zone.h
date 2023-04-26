#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrototypeCardGame.h"
#include "Zone.generated.h"

class ACard;

UCLASS()
class PROTOTYPECARDGAME_API AZone : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	ACard* Card;

public:
	UFUNCTION(BlueprintCallable)
	void PlaceCard(ACard* NewCard, ECardPosition Position);
};
