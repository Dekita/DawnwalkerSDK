#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SmallObjectInvestigationActor.generated.h"

class ULightComponent;
class USmallObjectInvestigationComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ASmallObjectInvestigationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USmallObjectInvestigationComponent* InvestigationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULightComponent* LightComponent;
    
    ASmallObjectInvestigationActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupInvestigationLight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CleanupInvestigationLight();
    
};

