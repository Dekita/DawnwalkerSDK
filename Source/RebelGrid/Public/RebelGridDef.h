#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelGridDef.generated.h"

USTRUCT(BlueprintType)
struct REBELGRID_API FRebelGridDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
    FRebelGridDef();
};

