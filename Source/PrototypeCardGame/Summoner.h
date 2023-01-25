#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Summoner.generated.h"

class UTeam;
class ADeck;

UCLASS()
class PROTOTYPECARDGAME_API USummoner : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTeam* Team;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADeck* Deck;
};
