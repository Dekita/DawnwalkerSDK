#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RebelStackedLinkedAnimLayers.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FRebelStackedLinkedAnimLayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> LinkedAnimLayersClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkedAnimLayersHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    REBELLOCOMOTION_API FRebelStackedLinkedAnimLayers();
};

