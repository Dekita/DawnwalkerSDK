#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EReplacementMode.h"
#include "ChoiceReplacementData.generated.h"

class UVampireUrgeEffectDataAsset;

USTRUCT(BlueprintType)
struct FChoiceReplacementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplacementMode ReplacementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVampireUrgeEffectDataAsset* EffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NewChoiceGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceToReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid OriginalChoiceGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeftUntilReplacementToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCurrentlyReplaced;
    
    DOGWOODUI_API FChoiceReplacementData();
};

