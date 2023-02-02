#pragma once

#include "CoreMinimal.h"
#include "Engine/Player.h"
#include "Summoner.generated.h"

class UTeam;
class ADeck;
class AHand;

UCLASS()
class PROTOTYPECARDGAME_API USummoner : public UPlayer
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
