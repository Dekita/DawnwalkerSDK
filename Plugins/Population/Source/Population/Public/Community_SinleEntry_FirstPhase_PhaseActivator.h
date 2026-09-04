#pragma once
#include "CoreMinimal.h"
#include "CommunityBaseActivator.h"
#include "Community_SinleEntry_FirstPhase_PhaseActivator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POPULATION_API UCommunity_SinleEntry_FirstPhase_PhaseActivator : public UCommunityBaseActivator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryName;
    
public:
    UCommunity_SinleEntry_FirstPhase_PhaseActivator();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetEntryNameOptions() const;
    
};

