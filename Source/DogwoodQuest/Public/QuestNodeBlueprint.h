#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeBlueprint.generated.h"

class UQuestBlueprintBase;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeBlueprint : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UQuestBlueprintBase> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UQuestNodeBlueprint();

};

