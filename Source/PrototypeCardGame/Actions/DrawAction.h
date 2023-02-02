#pragma once

#include "CoreMinimal.h"
#include "Action.h"
#include "DrawAction.generated.h"

class ADeck;

UCLASS()
class PROTOTYPECARDGAME_API UDrawAction : public UAction
{
	GENERATED_BODY()

public:
	UDrawAction();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int DrawAmount = 1;

	UPROPERTY(BlueprintReadWrite)
	ADeck* TargetDeck;

public:
	virtual bool IsValidAction_Implementation() override;
	virtual void Execute_Implementation() override;
};
