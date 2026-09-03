#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_AudioBase.generated.h"

class AActor;
class UAkAudioEvent;
class UMeshComponent;
class URWAudioComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class DAWNWALKER_API UAnimNotify_AudioBase : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AINoiseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivationBlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVocalized;
    
public:
    UAnimNotify_AudioBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 PostVocalizedSoundEffect(URWAudioComponent* Target, UAkAudioEvent* Event) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsVocalizedNotifyAllowed(const USkeletalMeshComponent* MeshComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnerInWater(const UMeshComponent* MeshComp) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsInProximityToPlayerCharacterToPlay(AActor* Owner, float EventAttenuation) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAnimationPreview(const UMeshComponent* MeshComp) const;
    
};

