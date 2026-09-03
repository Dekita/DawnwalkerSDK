#pragma once
#include "CoreMinimal.h"
#include "RebelCrowdController.h"
#include "DawnwalkerCrowdController.generated.h"

class UCombatSubsystem;
class URebelRoadsSubsystemInterface;

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerCrowdController : public URebelCrowdController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCombatSubsystem* CombatSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelRoadsSubsystemInterface* RoadsSubsystem;
    
public:
    UDawnwalkerCrowdController();

};

