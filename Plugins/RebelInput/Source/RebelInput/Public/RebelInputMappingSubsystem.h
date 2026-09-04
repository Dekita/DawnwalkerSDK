#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GameplayTagContainer.h"
#include "MappedRebelInput.h"
#include "RebelInputRow.h"
#include "RebelInputMappingSubsystem.generated.h"

class UEnhancedInputLocalPlayerSubsystem;
class UInputMappingContext;
class URebelInputMappingSave;
class URebelInputPreset;

UCLASS(Blueprintable)
class REBELINPUT_API URebelInputMappingSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRebelInputPresetChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRebelInputDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelInputPresetChangedDelegate OnInputPresetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelInputDelegate BPOnMappingsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelInputDelegate BPOnPendingKeysUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelInputMappingSave* PlayerMappingSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnhancedInputLocalPlayerSubsystem* InputSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PresetOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputMappingContext*> RebindableContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, URebelInputPreset*> LoadedInputPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelInputPreset* DefaultKeyboardPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelInputPreset* ActiveGamepadInputPreset;
    
public:
    URebelInputMappingSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRebelInputRow GetMappingInfo(const FName& InMappingName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMappedRebelInput GetInputForMapping(const FName& InMappingName, bool bIncludePending) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelInputPreset* GetActiveGamepadPreset();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyPendingKeyboardMappings();
    
};

