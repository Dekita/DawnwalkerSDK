#pragma once
#include "CoreMinimal.h"
#include "ECharacterAttitude.h"
#include "QuestConditionType.h"
#include "ActorReference.h"
#include "QuestConditionNPCAttitudeType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionNPCAttitudeType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAttitude Attitude;
    
public:
    UQuestConditionNPCAttitudeType();

    UFUNCTION(BlueprintCallable)
    void OnNPCAttitudeChanged(const ECharacterAttitude NewAttitude);
    
};

