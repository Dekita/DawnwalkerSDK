#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "ActiveEncounterData.h"
#include "CompletedEncounterData.h"
#include "EncounterSubsystem.generated.h"

class AEncounterActor;
class UEncounterData;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UEncounterSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FActiveEncounterData> ActiveEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCompletedEncounterData> CompletedEncounters;
    
    UEncounterSubsystem();

    UFUNCTION(BlueprintCallable)
    void MarkEncounterComplete(const FGameplayTag& EncounterTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEncounterActive(const UEncounterData* EncounterData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCompletedEncounterData GetCompletedEncounterData(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void BPDeactivateEncounter(AEncounterActor* OnActor);
    
    UFUNCTION(BlueprintCallable)
    void BPActivateEncounter(AEncounterActor* OnActor);
    
};

