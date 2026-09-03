#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DogwoodControlsLegendEntry.h"
#include "OnEntryChangedDelegate.h"
#include "DogwoodControlsLegendSubsystem.generated.h"

class UDogwoodControlsLegendPreset;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UDogwoodControlsLegendSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEntryChanged OnEntryActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEntryChanged OnEntryDeactivated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDogwoodControlsLegendPreset* ControlsLegendPreset;
    
public:
    UDogwoodControlsLegendSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllActiveEntries(TArray<FDogwoodControlsLegendEntry>& Entries) const;
    
};

