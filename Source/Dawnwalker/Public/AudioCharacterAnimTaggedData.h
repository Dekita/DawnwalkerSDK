#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AudioCharacterAnimTagEntry.h"
#include "AudioCharacterAnimTaggedData.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FAudioCharacterAnimTaggedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioCharacterAnimTagEntry> TagEntries;
    
    FAudioCharacterAnimTaggedData();
};

