#pragma once
#include "CoreMinimal.h"
#include "EPhaseActivationMode.h"
#include "CommunityBaseDebug.h"
#include "CommunityPhaseDebug.generated.h"

class UCommunityEntryDebug;
class UCommunity_SinleEntry_SinglePhase_PhaseActivator;

UCLASS(Blueprintable)
class DAWNWALKER_API UCommunityPhaseDebug : public UCommunityBaseDebug {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityEntryDebug* ParentEntryDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommunity_SinleEntry_SinglePhase_PhaseActivator* Activator;
    
public:
    UCommunityPhaseDebug();

    UFUNCTION(BlueprintCallable)
    void Activate(EPhaseActivationMode Mode);
    
};

