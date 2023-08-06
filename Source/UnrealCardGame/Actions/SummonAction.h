#pragma once

#include "CoreMinimal.h"
#include "Action.h"
#include "SummonAction.generated.h"

class ASummonCard;

UCLASS()
class UNREALCARDGAME_API USummonAction : public UAction
{
	GENERATED_BODY()

public:
	USummonAction();

	UPROPERTY(BlueprintReadWrite)
	ASummonCard* SummonTarget;

public:
	virtual bool IsValidAction_Implementation() override;
	virtual void Execute_Implementation() override;
};
