#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Action.generated.h"

UCLASS()
class PROTOTYPECARDGAME_API UAction : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ActionName;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsValidAction();

	UFUNCTION(BlueprintNativeEvent)
	void Execute();
};
