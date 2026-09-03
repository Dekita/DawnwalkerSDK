#pragma once
#include "CoreMinimal.h"
#include "CommunityBaseActivator.h"
#include "Community_SinleEntry_SinglePhase_PhaseActivator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POPULATION_API UCommunity_SinleEntry_SinglePhase_PhaseActivator : public UCommunityBaseActivator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseName;
    
public:
    UCommunity_SinleEntry_SinglePhase_PhaseActivator();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetPhaseNameOptions() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetEntryNameOptions() const;
    
};

