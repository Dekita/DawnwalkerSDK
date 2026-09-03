#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_AudioBase.h"
#include "AudioCharacterAnimTagEntry.h"
#include "AnimNotify_AudioTaggedBase.generated.h"

class UCommunityNPCDefinitionBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class DAWNWALKER_API UAnimNotify_AudioTaggedBase : public UAnimNotify_AudioBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationAudioTag;
    
    UAnimNotify_AudioTaggedBase();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetIsVocalized(const bool bValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FAudioCharacterAnimTagEntry Preview_GetRelatedTaggedData(FGameplayTag AnimNotifyTag, bool IsMainCharacter, TSoftClassPtr<UCommunityNPCDefinitionBase> NPCDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<UCommunityNPCDefinitionBase> Preview_GetNpcDefinition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Preview_GetIsMainCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OverrideAnimationAudioTag(FGameplayTag AnimationAudioTagOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FAudioCharacterAnimTagEntry GetRelatedTaggedData(FGameplayTag AnimNotifyTag, USkeletalMeshComponent* MeshComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Debug_PrintAnimTagEntry(USkeletalMeshComponent* MeshComp, FAudioCharacterAnimTagEntry Entry) const;
    
};

