#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "RebelAIActionAbility.generated.h"

class UCommunityNPCDefinitionBase;
class URebelAIDef;
class URebelAIStub;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class REBELAI_API URebelAIActionAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnbreakableDuringCinematics;
    
    URebelAIActionAbility();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStub* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunityNPCDefinitionBase* GetNPCDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCharacterPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStub* GetAIStub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIDef* GetAIDefinition() const;
    
};

