#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AudioAnimPoseMockupSubsystem.generated.h"

class ADawnwalkerPlayerCharacter;
class UAudioAnimationNotifyProcessingSubsystem;

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioAnimPoseMockupSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioAnimationNotifyProcessingSubsystem* AudioAnimationNotifyProcessingSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADawnwalkerPlayerCharacter* MainCharacter;
    
public:
    UAudioAnimPoseMockupSubsystem();

};

