#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "EWeaponDamageEdge.h"
#include "SwordDamageValue.generated.h"

USTRUCT(BlueprintType)
struct FSwordDamageValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponDamageEdge Edge;
    
    DOGWOODINVENTORY_API FSwordDamageValue();
};

