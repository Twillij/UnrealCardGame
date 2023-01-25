#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeamBoard.generated.h"

class UTeam;
class ADeckZone;
class AGraveZone;
class ASummonZone;

UCLASS()
class PROTOTYPECARDGAME_API ATeamBoard : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	UTeam* Team;

	UPROPERTY(BlueprintReadWrite)
	ADeckZone* DeckZone;

	UPROPERTY(BlueprintReadWrite)
	AGraveZone* GraveZone;

	UPROPERTY(BlueprintReadWrite)
	TArray<ASummonZone*> VanguardZones;

	UPROPERTY(BlueprintReadWrite)
	TArray<ASummonZone*> RearguardZones;
};
