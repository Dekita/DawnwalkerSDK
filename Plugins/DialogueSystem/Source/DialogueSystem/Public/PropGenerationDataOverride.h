#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialoguePropAttachBonePicker.h"
#include "DialoguePropNamePicker.h"
#include "PropGenerationDataOverride.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FPropGenerationDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePropData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialoguePropNamePicker PropNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialoguePropAttachBonePicker AttachBoneNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisibleOverride;
    
    FPropGenerationDataOverride();
};

