#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "EAudioType.h"
#include "QuestNodePlaySound.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePlaySound : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioType AudioType;
    
public:
    UQuestNodePlaySound();

};

