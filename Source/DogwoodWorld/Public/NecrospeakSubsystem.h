#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "NecrospeakSubsystem.generated.h"

class UNecrospeakConfig;
class UStringTable;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UNecrospeakSubsystem : public UWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UNecrospeakConfig*> LoadedNecrospeakMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* SpecialChoicesStringTable;
    
public:
    UNecrospeakSubsystem();


    // Fix for true pure virtual functions not being implemented
};

