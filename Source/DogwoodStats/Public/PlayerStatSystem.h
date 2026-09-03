#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PlayerStatSystem.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class DOGWOODSTATS_API UPlayerStatSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FollowerMultipliers;
    
public:
    UPlayerStatSystem();

};

