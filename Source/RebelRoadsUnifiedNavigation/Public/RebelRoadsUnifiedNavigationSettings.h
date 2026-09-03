#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelRoadsUnifiedNavigationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELROADSUNIFIEDNAVIGATION_API URebelRoadsUnifiedNavigationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceAgentRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossPortalOccupancyRadius;
    
    URebelRoadsUnifiedNavigationSettings();

};

