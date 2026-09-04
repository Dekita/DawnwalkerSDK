#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RebelFoliageRuntimeWorldSubsystem.generated.h"

class URebelFoliageSettings;

UCLASS(Blueprintable)
class REBELFOLIAGE_API URebelFoliageRuntimeWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelFoliageSettings* SettingsPtr;
    
public:
    URebelFoliageRuntimeWorldSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnSettingsDataAssetLoaded();
    
};

