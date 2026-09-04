#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "TaskContext_GenerateLocationOnRoads.generated.h"

UCLASS(Blueprintable)
class REBELROADS_API UTaskContext_GenerateLocationOnRoads : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UTaskContext_GenerateLocationOnRoads();

};

