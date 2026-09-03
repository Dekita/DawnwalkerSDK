#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeChapelManager.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API UQuestNodeChapelManager : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ChapelReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifyFastTravelEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFastTravelEnabled;
    
    UQuestNodeChapelManager();

};

