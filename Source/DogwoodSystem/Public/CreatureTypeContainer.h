#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.generated.h"

USTRUCT(BlueprintType)
struct FCreatureTypeContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> Creatures;
    
    DOGWOODSYSTEM_API FCreatureTypeContainer();
};

