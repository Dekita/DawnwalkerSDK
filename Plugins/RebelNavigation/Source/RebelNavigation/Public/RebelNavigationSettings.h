#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelNavigationSettings.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class REBELNAVIGATION_API URebelNavigationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> IgnoredActorClasses;
    
    URebelNavigationSettings();

};

