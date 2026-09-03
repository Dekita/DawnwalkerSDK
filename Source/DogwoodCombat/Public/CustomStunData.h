#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "CustomStunReactionMontage.h"
#include "CustomStunData.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FCustomStunData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FCustomStunReactionMontage, FCreatureTypeContainer> CustomStunDataToCreatureType;
    
    FCustomStunData();
};

