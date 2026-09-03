#pragma once
#include "CoreMinimal.h"
#include "JaliAnimationSection.h"
#include "JaliTrackSection.generated.h"

class UCurveTable;
class USoundWave;

UCLASS(Blueprintable)
class JALI_API UJaliTrackSection : public UJaliAnimationSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* AnimationCurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* Sound;
    
    UJaliTrackSection();

};

