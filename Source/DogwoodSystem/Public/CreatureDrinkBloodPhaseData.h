#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CreatureDrinkBloodPhaseData.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSYSTEM_API FCreatureDrinkBloodPhaseData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalSegmentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodSegmentGain;
    
    FCreatureDrinkBloodPhaseData();
};

