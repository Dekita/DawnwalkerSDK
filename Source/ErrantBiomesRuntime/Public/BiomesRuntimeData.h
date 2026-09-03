#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BiomesRuntimeData.generated.h"

class UObject;

UCLASS(Blueprintable)
class ERRANTBIOMESRUNTIME_API ABiomesRuntimeData : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Objects;
    
    ABiomesRuntimeData(const FObjectInitializer& ObjectInitializer);

};

