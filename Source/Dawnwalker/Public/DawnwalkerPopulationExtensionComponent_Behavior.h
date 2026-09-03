#pragma once
#include "CoreMinimal.h"
#include "PopulationExtensionComponent_Behavior.h"
#include "DawnwalkerPopulationExtensionComponent_Behavior.generated.h"

class UDogwoodNPCBehavior;

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerPopulationExtensionComponent_Behavior : public UPopulationExtensionComponent_Behavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDogwoodNPCBehavior* RuntimeBehavior;
    
    UDawnwalkerPopulationExtensionComponent_Behavior();

};

