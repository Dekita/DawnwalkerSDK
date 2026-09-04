#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestOwnerInfo.h"
#include "EncounterQuestOwnerInfo.generated.h"

UCLASS(Blueprintable)
class UEncounterQuestOwnerInfo : public UQuestOwnerInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EncounterTag;
    
public:
    UEncounterQuestOwnerInfo();

};

