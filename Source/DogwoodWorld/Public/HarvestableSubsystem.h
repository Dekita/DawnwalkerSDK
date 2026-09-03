#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "HarvestableSubsystem.generated.h"

class UHarvestablesConfig;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UHarvestableSubsystem : public UWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHarvestablesConfig* HarvestablesConfig;
    
public:
    UHarvestableSubsystem();


    // Fix for true pure virtual functions not being implemented
};

