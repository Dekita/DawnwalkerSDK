#pragma once
#include "CoreMinimal.h"
#include "AnimationPayloadSectionData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FAnimationPayloadSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    FAnimationPayloadSectionData();
};

