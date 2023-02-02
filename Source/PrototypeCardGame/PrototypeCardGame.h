#pragma once

#include "CoreMinimal.h"
#include "PrototypeCardGame.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogPrototypeCardGame, Log, All);

UENUM(BlueprintType)
enum class ECardLocation : uint8
{
	Deck,
	Hand,
	Board,
	Grave
};

UENUM(BlueprintType)
enum class ECardPosition : uint8
{
	Standby,
	Active
};

UENUM(BlueprintType)
enum class ECardVisibility : uint8
{
	Visible,
	Hidden
};
