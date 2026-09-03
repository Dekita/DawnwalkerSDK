#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialoguePropAttachBonePicker.h"
#include "DialoguePropNamePicker.h"
#include "PropGenerationData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FPropGenerationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialoguePropNamePicker PropName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialoguePropAttachBonePicker AttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    FPropGenerationData();
};

