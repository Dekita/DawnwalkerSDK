#pragma once
#include "CoreMinimal.h"
#include "EJaliParalingualBearings.generated.h"

UENUM(BlueprintType)
enum class EJaliParalingualBearings : uint8 {
    Annotation,
    Expression,
    Disgust = 70,
    Dislike = 75,
    Angered = 80,
    Provoked = 85,
    Thinking = 90,
    Scheming,
    Scheming_Right,
    Devious,
    Devilish,
    Watchful,
    Neutral = 100,
    Polite = 105,
    Friendly = 110,
    Sassy = 112,
    Smug,
    Cocky,
    Friendly_Right,
    Sassy_Right,
    Smug_Right,
    Cocky_Right,
    Nervous,
    Panicky,
    Intimidating = 125,
    Confused = 130,
    Lost = 135,
    Nothing,
    Singing_Serene = 150,
};

