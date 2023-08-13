#pragma once

#include "CoreMinimal.h"
#include "UnrealCardGame/UnrealCardGame.h"
#include "UObject/NoExportTypes.h"
#include "Action.generated.h"

class AGamePlayerController;

UCLASS()
class UNREALCARDGAME_API UAction : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(BlueprintReadWrite)
	EActionStatus ActionStatus = EActionStatus::NotAttempted;
	
	UPROPERTY(BlueprintReadWrite)
	AGamePlayerController* InitiatingPlayer;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsValidAction();

	UFUNCTION(BlueprintNativeEvent)
	void Execute();
};
