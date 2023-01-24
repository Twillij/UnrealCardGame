#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Duelist.generated.h"

UCLASS()
class PROTOTYPECARDGAME_API UDuelist : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Life;
};
