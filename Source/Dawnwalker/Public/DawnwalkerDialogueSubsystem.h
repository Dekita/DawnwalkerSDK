#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DawnwalkerDialogueSubsystem.generated.h"

class ACinematicCharacter;
class UAppearanceBase;
class UCinematicDialogue;
class UCinematicSubsystem;

UCLASS(Blueprintable)
class UDawnwalkerDialogueSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicSubsystem* CinematicSubsystem;
    
public:
    UDawnwalkerDialogueSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatStarted();
    
    UFUNCTION(BlueprintCallable)
    void CinematicModeStarted(UCinematicDialogue* InDialogue, bool bWasStateKept);
    
    UFUNCTION(BlueprintCallable)
    void CinematicModeFinished(UCinematicDialogue* InDialogue, bool bWasStateKept);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeAppearanceForCinematicCharacter(ACinematicCharacter* Character, UAppearanceBase* Appearance, bool bCleanGarmentSlotsBeforeApplying);
    
};

