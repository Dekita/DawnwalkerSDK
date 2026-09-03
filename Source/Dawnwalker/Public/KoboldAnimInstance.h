#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "KoboldAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DAWNWALKER_API UKoboldAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalVelocity;
    
public:
    UKoboldAnimInstance();

};

