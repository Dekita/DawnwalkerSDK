#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeWaitingBase.h"
#include "EVfxStopMode.h"
#include "QuestNodeVfxManager.generated.h"

class UNiagaraSystem;
class UStaticMesh;

UCLASS(Blueprintable)
class UQuestNodeVfxManager : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> VfxToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> ParameterMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVfxStopMode StopMode;
    
public:
    UQuestNodeVfxManager();

};

