#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DawnwalkerLightBase.generated.h"

class ULightComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerLightBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> LightComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowCastingDistanceRatio;
    
    ADawnwalkerLightBase(const FObjectInitializer& ObjectInitializer);

};

