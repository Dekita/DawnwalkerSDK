#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CinematicIdleParams.h"
#include "ECinematicIdleType.h"
#include "GarmentAdditiveOffsets.h"
#include "CinematicAnimInstanceBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class DIALOGUESYSTEM_API UCinematicAnimInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECinematicIdleType, FCinematicIdleParams> ParamsByType;
    
public:
    UCinematicAnimInstanceBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetDynamicCinematicState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGarmentAdditiveOffsets CalculateGarmentAdditiveOffsets() const;
    
};

