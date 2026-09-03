#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FollowerDamageMultiplierStat.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSTATS_API FFollowerDamageMultiplierStat : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    FFollowerDamageMultiplierStat();
};

