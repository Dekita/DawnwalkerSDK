#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "FDawnwalkerAIActionFragment_HitSoundType.h"
#include "DawnwalkerAIActionFragment_HitSound.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIActionFragment_HitSound : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerAIActionFragment_HitSoundType CombatSoundEventType;
    
    FDawnwalkerAIActionFragment_HitSound();
};

