#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "SpeakerBoneName.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FSpeakerBoneName : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    FSpeakerBoneName();
};

