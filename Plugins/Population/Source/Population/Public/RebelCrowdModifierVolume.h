#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "RebelCrowdModifierVolume.generated.h"

class UCurveFloat;
class URebelCrowdSubsystem;

UCLASS(Blueprintable)
class POPULATION_API ARebelCrowdModifierVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DayQuantityMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DayQuantityMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NightQuantityMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NightQuantityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RainCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelCrowdSubsystem* CrowdSubsystem;
    
public:
    ARebelCrowdModifierVolume(const FObjectInitializer& ObjectInitializer);

};

