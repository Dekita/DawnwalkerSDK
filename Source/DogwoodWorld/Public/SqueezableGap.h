#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SqueezableGap.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ASqueezableGap : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* StartComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EndComponent;
    
public:
    ASqueezableGap(const FObjectInitializer& ObjectInitializer);

};

