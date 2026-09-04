#pragma once
#include "CoreMinimal.h"
#include "CreatureInterface.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "FocusAbilityTargetable.h"
#include "ActiveAbilityGenericTarget.generated.h"

class UAbilitySystemComponent;
class UCharacterBaseAttributeSet;

UCLASS(Blueprintable)
class DOGWOODFOCUS_API AActiveAbilityGenericTarget : public AActor, public IAbilitySystemInterface, public ICreatureInterface, public IFocusAbilityTargetable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterBaseAttributeSet* CharacterAttributeSet;
    
    AActiveAbilityGenericTarget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreatureType() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool IsBossCharacter() const override PURE_VIRTUAL(IsBossCharacter, return false;);

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }

};

