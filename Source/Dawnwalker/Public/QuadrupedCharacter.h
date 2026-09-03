#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CombatComponentGetterInterface.h"
#include "DawnwalkerCharacterBase.h"
#include "QuadrupedCharacter.generated.h"

class UInteractableComponent;
class UNPCCombatComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API AQuadrupedCharacter : public ADawnwalkerCharacterBase, public ICombatComponentGetterInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNPCCombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName InteractionAttachSocketName;
    
public:
    AQuadrupedCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetInteractionPrompt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetInteractionLocation() const;
    

    // Fix for true pure virtual functions not being implemented
};

