#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "SpeakerBoneName.generated.h"

USTRUCT(BlueprintType)
struct FSpeakerBoneName : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FSpeakerBoneName();
};

