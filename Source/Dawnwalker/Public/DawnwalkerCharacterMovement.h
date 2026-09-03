#pragma once
#include "CoreMinimal.h"
#include "RebelCharacterMovement.h"
#include "DawnwalkerCharacterMovement.generated.h"

class UDawnwalkerTraversalMontageSet;
class UMotionWarpingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UDawnwalkerCharacterMovement : public URebelCharacterMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerTraversalMontageSet* StopAnimationsForAP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMotionWarpingComponent> MotionWarpingComponent;
    
    UDawnwalkerCharacterMovement(const FObjectInitializer& ObjectInitializer);

};

