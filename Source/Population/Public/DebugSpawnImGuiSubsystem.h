#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DebugSpawnImGuiSubsystem.generated.h"

class ASpawnPoint;
class UDataTable;
class UDebugSpawnActivator;

UCLASS(Blueprintable)
class POPULATION_API UDebugSpawnImGuiSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GeneratedDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawnPoint* GeneratedSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugSpawnActivator* Activator;
    
public:
    UDebugSpawnImGuiSubsystem();

};

