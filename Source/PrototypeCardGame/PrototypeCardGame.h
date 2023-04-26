#pragma once

#include "CoreMinimal.h"
#include "PrototypeCardGame.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogPrototypeCardGame, Log, All);

UENUM(BlueprintType)
enum class EActionStatus : uint8
{
	NotAttempted,
	InProgress,
	Success,
	Failure
};

UENUM(BlueprintType)
enum class ECardLocation : uint8
{
	Deck,
	Hand,
	Board,
	Retreated
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
