#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AudioNPCBodyTypeData.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FAudioNPCBodyTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCBodyType;
    
    FAudioNPCBodyTypeData();
};

