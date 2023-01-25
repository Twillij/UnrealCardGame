#pragma once

#include "CoreMinimal.h"
#include "CardAction.h"
#include "SummonAction.generated.h"

class AZone;

UCLASS()
class PROTOTYPECARDGAME_API USummonAction : public UCardAction
{
	GENERATED_BODY()

public:


public:
	USummonAction();

	virtual bool IsValidAction_Implementation() override;
	virtual void Execute_Implementation() override;

	void Summon(AZone* TargetZone);
};
