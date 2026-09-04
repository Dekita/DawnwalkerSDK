#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "FlowWorldSettings.generated.h"

class UFlowComponent;

UCLASS(Blueprintable)
class FLOW_API AFlowWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlowComponent* FlowComponent;
    
public:
    AFlowWorldSettings(const FObjectInitializer& ObjectInitializer);

};

