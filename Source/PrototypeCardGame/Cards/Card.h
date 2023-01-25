#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../PrototypeCardGame.h"
#include "Card.generated.h"

class UCardAction;
class USummoner;
class UTeam;

UCLASS()
class PROTOTYPECARDGAME_API ACard : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	USummoner* OwningSummoner;

	UPROPERTY(BlueprintReadWrite)
	UTeam* ControllingTeam;

	UPROPERTY(BlueprintReadWrite)
	ECardPosition CardPosition;

	UPROPERTY(BlueprintReadWrite)
	TArray<UCardAction*> AvailableActions;
};
