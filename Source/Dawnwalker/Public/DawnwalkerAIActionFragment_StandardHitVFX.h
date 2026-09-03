#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "EDawnwalkerAIActionFragment_StandardHitVFX_Type.h"
#include "DawnwalkerAIActionFragment_StandardHitVFX.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIActionFragment_StandardHitVFX : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDawnwalkerAIActionFragment_StandardHitVFX_Type VFXType;
    
    FDawnwalkerAIActionFragment_StandardHitVFX();
};

