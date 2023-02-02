#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Action.generated.h"

class USummoner;

UCLASS()
class PROTOTYPECARDGAME_API UAction : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(BlueprintReadWrite)
	USummoner* InitiatingPlayer;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsValidAction();

	UFUNCTION(BlueprintNativeEvent)
	void Execute();
};
