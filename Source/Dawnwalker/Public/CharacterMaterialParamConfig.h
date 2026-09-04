#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "CharacterMaterialParamConfig.generated.h"

USTRUCT(BlueprintType)
struct FCharacterMaterialParamConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimitiveDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ValueOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearOnDialogueStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearOnDayTimeChanged;
    
    DAWNWALKER_API FCharacterMaterialParamConfig();
};

