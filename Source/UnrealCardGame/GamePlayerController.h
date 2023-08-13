#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GamePlayerController.generated.h"

class UTeam;
class ADeck;
class AHand;

UCLASS()
class UNREALCARDGAME_API AGamePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	UTeam* Team;

	UPROPERTY(BlueprintReadWrite)
	ADeck* Deck;

	UPROPERTY(BlueprintReadWrite)
	ADeck* Hand;
};
