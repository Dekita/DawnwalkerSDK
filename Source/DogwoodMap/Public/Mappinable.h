#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mappinable.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class DOGWOODMAP_API AMappinable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRoot;
    
public:
    AMappinable(const FObjectInitializer& ObjectInitializer);

};

