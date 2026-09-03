#pragma once
#include "CoreMinimal.h"
#include "CommunityBaseActivator.h"
#include "Community_AllEntries_SinglePhase_Activator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POPULATION_API UCommunity_AllEntries_SinglePhase_Activator : public UCommunityBaseActivator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseName;
    
public:
    UCommunity_AllEntries_SinglePhase_Activator();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetPhaseNameOptions() const;
    
};

