#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "RebelCrowdSubsystem.generated.h"

class URebelCrowdController;

UCLASS(Blueprintable, Config=Game)
class POPULATION_API URebelCrowdSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelCrowdController> CrowdControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelCrowdController* CrowdController;
    
public:
    URebelCrowdSubsystem();

};

