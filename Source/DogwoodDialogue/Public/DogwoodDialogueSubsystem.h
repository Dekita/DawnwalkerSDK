#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DayPhaseChangeBlockerInterface.h"
#include "Subsystems/WorldSubsystem.h"
#include "ItemPaymentSpecialChoiceSelectedDelegate.h"
#include "LastVampireUrgeForcedDelegate.h"
#include "NPCSpecialChoiceSelectedDelegate.h"
#include "ProgressTimeAbsoluteSpecialChoiceSelectedDelegate.h"
#include "ProgressTimeRelativeSpecialChoiceSelectedDelegate.h"
#include "ReadSpecialChoiceSelectedDelegate.h"
#include "ShopSpecialChoiceSelectedDelegate.h"
#include "SpecialChoiceSelectedDelegate.h"
#include "UpgradeSpecialChoiceSelectedDelegate.h"
#include "DogwoodDialogueSubsystem.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UCinematicDialogue;
class UCinematicNode;
class UCinematicSubsystem;
class UCurveFloat;
class UProgressTimeSpecialChoiceBase;
class UVampireHungerSubsystem;

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UDogwoodDialogueSubsystem : public UWorldSubsystem, public IDayPhaseChangeBlockerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialChoiceSelected OnExitSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialChoiceSelected OnStorageSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPCSpecialChoiceSelected OnHealerSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPCSpecialChoiceSelected OnTeacherSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPCSpecialChoiceSelected OnFistfightSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPCSpecialChoiceSelected OnSwordfightSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLastVampireUrgeForced OnLastVampireUrgeForced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressTimeRelativeSpecialChoiceSelected OnProgressTimeRelativeSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressTimeAbsoluteSpecialChoiceSelected OnProgressTimeAbsoluteSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadSpecialChoiceSelected OnReadSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialChoiceSelected OnVampireUrgeSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPCSpecialChoiceSelected OnDrinkBloodSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShopSpecialChoiceSelected OnShopSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpgradeSpecialChoiceSelected OnUpgradeSpecialChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemPaymentSpecialChoiceSelected OnItemPaymentSpecialChoiceSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UProgressTimeSpecialChoiceBase> DelayedProgressTimeSpecialChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCinematicSubsystem> CachedCinematicSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CachedVampireHungerFearIntensityRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CachedVampireHungerFearIntensityBuildupEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CachedVampireHungerFearIntensityBuildupStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CachedVampireHungerDrainNPCEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CachedVampireHungerEffectIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVampireHungerSubsystem> CachedVampireHungerSubsystem;
    
public:
    UDogwoodDialogueSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNodePlaybackStarted(UCinematicNode* Node);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnDialoguePlaybackStarted(UCinematicDialogue* Dialogue, bool bWasStateKept);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueFinished(UCinematicDialogue* Dialogue, const bool bKeepDialogueState);
    
    UFUNCTION(BlueprintCallable)
    void OnChoiceSelected(FGuid ChoiceGuid, int32 ChoiceIndex, bool bWasForced);
    

    // Fix for true pure virtual functions not being implemented
};

