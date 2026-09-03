#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ERebelInputPresetType.h"
#include "RebelPresetMappingSettings.h"
#include "RebelInputPreset.generated.h"

class URebelInputPreset;

UCLASS(Blueprintable)
class REBELINPUT_API URebelInputPreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelInputPresetType Type;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelInputPreset* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRebelPresetMappingSettings> PresetMapping;
    
public:
    URebelInputPreset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBuiltPresetMapping(TMap<FName, FRebelPresetMappingSettings>& Output) const;
    
};

