#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EPilloryTeleportResult.h"
#include "PoliceSystem.generated.h"

class AStealableVolume;
class UCinematicDialogue;
class UDataTable;
class UPoliceSquadCommunityEntryProvider;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UPoliceSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicDialogue* ActiveChaseDialogueInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicDialogue* ImprisonedDialogueInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UDataTable*, UPoliceSquadCommunityEntryProvider*> RegisteredPoliceSquads;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<AStealableVolume>> StealableVolumes;
    
public:
    UPoliceSystem();

    UFUNCTION(BlueprintCallable)
    EPilloryTeleportResult TryTeleportToNearestPillory();
    
    UFUNCTION(BlueprintCallable)
    void TriggerCaughtDialogue(const FName& DialogueInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJailEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCaughtDialogueLoadingOrActive() const;
    
};

