#pragma once

#include "CoreMinimal.h"
#include "Action.h"
#include "CardAction.generated.h"

class ACard;

UCLASS()
class PROTOTYPECARDGAME_API UCardAction : public UAction
{
	GENERATED_BODY()
	
public:
	ACard* Card;
};
