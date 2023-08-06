#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnrealCardGame.h"
#include "Card.generated.h"

class UAction;
class USummoner;
class UTeam;

UCLASS()
class UNREALCARDGAME_API ACard : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	USummoner* OwningPlayer;

	UPROPERTY(BlueprintReadWrite)
	UTeam* ControllingTeam;

	UPROPERTY(BlueprintReadWrite)
	ECardLocation CardLocation;

	UPROPERTY(BlueprintReadWrite)
	ECardPosition CardPosition;

	UPROPERTY(BlueprintReadWrite)
	TArray<UAction*> AvailableActions;
};
